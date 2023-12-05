#include <SFML/graphics.hpp>
#include <cmath>

const double PI = 3.14159265358979323846;

sf::Vector2f rotate(const sf::Vector2f& v, double angle) {
    double rad = angle * PI / 180.0;
    return sf::Vector2f(v.x * cos(rad) - v.y * sin(rad), v.x * sin(rad) + v.y * cos(rad));
}

void drawKochLine(sf::RenderWindow& window, sf::Vector2f start, sf::Vector2f end, int depth) {
    if (depth == 0) {
        sf::Vertex line[] = {start, end};
        window.draw(line, 2, sf::Lines);
    } else {
        sf::Vector2f delta = (end - start) / 3.0f;
        sf::Vector2f p1 = start + delta;
        sf::Vector2f p2 = start + delta + rotate(delta, 60);
        sf::Vector2f p3 = start + 2.0f * delta;
        
        drawKochLine(window, start, p1, depth - 1);
        drawKochLine(window, p1, p2, depth - 1);
        drawKochLine(window, p2, p3, depth - 1);
        drawKochLine(window, p3, end, depth - 1);
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Koch Snowflake");

    int depth;
    std::cout << "Enter the depth of recursion: ";
    std::cin >> depth;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        
        sf::Vector2f p1(100, 500);
        sf::Vector2f p2(400, 100);
        sf::Vector2f p3(700, 500);

        drawKochLine(window, p1, p2, depth);
        drawKochLine(window, p2, p3, depth);
        drawKochLine(window, p3, p1, depth);

        window.display();
    }

    return 0;
}

