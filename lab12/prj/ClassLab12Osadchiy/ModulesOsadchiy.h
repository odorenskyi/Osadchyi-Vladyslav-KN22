#ifndef MODULESOSADCHIY_H_INCLUDED
#define MODULESOSADCHIY_H_INCLUDED

class ClassLab12_Osadchiy {
private:
    double radius;  // радіус основи циліндра
    double height;  // висота циліндра

public:
    ClassLab12_Osadchiy(double r, double h);

    double getRadius();
    double getHeight();
    double calculateVolume();
    double squareOfRadius();
    double squareOfHeight();
    void setRadius(double r);
    void setHeight(double h);
};

#endif // MODULESOSADCHIY_H_INCLUDED
