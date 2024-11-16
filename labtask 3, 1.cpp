#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
   int decimalNum, rem;
   cout<<"Input a decimal number : ";
   cin>>decimalNum;
   string binary="";

   for(decimalNum; decimalNum>0; decimalNum=decimalNum/2){
       rem=decimalNum%2;
       if(rem==0){
        binary= "0" + binary;
       } else {
        binary="1" + binary;
       }
   }
   cout<<"The binary number is : "<<binary<<endl;


}
