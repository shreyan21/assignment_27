#include<iostream>
using namespace std;
class Time
{
  int hours,minutes,seconds;
  public:
  
  bool operator==(Time&s)
  {
    if(hours==s.hours&&minutes==s.minutes&&seconds==s.seconds)
    {
        return true;
    }
    return false;
  }
  friend istream&operator>>(istream&,Time&);
  friend ostream&operator<<(ostream&,Time&);

};
ostream& operator<<(ostream&s,Time&t1)
{
    s<<"Hours : "<<t1.hours<<endl;
    s<<"Minutes : "<<t1.minutes<<endl;
    s<<"Seconds : "<<t1.seconds<<endl;
    return s;
}
 istream& operator>>(istream&s,Time&t1)
{
    cout<<"\nEnter the hours : ";
    s>>t1.hours;
    cout<<"Enter the minutes : ";
    s>>t1.minutes;
    cout<<"Enter the seconds : ";
    s>>t1.seconds;
    return s;
    
}
int main()
{
    Time t1,t2;
    cin>>t1>>t2;
    if(t1==t2)
    cout<<"Both are equal \n";
    else 
    cout<<"Both are not equal\n";
    getchar();
    return 0;
}