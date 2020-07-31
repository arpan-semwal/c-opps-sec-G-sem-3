#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "input the numbers a,b,c" << endl;
    cin >> a >> b >> c;
    if(a>b&&a>c)
    {
        cout << a << "a is largest";
    }
    else if (b>>a&&b>c)
    {
        cout << b << "b is largest ";
    }
    else
    {
        cout << c << "c is largest";
    }
    return 0;
}
