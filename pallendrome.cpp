#include<iostream>
using namespace std;
int main()
{
    int n,temp,rem,rev=0;
    cout << "enter a number " << endl;
    cin >> n;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
    {
        cout << "the number is pallendrome" << endl;
    }
    else
    {
        cout << "the number is not a pallendrome" << endl;
    }
}
