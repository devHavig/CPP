#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // initial variables
    float principal,
        interest_rate,
        total_interest,
        amount_after_year;

    int time_interest_compounded;

    // console questions
    cout << endl;
    cout << "What is the principal?" << endl;
    cin >> principal;

    cout << "What is the interest rate?" << endl;
    cin >> interest_rate;

    cout << "How many times is interest compounded?" << endl;
    cin >> time_interest_compounded;

    // math
    // converting to a decimal
    interest_rate /= 100;

    // amount after a year
    // amount = principal * (1 + rate / T )^T
    amount_after_year = principal * pow((1 + interest_rate / time_interest_compounded), time_interest_compounded);

    // calculating total interest
    total_interest = amount_after_year - principal;

    // converting decimal back
    interest_rate *= 100;

    // printing final info to console
    // display
    cout << setprecision(2) << fixed << right << endl;

    cout << "Interest Rate:          " << setw(10);
    cout << interest_rate << "%" << endl;

    cout << "Times Compounded:       " << setw(10);
    cout << time_interest_compounded << endl;

    cout << "Principal:            $ " << setw(10);
    cout << principal << endl;

    cout << "Interest:             $ " << setw(10);
    cout << total_interest << endl;

    cout << "Amount in Savings:    $ " << setw(10);
    cout << amount_after_year << endl;
    return 0;
}