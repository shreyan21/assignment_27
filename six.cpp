#include <iostream>
#include <cstring>
using namespace std;
class CString
{
    char str[60];

public:
    CString() {}
    CString(char *a)
    {
        strcpy(str, a);
    }
    CString operator+(CString &c1)
    {
        CString c2;
        strcpy(c2.str, str);
        strcat(c2.str," ");
        strcat(c2.str, c1.str);
        return c2;
    }
    bool operator==(CString&c)
    {
        if(strcmp(str,c.str)==0)
        return true;
        return false;
    }
    friend ostream&operator<<(ostream&,CString&);
};
ostream&operator<<(ostream&s,CString&t)
{
    s<<t.str<<endl;
    return s;
}
int main()
{
    CString c1((char*)"Utkarsh Singh");
    CString c2((char*)"is a good boy");
    CString c3;
    c3=c1+c2;
    cout<<c3;
    if(c1+c2==c3)
    {
        cout<<"They are equal\n";
    }
    getchar();
    return 0;

}