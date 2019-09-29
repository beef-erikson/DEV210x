// Storage Classes and Scope Example
// Created by Beef Erikson Studios on 9/28/2019.
//

#include <iostream>

using namespace std;

/* Uncomment to use - here for build purposes

int main()
{
    // static keyword - allocated when program starts, deallocated when program ends. Variable will retain its
    // value between calls to the function.

    // extern keyword - used to declare an object that is defined in another translation unit within the enclosing
    // scope but has an external linkage.

    // thread_local keyword - identifier is only accessible on the thread which it is created. Prevents sharing
    // of the identifier across multiple threads in same application. (C++ 11 standard)

    int total = 0;

    for (int i = 0; i <= 10; i++)
    {
        total += i;
    }

    cout << "The sum of the numbers 1 to 10 is: " << total << endl;

    // this line will not compile as i is now out of scope.
    // cout << "Current value of i is: " << i << endl;

    return 0;
}

*/