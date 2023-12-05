#include <GL/glut.h>

class Drawable {
public:
    virtual void draw() const = 0;
    virtual ~Drawable() {}
};

class Man : public Drawable {
public:
    void draw() const override {
        // Draw man using OpenGL commands
        glColor3f(0.0, 0.0, 1.0); // Set color to blue
        glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.1, 0.0);
        glVertex2f(0.1, 0.4);
        glVertex2f(0.0, 0.4);
        glEnd();

        // Draw head
        glColor3f(1.0, 1.0, 1.0); // Set color to white
        glBegin(GL_POLYGON);
        const float radius = 0.05;
        for (int i = 0; i < 360; i++) {
            float theta = i * 3.14159 / 180;
            glVertex2f(0.05 + radius * cos(theta), 0.4 + radius * sin(theta));
        }
        glEnd();
    }
};

class Rain : public Drawable {
public:
    void draw() const override {
        // Draw rain using OpenGL commands
        glColor3f(0.0, 0.0, 1.0); // Set color to blue
        glPointSize(3.0);

        glBegin(GL_POINTS);
        for (float x = -1.0; x <= 1.0; x += 0.1) {
            for (float y = 1.0; y >= 0.0; y -= 0.1) {
                glVertex2f(x, y);
            }
        }
        glEnd();
    }
};

class Umbrella : public Drawable {
public:
    void draw() const override {
        // Draw umbrella using OpenGL commands
        glColor3f(1.0, 0.0, 0.0); // Set color to red

        glBegin(GL_POLYGON);
        glVertex2f(-0.05, 0.4);
        glVertex2f(0.15, 0.4);
        glVertex2f(0.05, 0.6);
        glVertex2f(0.0, 0.6);
        glEnd();
    }
};

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the scene using polymorphism
    Drawable* man = new Man();
    Drawable* rain = new Rain();
    Drawable* umbrella = new Umbrella();

    man->draw();
    rain->draw();
    umbrella->draw();

    delete man;
    delete rain;
    delete umbrella;

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Man Walking in the Rain with Umbrella");
    glutDisplayFunc(display);
    glOrtho(-1.0, 1.0, 0.0, 1.0, -1.0, 1.0);
    glutMainLoop();
    return 0;
}

