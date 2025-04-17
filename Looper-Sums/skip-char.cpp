// Algorithm: 1: Start.
//            2: Initialize a char in it a variable as "ch" and give it's value as "a".
//            3: Use condition as ch is less than equal to character "z".
//            4: Now print ch.
//            5: Add increment as ch = ch + 4 (as from this the character will skip upcoming 3 letter's and directly print the 4 alphabet.).
//            6: If the condition of (ch <= 'z') gets wrong than exit the loop.
//            7: End.

#include<iostream>
using namespace std;

int main(){

    char ch = 'a';

    while(ch <= 'z'){
        cout << ch << ",";
        ch = ch + 4;
    }

    return 0;

}