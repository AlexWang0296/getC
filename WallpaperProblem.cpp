//
// Created by alex on 8/7/18.
//
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double height {}, width {}, length {};
    double perimeter {};
    const double rollWidth {21.0};
    const double rollLength {12.0*33.0};

    int strips_per_roll {};
    int strips_reqd {};
    int nrolls {};

    cout << endl
         << "Enter the height of the room in inches: ";
    cin >> height;

    cout << endl
         << "Now Enter the length and width in inches: ";
    cin >> length >> width;
    strips_per_roll = rollLength / height;
    perimeter = 2.0*(length + width);
    strips_reqd = perimeter / rollWidth;
    nrolls = strips_reqd / strips_per_roll;

    cout << endl
         << "For your room you need " << nrolls << " rolls of wallpaper."
         << endl;
    return 0;
}
