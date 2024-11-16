#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int n, i, factorial=1;
    cout<<"Your input to calculate factorial: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        factorial=factorial*(i);

    }
    cout<<"factorial of "<<n << " is "<<factorial<<endl;
}
