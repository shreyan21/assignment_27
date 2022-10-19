#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
public:

    void initialize()
   {
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
   }
   void display()
   {
       for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
           {
               cout<<a[i][j]<<"      ";
           }
           cout<<endl;
       }
   }
   Matrix operator=(const Matrix&s)
   {
        for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
           {
               a[i][j]=s.a[i][j];
           }
       }
       return *this;
    
   }
   Matrix(const Matrix&s)
   {
       for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
           {
               a[i][j]=s.a[i][j];
           }
       }
   }
   Matrix(){}
   Matrix operator+(Matrix&s)
   {
       Matrix p;
       for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
           {
               p.a[i][j]=a[i][j]+s.a[i][j];
           }
       }
       return p;
   }

};
int main()
{
    Matrix m1,m2,m3;
    cout<<"Enter the elements for m1 "<<endl;
    m1.initialize();
     cout<<"Enter the elements for m2 "<<endl;
     m2.initialize();
     cout<<endl<<"First matrix :\n";
     m1.display();
     cout<<endl<<"Second matrix :\n";
     m2.display();
     m3=m1+m2;
     cout<<endl<<"Addition of matrix :\n";
     m3.display();
     cin.ignore();
     getchar();
     return 0;

}
