/*
Name : Seifelnasr eisa adam musa
Department : Computer
Class : Secand Class
*/


#include <iostream>
#include <string>
using namespace std;

    int width , height , radius;
    float pi = 3.14 ;
    class Shape //This is known as the father class
{
 protected :
 public :


 void set_Width() //This is known as the base or width value input function
 {
    cout << "Width = ";
    cin >> width;
 }


 void set_Height() //This is known as a function for entering a value for either length or height
 {
    cout <<"Height = ";
    cin >> height;
 }


 void set_Radius() //This is known as the diameter input function
 {
    cout << "Radius = ";
    cin >> radius;
 }


 virtual int space(void)=0; //pure virtual function


 void printspace(void) //(Polymorphism) is a function in which the area finding functions of the inherited classes are substituted and then printed
 {
    cout<< this -> space() << endl;
 }


 virtual int circumference(void) = 0; //pure virtual function


 void printCircumference(void) //(Polymorphism) is a function in which the perimeter functions of the inheriting classes are substituted and then printed
 {
    cout << this->circumference() << endl;
 }


};


class Polygon : public Shape //  Class Polygon inherits from Classa
{
 public:
     int space() //This function is to find the area of ??the polygon
     {
         cout << "\nThe Polygon's Area = ";
         return (radius * height * width);
    }
    int circumference() //This function is to find the perimeter of the polygon
    {
        cout << "The Polygon's Circumference = ";
        return(width*height);
    }
};


class Triangle : public Polygon //Inheriting the Classa Triangle from the Class Bullpigeon to become his son
{
    int space() //This is a function of finding the area of ??a triangle
    {
        cout << "\nThe Triangle's Area = ";
        return (width * height / 2);
    }
    int circumference() //This is a function whose function is to find the perimeter of the triangle
    {
        cout << "The Triangle's Circumference = ";
        return (width + height*2);
    }
};


class Rectangle : public Polygon //Inheriting Class Rectangel from Classa Bullpigeon to become his son
{
    int space() //This is a function that works with finding the area of ??a rectangle
    {
        cout << "\nThe Rectangle's Area = ";
        return (width * height);
    }
    int circumference() //This is a function that finds the perimeter of a rectangle
    {
        cout << "The Rectangle's Circumference = ";
        return (2*(height*width));
    }
};


class Square : public Polygon //Inheriting Class Esquire from Classa Bullpigeon to become his son
{
    int space() //This is a function to find the area of ??a square
    {
        cout << "\nThe Square's Area = ";
        return (height * height);
    }
    int circumference() //This is a function whose function is to find the perimeter of the square
    {
        cout << "The Square's Circumference = ";
        return (4*height);
    }
};


class Ellipse : public Shape //Classes inherit the staple from the father
{
 public:
     int space() //ellipse area find function
     {
         cout << "\nThe Ellipse's Area = ";
         return (pi * width * height);
    }
    int circumference() //ellipse perimeter function
    {
        cout << "The Ellipse's Circumference = ";
        return (pi*(radius*radius));
    }
};
class Circle : public Ellipse //Class inheritance will kick from the class to become its son
{
 public:
    int space() //Circle area find function
    {
        cout << "\nThe Circle's Area = ";
        return (pi/4*(radius*radius));
    }
    int circumference() //Find the circumference of a circle
    {


        cout << "The Circle's Circumference = ";
        return (pi * radius);
    }
};
int main()
{


    Polygon polygon ; Triangle triangle ; Rectangle rectangle ; Square square ; Ellipse ellipse ; Circle circle; //objects
    Shape   *pointer1 = &polygon;   //The definition of the first indicator of the class, the father, and a link called the class Polygon
    Shape *pointer2 = &ellipse;     //The definition of the second indicator of the class, the father, and a link with the title of the class
    Polygon *pointer3 = &triangle;  //The definition of the third indicator from the Class Polygon and a link to the title Class Triangle
    Polygon *pointer4 = &rectangle; //The definition of the fourth indicator from the Class Uligon and a link entitled Class Polygon
    Polygon *pointer5 = &square;    //The definition of the fifth indicator from the Class Polygon and a link to the title of Class Esquire
    Ellipse *pointer6 = &circle;    //Definition of the sixth indicator of the class, and a link to the title of the class Circle


    cout << "Calculates the perimeter and area of ??the shapes\n";


    cout << "\nEnter The Value of Polygon's Width , Height and Radius:\n";
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer1->set_Width();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer1->set_Height();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer1->set_Radius();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer1->printspace();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer1->printCircumference();
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"**********************************************************************"<<endl;


    cout << "\nEnter The Value of Ellipse's Width , Height and Radius:\n";
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer2->set_Width();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer2->set_Height();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer2->set_Radius();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer2->printspace();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer2->printCircumference();
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"**********************************************************************"<<endl;


    cout << "\nEnter The Value of Triangle's Width and Height:\n";
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer3->set_Width();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer3->set_Height();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer3->printspace();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer3->printCircumference();
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"**********************************************************************"<<endl;


    cout << "\nEnter The Value of Rectangle's Width and Height:\n";
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer4->set_Width();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer4->set_Height();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer4->printspace();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer4->printCircumference();
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"**********************************************************************"<<endl;


    cout << "\nEnter The Value of Square's Height:\n";
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer5->set_Height();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer5->printspace();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer5->printCircumference();

    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"**********************************************************************"<<endl;

    cout << "\nEnter The Value of Circle's Radius:\n";
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer6->set_Radius();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer6->printspace();
    cout<<"---------------------------------------------------------------------"<<endl;
    pointer6->printCircumference();
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"**********************************************************************"<<endl;



}
