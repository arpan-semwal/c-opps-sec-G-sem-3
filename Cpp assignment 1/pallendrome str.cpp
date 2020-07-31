#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    char str[30];
    int i,f=0,l;
    cout << "enter the string " << endl;
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!=str[l-1-i])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout << "the string is pallendrome " << endl;
    }
    else
        cout << "the string is not a pallendrome" << endl;
}
