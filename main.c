#include <stdio.h>
#include <Windows.h>
#include "myfunc1.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double a, b, c;
    double x1, y1, x2, y2, x3, y3;

    printf("Podaj długości boków trójkąta (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double areaBySides = calculateTriangleAreaBySides(a, b, c);
    printf("Pole trójkąta (według długości boków): %.2lf\n", areaBySides);

    printf("Podaj współrzędne wierzchołków trójkąta (x1, y1, x2, y2, x3, y3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double areaByVertices = calculateTriangleAreaByVertices(x1, y1, x2, y2, x3, y3);
    printf("Pole trójkąta (według współrzędnych wierzchołków): %.2lf\n", areaByVertices);

    return 0;
}