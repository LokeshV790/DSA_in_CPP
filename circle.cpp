// /* Eliza is working on area calculation for her project. Create a program to help her find the area of a circle.
// A class Circle is created with a private attribute, radius (int type) as a part of the code skeleton.
// Include appropriate setters and getters and a one argument parameterized constructor.
// Another class Utility is created with double calculateArea(Circle c) method.
// double calculateArea(Circle c) - This method gets the circle object and calculates the area of the circle and returns the area to the main method.
// Formula used: 3.14* ٢٠*٢ where г is the radius of the circle.
// Write a main method */

#include <iostream>
using namespace std;

class Circle {
    private :
    int radius;

    public :
    Circle(int r){
        radius = r;   // member function.
    };

    void setRadius(int radius){
        this->radius=radius;        // setter.
    };

    int getRadius(){
        return radius;     // getter with return argument.
    };
};

class Utility {
    public:
    double calculateArea(Circle c){     // Used Double so that there is no error in area calculation ans value of pi is 3.14
        int r = c.getRadius();          // using getter method to acess private obj in class Circle.
        return 3.14*r*r;
    };
};

int main(){
    
    float radius = 0;   // initialize radius as 0
    cout << "enter the radius : " << endl;
    cin >> radius;

    Circle obj(radius);
    Utility c1;
    cout << "Circle area = " << c1.calculateArea(obj) << " cm.sq" << endl;  // Using calculateArea method with c1 scope of Utility class.
    return 0;

}

