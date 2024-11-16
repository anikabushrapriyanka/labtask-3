#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int num,i, previous1 ,previous2 ,currentSum=0;
    cout<<"Your input is : ";
    cin>>num;
     previous1=1;
     previous2=0;
     cout<<"Fibonacci series : ";
     cout<<previous1 << " " ;
     for(i=1; i<num; i++)
    {
       currentSum=previous1+previous2;
       previous2=previous1;
       previous1=currentSum;

       cout<<currentSum<<" " ;

    }


}
//0 1 1 2 3 5 8 13 21
