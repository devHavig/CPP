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
    case 1:
        int radius;

        cout << "Enter  the radius: ";
        cin >> radius;

        if (radius < 0)
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
    case 2:
        float length, width;

        if (radius < 0)
        {
            cout << "The radius must be a positive number";
            cout << "Try again" << endl;
        }
        else
        {
            cout << "What is the length?" << endl;
            cin >> length;
            cout << "What is the width?" << endl;
            cin >> width;
            cout << endl;

            area = length * width;
            
            cout << "The Area of a Rectangle is: " << endl;
            cout << area << endl;
        }
        break;
    case 3:
        float base, height;

        if (radius < 0)
        {
            cout << "The radius must be a positive number";
            cout << "Try again" << endl;
        }
        else
        {
            area = base * height * .5;

            cout << "The area of a triangle is: " << endl;
            cout << area << endl;
        }
        break;
    default:
        break;
    }

    return 0;
}