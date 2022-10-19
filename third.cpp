#include<iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    void setData(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    void showData()
    {
        cout << real << " + " << img << "i" << endl;
    }
    friend Complex operator+(const Complex&,const Complex&);
};
Complex operator+(const Complex &c1,const Complex&c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(3,4);
    c2.setData(5,6);
    c3.setData(2,3);
    c4=c1+c2+c3;
    c4.showData();
    getchar();
    return 0;
}