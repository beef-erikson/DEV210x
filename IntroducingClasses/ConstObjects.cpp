//
// Created by Beef Erikson Studios on 9/29/2019.
//

#include "ConstObjects.h"
#include <iostream>

using namespace std;

/* Uncomment to use - here for build purposes

int main()
{
    // note that when declaring an object const, we must make sure the function calls are also const (in header).
    ConstObjects uninitialized;
    ConstObjects const value{};
    ConstObjects aggregate{ 4, 7 };

    int area_of_value{ value.get_area() };
    int area_of_aggregate{ aggregate.get_area() };

    cout << "Area of value object: " << area_of_value << endl;
    cout << "Area of aggregate object: " << area_of_aggregate << endl;

    cout << "Width of value object: " << value.get_width() << endl;
    cout << "Height of value object: " << value.get_height() << endl;

    return 0;
}

*/