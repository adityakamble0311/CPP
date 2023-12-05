#include <iostream>
#include <graphics.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
	line(120,320,240,200);
	getch();
	closegraph();
    return 0;
}

