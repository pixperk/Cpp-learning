#include<iostream>
using namespace std;

// Function Prototypes
const double pi{3.14159};
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

int main() {
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius{};
    cout << "Enter the circle's radius" << endl;
    cin >> radius;
    cout << "Area of the circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius{}, height{};
    cout << "Enter the radius and height of the cylinder";
    cin >> radius >> height;
    cout << "Volume of the cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}
