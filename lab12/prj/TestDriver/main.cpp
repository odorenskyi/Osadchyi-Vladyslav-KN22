#include <iostream>
#include <ModulesOsadchiy.h>
using namespace std;

int main()
{
    double radius, height;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    ClassLab12_Osadchiy cylinder(radius, height);

    double volume = cylinder.calculateVolume();
    double squareRadius = cylinder.squareOfRadius();
    double squareHeight = cylinder.squareOfHeight();

    cout << "Volume of the cylinder: " << volume << endl;
    cout << "Square of the base radius: " << squareRadius << endl;
    cout << "Square of the height: " << squareHeight << endl;
    double newRadius, newHeight;

    cout << "Enter the new radius of the cylinder: ";
    cin >> newRadius;
    cylinder.setRadius(newRadius);

    cout << "Enter the new height of the cylinder: ";
    cin >> newHeight;
    cylinder.setHeight(newHeight);

    volume = cylinder.calculateVolume();
    squareRadius = cylinder.squareOfRadius();
    squareHeight = cylinder.squareOfHeight();

    cout << "Updated volume of the cylinder: " << volume << endl;
    cout << "Updated square of the base radius: " << squareRadius << endl;
    cout << "Updated square of the height: " << squareHeight << endl;
    return 0;
}
