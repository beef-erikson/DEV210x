// Do Loops Example
// Created by Beef Erikson Studios on 9/27/2019.
//

#include <iostream>

using namespace std;

// do always runs at least once, termination defined in the while at end
int main()
{
    string response;

    do
    {
        cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
        cin >> response;

        // process data
    } while (response != "Quit");

    return 0;
}