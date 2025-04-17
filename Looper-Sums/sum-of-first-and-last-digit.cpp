// Algorithm: 1: Start.
//            2: Take num from the user.
//            3: initialie sum = 0,last and first = 0.
//            4: Remove lastdigit of num using calculation as (num = num % 10).
//            5: Repeat this until the num is greater than 10.
//            6: Remove last digit from num (num / 10).
//            7: give the value of num to firstdigit(num = firstdigit).
//            8: Print sum.
//            9. End

#include <iostream>
using namespace std;

int main()
{
    int num, first = 0, last = 0, sum = 0;
    cout << "Enter any number: ";
    cin >> num;

    last = num % 10;
    
    while (num >= 10)
    {
        num = num / 10;
        first = num;
        sum = first + last;
    }

    cout << "The sum of the first and the last digit: " << sum << endl;

    return 0;
}