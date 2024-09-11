#include <iostream>
#include "rational.cpp"

using namespace std;

int main(){
    int num;
    int denom;

    cin >> num;
    cin >> denom;

    division numbers;
    
    if (denom == 0){
        numbers.zero(denom);
    }

    else if (denom == 1){
        numbers.oneDenom(num);
    }
    else{
        numbers.simplify(num, denom);
    }

    return 0;

}