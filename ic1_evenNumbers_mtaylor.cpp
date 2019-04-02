//  ic1_evenNumbers_mtaylor.cpp
//  InClassProgramming2
//  Created by Max Taylor on 4/2/19.

#include <iostream>
using namespace std;

void intro();
bool isEven();


int main(){
    intro();
    isEven();
}

void intro(){
    cout << "Enter a number & I'll tell you if it is even or odd. Enter 0 to quit.\n";
}

bool isEven(){
    int n; // number
    bool itEven;
    
    do{
        cout << "Enter an integer: ";
        cin >> n;   //user input the number
    
        if ( n % 2 == 0)    //calc
            cout << "Even\n";
        else
            cout << "Odd\n";

    } while(n!=0);

    
    return itEven;
}

















