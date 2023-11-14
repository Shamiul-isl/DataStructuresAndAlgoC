
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main( )
{
    // struct Rectangle r = { 10, 5 } ;
    // struct Rectangle *p = &r;
    // r.length = 15 ;

    // // Syntax - 2
    // // - Dynamically object created in heap and pointer pointing there
    struct Rectangle *p;
    // p = (struct Rectangle *) malloc (sizeof(struct Rectangle)); //c code
    p = new Rectangle; // c++ code
    p -> length = 10 ;
    p -> breadth = 5;

    cout << p->length << endl;
    cout << p->breadth << endl;
}