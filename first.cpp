#include <iostream>
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
    Complex operator-(Complex &p)
    {
        Complex temp;
        temp.real = real - p.real;
        temp.img = img - p.img;
        return temp;
    }
    Complex operator+(Complex &p)
    {
        Complex temp;
        temp.real = real + p.real;
        temp.img = img + p.img;
        return temp;
    }
    bool operator==(Complex &p)
    {
        if (real == p.real && img == p.img)
        {
            return true;
        }
        return false;
    }
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex operator*(Complex &p)
    {
        Complex temp;
        temp.real = (real * p.real) - (img * p.img);
        temp.img = (real * p.img) + (img * p.real);
        return temp;
    }
    void showData()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
int main()
{
    Complex c1, c2, c3, c4;
    c1.setData(4, 5);
    c2.setData(3, 2);
    c3 = c1 + c2;
    c3.showData();
    if (c1 == c2)
        cout << "c1 is equal to c2\n";
    c4 = c1 * c2;
    c4.showData();
    getchar();
    return 0;
}