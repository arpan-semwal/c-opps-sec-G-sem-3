#include<iostream>
using namespace std;
int main()
{
    int a[30],i,n,temp;
    cout << "enter the range" << endl;
    cin >> n;
    cout <<"enter the numbers "<< endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout << "the second maximum number is " << a[1] << endl;
    cout << "the second minimum number is " << a[n-2] << endl;
}

