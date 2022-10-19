#include<iostream>
using namespace std;
class Complex
{
  int real,img;
  public:
  void setData(int real,int img)
  {
    this->real=real;
    this->img=img;
  }
  Complex operator++()
  {
    real++;
    img++;
    return *this;
  }
  Complex operator--()
  {
    real--;
    img--;
    return *this;
  }
  void showData()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
int main()
{
    Complex c1,c2;
    c1.setData(4,5);
    c2=++c1;
    c2.showData();
    c2=--c1;
    c2.showData();
    getchar();
    return 0;
}