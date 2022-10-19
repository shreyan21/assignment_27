#include<iostream>
using namespace std;
class Numbers
{
  int x,y,z;
  public:
  void setData(int a,int b,int c)
  {
    x=a;
    y=b;
    z=c;
  }
  Numbers operator-()
  {
    x=-x;
    y=-y;
    z=-z;
    return *this;
  }
  void showData()
  {
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
  }
};
int main()
{
    Numbers n1,n2;
    n1.setData(3,4,5);
    n2.setData(4,5,2);
    n1=-n2;
    n1.showData();
    getchar();
    return 0;
}