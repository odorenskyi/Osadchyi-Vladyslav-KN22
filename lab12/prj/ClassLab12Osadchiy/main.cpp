#include <iostream>
#include "ModulesOsadchiy.h"

ClassLab12_Osadchiy::ClassLab12_Osadchiy(double r, double h) {
    radius = r;
    height = h;
}

double ClassLab12_Osadchiy::getRadius() {
    return radius;
}

double ClassLab12_Osadchiy::getHeight() {
    return height;
}

double ClassLab12_Osadchiy::calculateVolume() {
    const double PI = 3.14159;
    return PI * radius * radius * height;
}

double ClassLab12_Osadchiy::squareOfRadius() {
    return radius * radius;
}

double ClassLab12_Osadchiy::squareOfHeight() {
    return height * height;
}

void ClassLab12_Osadchiy::setRadius(double r) {
    radius = r;
}

void ClassLab12_Osadchiy::setHeight(double h) {
    height = h;
}
