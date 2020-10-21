#include<iostream>
using namespace std;

class quadilateral
{
protected:
    string shape;
public:
    void set_shape(string a)
    {
        cout<<"enter the shape"<<endl;
        cin>>shape;
        cout<<"the shape is"<<shape<<endl;
    }
};

class trapezoid : virtual public quadilateral
{
protected:
    int a,b,c,d,h;
    int perimeter,area;
public:
    void trapezoid_perimeter(int x,int y,int z,int w)
    {
        a=x;
        b=y;
        c=z;
        d=w;
        perimeter=a+b+c+d;
        cout<<"the perimeter is"<<perimeter<<endl;
    }
     void trapezoid_perimeter(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
        area=(a+b)/2*h;
        cout<<"the area is"<<area<<endl;
    }
};

class parallelogram : virtual public quadilateral
{
protected:
    int a,b,c,perimeter,area,h;
public:
    void parallelogram_perimeter(int x,int y)
    {
        a=x;
        b=y;
        perimeter=2*(a+b);
        cout<<"the perimeter is"<<perimeter<<endl;
    }
     void parallelogram_area(int x,int y)
    {
        a=x;
        h=y;
        area=(a*h);
        cout<<"the area is"<<area<<endl;
    }
};

class rectangle: virtual public quadilateral
{
protected:
    int l,b,perimeter,area;
public:
    void rectangle_perimeter(int x,int y)
    {
        l=x;
        b=y;
        perimeter=2*(l+b);
        cout<<"the perimeter is"<<perimeter<<endl;
    }
     void rectangle_area(int x,int y)
    {
        l=x;
        b=y;
        area=(l*b);
        cout<<"the area is"<<area<<endl;
    }
};

class square: virtual public quadilateral
{
protected:
    int a,perimeter,area;
public:
    void square_perimeter(int x)
    {
        a=x;
        perimeter=4*a;
        cout<<"the perimeter is"<<perimeter<<endl;
    }
     void square_area(int x,int y)
    {
        a=x;
        area=a*a;
        cout<<"the area is"<<area<<endl;
    }
};

class result:public trapezoid,public parallelogram,public rectangle,public square
{
public:
    void display()
    {
        cout<<"problem solved"<<endl;
    }
};

int main()
{
    result ram;
    ram.trapezoid_perimeter(4,2,5,1);
    ram.square_perimeter(5);
    return 0;
}



/*                       QUADILATERAL
                _____________|______________________________________
                |            |                    |                |
            TRAPEZOID    PARALLELOGRAM        RECTANGLE         SQUARE
                |            |                    |               |
                |____________|____________________|_______________|
                                      |
                                      |
                                      |
                                      |
                                    RESULT
*/
