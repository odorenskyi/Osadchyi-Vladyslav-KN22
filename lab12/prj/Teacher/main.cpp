#include <iostream>
#include <fstream>
#include <sstream>
#include <clocale>
#include <string>

using namespace std;

class ClassLab12_Osadchiy {
private:
    double radius;
    double height;
    int testCaseNumber;

public:
    ClassLab12_Osadchiy(double r, double h) {
        radius = r;
        height = h;
    }

    double getRadius() {
        return radius;
    }

    double getHeight() {
        return height;
    }

    double calculateVolume() {
        const double PI = 3.14159;
        return PI * radius * radius * height;
    }

    int getTestCaseNumber() {
        return testCaseNumber;
    }

    void setTestCaseNumber(int number) {
        testCaseNumber = number;
    }
};

void generateSoundSignals() {
    ofstream outputFile("TestResults.txt", ios::app);
    if (outputFile) {
        for (int i = 0; i < 100; i++) {
            outputFile << "Sound Signal " << i + 1 << endl;
        }
        outputFile.close();
    } else {
        cout << "Помилка при відкритті файлу" << endl;
    }
}

bool checkProjectFileLocation() {
    string currentFilePath = __FILE__;
    string expectedPath = "\\Lab12\\prj\\main.cpp";
    return currentFilePath.find(expectedPath) != string::npos;
}

int main() {
    setlocale(LC_ALL, "ukr");

    if (!checkProjectFileLocation()) {
        ofstream outputFile("TestResults.txt");
        if (outputFile) {
            outputFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
            outputFile.close();
            cout << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        } else {
            cout << "Помилка при відкритті файлу" << endl;
        }
        return 0;
    }

    generateSoundSignals();

    ifstream inputFile("input.txt");
    ofstream outputFile("TestResults.txt", ios::app);
    if (inputFile && outputFile) {
        string line;
        int testCaseNumber = 1;

        while (getline(inputFile, line)) {
            if (line.find("Radius: ") != string::npos && line.find("Height: ") != string::npos) {
                double radius, height;
                if (sscanf(line.c_str(), "Radius: %lf\nHeight: %lf", &radius, &height) == 2) {
                    ClassLab12_Osadchiy obj(radius, height);
                    obj.setTestCaseNumber(testCaseNumber);

                    outputFile << "-------------------TS#" << obj.getTestCaseNumber() << "------------------" << endl;
                    outputFile << "Radius: " << obj.getRadius() << endl;
                    outputFile << "Height: " << obj.getHeight() << endl;
                    outputFile << "Volume: " << obj.calculateVolume() << endl;
                    outputFile << endl;

                    testCaseNumber++;
                }
            }
        }

        inputFile.close();
        outputFile.close();

        cout << "Дані були успішно оброблені та записані у файл TestResults.txt" << endl;
    } else {
        cout << "Помилка при відкр"<<endl;
    }
return 0;
}
