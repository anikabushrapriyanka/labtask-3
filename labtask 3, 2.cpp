#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int num , rem , result=0, originalNum ;
    cout<<"Input a number: ";
    cin>>originalNum;
    num=originalNum;

    while(num>0){
            rem=num%10;
            num=num/10;
            result= result+rem;

    }
    cout<<"The sum of digits of " << originalNum << " is : "<<result<<endl;

}
