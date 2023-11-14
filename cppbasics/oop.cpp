#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    ~Rectangle()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{

    int l, b;
    printf("Enter Length and Breadth: ");
    cin >> l >> b;

    Rectangle r(l, b);

    int a = r.area();
    int peri = r.perimeter();

    printf("Area=%d\nPerimeter=%d\n", a, peri);
    return 0;
}