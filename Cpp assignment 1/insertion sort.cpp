#include<iostream>
using namespace std;
int main()
{
    int a[10],n,j,k,i;
    cout << "enter the range " << endl;
    cin >> n;
    cout << "enter the numbers" << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }
    for(i=0;i<n;i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
