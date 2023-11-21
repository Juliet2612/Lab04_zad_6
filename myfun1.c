#include "myfunc1.h"

double calculateTriangleAreaBySides(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double calculateTriangleAreaByVertices(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    return calculateTriangleAreaBySides(a, b, c);
}