#include <iostream>
#include <windows.h>
using namespace std;

class Math
{
public:
    float root;
    float root1;
    float root2;
    Math(float t, float t1, float t2)
    {
        root = t;
        root1 = t1;
        root2 = t2;
    }
    virtual void Print() = 0;
};

class rectangle : public Math
{
public:
    rectangle(float root, float root1) : Math(root, root1, root2)
    {};
    virtual void Print()
    {
        float w;
        w = root * root1;
        cout << "\n\n";
        cout << "Area of   a rectangle with sides " << root << " and " << root1 << " = " << w << "\n";
        cout << "\n\n";
    }
};

class circle : public Math
{
public:
    circle(float root2) : Math(root, root1, root2)
    {};
    virtual void Print()
    {
        float e;
        e = 3.14 * root2 * root2;
        cout << "\n\n";
        cout << "Area of   a circle with a radius " << root2 << " = " << e << "\n";
        cout << "\n\n";
    }
};

class right_triangle : public Math
{
public:
    right_triangle(float root, float root1) : Math(root, root1, root2)
    {};
    virtual void Print()
    {
        cout << "\n\n";
        float o;
        o = root * root1 / 2;
        cout << "Area of   a right triangle with legs " << root << " and " << root1 << " = " << o << "\n";
        cout << "\n\n";
    }
};

class Trapeze : public Math
{
public:
    Trapeze(float root, float root1, float root2) : Math(root, root1, root2)
    {};
    virtual void Print()
    {
        cout << "\n\n";
        float g;
        g = (root + root1) / 2 * root2;
        cout << "Area of   a trapezoid with bases " << root << " and " << root1 << " = " << g << "\n";
        cout << "\n\n";
    }
};

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Create an abstract base class with a virtual function - area. Create \n";
    cout << "derived classes: rectangle, circle, right triangle, \n";
    cout << "trapezium with its area functions. To test, define an array\n";
    cout << "references to an abstract class, which are assigned addresses of various \n";
    cout << "objects. \n";
    system("pause");
    system("cls");
    float a, a1, b, c, ñ1, d, d1, d2;

    cout << "Filling in the data of the rectangle\n";
    cout << "Enter 1 side\n";
    cin >> a;
    cout << "Enter 2 side\n";
    cin >> a1;

    cout << "Fill in circle data\n";
    cout << "Enter the radius of the circle\n";
    cin >> b;

    cout << "Filling in the data of a right triangle\n";
    cout << "Enter 1 leg\n";
    cin >> c;
    cout << "Enter 2 leg\n";
    cin >> ñ1;

    cout << "Fill in the data of the trapezoid\n";
    cout << "Enter 1 base\n";
    cin >> d;
    cout << "Enter 2 base\n";
    cin >> d1;
    cout << "Enter the height of the trapezoid\n";
    cin >> d2;
    Math* equation[4] = { new rectangle(a,a1), new circle(b),new right_triangle(c,ñ1),new Trapeze(d,d1,d2) };
    for (int k = 0; k < 4; k++)
        equation[k]->Print();
    system("pause");
}