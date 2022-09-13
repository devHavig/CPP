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

    switch (user_choice)
    {
    case 1:
        float radius;
        float area = PI * pow(radius, 2);
        break;
    case 2:
        float length;
        float width;
        area = length * width;
        break;
    case 3:
        float base;
        float height;
        area = base * height * .5;
        break;
    default:
        break;
    }

    return 0;
}