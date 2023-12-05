#include <iostream>
#include <graphics.h>

void drawDDALine(int x1, int y1, int x2, int y2) {
    int steps;
    float dx, dy, x, y, xIncrement, yIncrement;

    dx = x2 - x1;
    dy = y2 - y1;

    // Determine the number of steps to be taken
    steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    // Calculate the increment in x and y for each step
    xIncrement = dx / static_cast<float>(steps);
    yIncrement = dy / static_cast<float>(steps);

    // Initial coordinates
    x = x1;
    y = y1;

    // Draw the line
    for (int i = 0; i <= steps; ++i) {
        putpixel(static_cast<int>(x), static_cast<int>(y), WHITE);
        x += xIncrement;
        y += yIncrement;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    int x1, y1, x2, y2;

    std::cout << "Enter the Co-ordinates of starting point of line: ";
    std::cin >> x1 >> y1;
    std::cout << "Enter the Co-ordinates of end point of line: ";
    std::cin >> x2 >> y2;

    drawDDALine(x1, y1, x2, y2);

    getch();
    closegraph();

    return 0;
}

