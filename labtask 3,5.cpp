#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int firstNum, secondNum, sum=0, i;
    cout<<"First Number: " ;
    cin>>firstNum;
    cout<<"Second Number: ";
    cin>>secondNum;

    for(i=firstNum+1; i<secondNum; i++){
        if( i%2==0){
            sum=sum+i;
        }
    }
    cout<<"Sum of Even numbers between "<< firstNum << " and " << secondNum<<" is: "<<sum;

}
