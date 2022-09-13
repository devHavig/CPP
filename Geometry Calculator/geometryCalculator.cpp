// Geometry Calculator
// CIS 5 Programming Logic Using C++
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float PI = 3.14159;
    int user_choice;

    cout << endl;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calulate the Area of a  Circle" << endl;
    cout << "2. Calulate the Area of a Rectangle" << endl;
    cout << "3. the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << endl;
    cout << "Enter your choice (1-4):" << endl;
    cin >> user_choice;
    cout << endl;

    switch (user_choice)
    {
        float area;
    case 1: // Area of Circle
        int radius;

        cout << "Enter  the radius: ";
        cin >> radius;

        if (radius < 0) // No negative numbers
        {
            cout << "The radius must be a positive number";
            cout << "Try again" << endl;
        }
        else
        {
            area = PI * pow(radius, 2);

            cout << "The area of a circle is: " << endl;
            cout << area << endl;
        }
        break;
    case 2: // Area of Rectangle
        float length, width;

        cout << "What is the length?" << endl;
        cin >> length;

        if (length > 0)
        {
            cout << "What is the width?" << endl;
            cin >> width;
            cout << endl;

            if (width > 0)
            {
                area = length * width;
            }
            else
            {
                cout << "The width must be a positive number" << endl;
                cout << "Try again" << endl;
            }
        }
        else
        {
            cout << "The length must be a positive number" << endl;
            cout << "Try again" << endl;
        }
        cout << "The Area of a Rectangle is: " << endl;
        cout << area << endl;
        break;
    case 3: // Area of Triangle
        float base, height;

        cout << "What is the base? " << endl;
        cin >> base;

        if (base > 0)
        {
            cout << "What is the height" << endl;
            cin >> height;
            cout << endl;

            if (height > 0)
            {
                area = (base * height) * .5;
            }
            else
            {
                cout << "The height must be a positive number" << endl;
                cout << "Try again" << endl;
            }
        }
        else
        {
            cout << "The base must be a positive number" << endl;
            cout << "Try again" << endl;
        }
        cout << "The area of a triangle is: " << endl;
        cout << area << endl;
        break;
    case 4:

    default:

        break;
    }

    return 0;
}