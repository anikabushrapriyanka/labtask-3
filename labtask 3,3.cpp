#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int firstNum, secondNum, gcd;
    cout<<"Input the first number: ";
    cin>>firstNum;
    cout<<"Input the second number: ";
    cin>>secondNum;
    if(firstNum<secondNum){
            gcd=firstNum;
    } else if (secondNum<firstNum) {
            gcd=secondNum;
    }
    while(gcd>1){
        if(firstNum%gcd==0 && secondNum%gcd==0){
            break;
        }
        gcd--;

    }
    cout<<"The Greatest Common Divisor is: "<<gcd;

}
