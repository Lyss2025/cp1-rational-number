#include <iostream>
using namespace std;

#include "rational.hpp"

void division::zero(int num2){
    denominator = 0;
    cout << "NaN" << endl;
}

void division::oneDenom(int num1){
    numerator = num1;
    cout << numerator << endl;
}

void division::simplify(int num1, int num2){
    if (num1 ==1){
        cout <<num1 << "/" << num2 << endl;
    }
    else{
        int gcf;
        gcf = num1/num2;
        
        if ((gcf%num2) == 0 ){
            num1 = num1/gcf;
            num2 = num2/gcf;
            if ((num1 || num2) < 0){
                cout << "-" << num1 << "/" << num2 << endl;
            }
            else{
                cout << num1 << "/" << num2 << endl;
            }
        }


    }
}
