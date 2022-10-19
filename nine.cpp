#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
    char str[100];
public:
    mystring(){}
    mystring(char*s)
    {

        strcpy(str,s);
    }
    char*get()
    {

        return str;
    }
    mystring(const mystring&s)
    {
        strcpy(str,s.str);
    }
    mystring operator=(const mystring&s)
    {
        strcpy(str,s.str);
        return *this;
    }
    mystring operator!()
    {
        mystring s=*this;

     int i=0;
     while(s.str[i])
     {
         if(s.str[i]>=65&&s.str[i]<=90)
         {
             s.str[i]+=32;
         }
         else if(s.str[i]>=97&&s.str[i]<=122)
         {
             s.str[i]-=32;
         }
         i++;
     }
     return s;
    }
};
int main()
{
    mystring s1("Utkarsh");
    mystring s2("Shreyansh Singh");
    s1=!s1;
   cout<< s1.get()<<endl;
   s1=s2;
   cout<<s1.get()<<endl;
   getchar();
    return 0;
}
