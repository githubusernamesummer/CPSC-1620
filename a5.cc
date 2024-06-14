//Author Name: Jahnavi Sharma
//Author Date: 04/06/2024
//Purpose: A program to configure the properties of a circle. 

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

const double PI = 3.14159;

void openFile(std::ifstream &inputFile, std::ofstream &outputFile) {
    inputFile.open("input5.data");
    outputFile.open("output5.data");
    if (!inputFile || !outputFile) {
        std::cerr << "Error opening file." << std::endl;
        exit(1);
    }
}

void closeFile(std::ifstream &inputFile, std::ofstream &outputFile) {
    inputFile.close();
    outputFile.close();
}

void readFile(std::ifstream &inputFile, double &x1, double &y1, double &x2, double &y2) {
    inputFile >> x1 >> y1 >> x2 >> y2;
}

void writeFile(std::ofstream &outputFile, double radius, double diameter, double circumference, double area) {
    outputFile << "Radius: " << std::fixed << std::setprecision(2) << radius
               << ", Diameter: " << diameter
               << ", Circumference: " << circumference
               << ", Area: " << area << std::endl;
}

double distance(double x1, double y1, double x2, double y2) {
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double calculateRadius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

double calculateArea(double radius) {
    return PI * radius * radius;
}

void measure(double x1, double y1, double x2, double y2, double &radius, double &diameter, double &circumference, double &area) {
    radius = calculateRadius(x1, y1, x2, y2);
    diameter = 2 * radius;
    circumference = calculateCircumference(radius);
    area = calculateArea(radius);
}

int main() {
    std::ifstream inputFile;
    std::ofstream outputFile;
    
    openFile(inputFile, outputFile);

    double x1, y1, x2, y2;
    while (inputFile >> x1 >> y1 >> x2 >> y2) {
        double radius, diameter, circumference, area;
        measure(x1, y1, x2, y2, radius, diameter, circumference, area);
        writeFile(outputFile, radius, diameter, circumference, area);
    }

    closeFile(inputFile, outputFile);
    return 0;
}