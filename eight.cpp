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
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
   }
   Matrix(){}
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
   Matrix operator-()
   {  
    Matrix m=*this;
   
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m.a[i][j]=-m.a[i][j];
        }
    }
    return m;
   }
};
int main()
{
    Matrix m;
    cout<<"Enter matrix element (3*3) :\n";
    m.initialize();
    cout<<"Matrix before negation \n";
    m.display();
    m=-m;
    cout<<"Matrix  after negation \n";

    m.display();
    cin.ignore();
    getchar();
    return 0;
    

}