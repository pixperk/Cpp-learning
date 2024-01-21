#include<iostream>
using namespace std;

const double pi{3.14150};

double calc_area_circle(double radius){
    return pi*radius*radius;
}

double calc_volume_cylinder(double radius, double height){
    return calc_area_circle(radius)*height;
}
void area_circle(){
double radius{};
cout<<"Enter the circle's radius"<<endl;
cin>>radius;
cout<<"Area of the circle with radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
}

void volume_cylinder(){
    double radius{}, height{}, volume{};
    cout<<"Enter the radius and height of the cylinder";
    cin>>radius>>height;
    cout<<"Volume of the cylinder with radius "<<radius<<" and height "<<height<<" is "<<calc_volume_cylinder(radius, height)<<endl;


}

int main()
{
     /* area_circle(); */
     volume_cylinder();

 return 0;
}