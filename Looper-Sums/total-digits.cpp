// Algorithm: 1: Start.
//            2: Take num form user.
//            3: Initialize count = 0.
//            4: Check with condition that num should not be equal to 0(num != 0).
//            5: now divide the value of num by 10 to cancel out the last value and store it in the count variable.
//            6: Increment count variable (count++).
//            7: Print the value of count variable.
//            8: End

#include<iostream>
using namespace std;

int main(){

    int num,count = 0;

    cout << "Enter the number: ";
    cin >> num;

    while(num != 0){
        num = num / 10;
        count++;
    }

    cout << "Total number of digits: " << count << endl;

    return 0;
}



