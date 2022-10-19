#include <iostream>
using namespace std;
class Fraction
{
   long int numerator, denominator;

public:
   Fraction(long int n = 0, long int d = 0)
   {
      numerator = n;
      denominator = 0;
   }
   Fraction operator++()
   {
      numerator++;
      denominator++;
      return *this;
   }
   Fraction operator++(int)
   {
      Fraction f;
      f.numerator = numerator++;
      f.denominator = denominator++;
      return f;
   }
   friend ostream &operator<<(ostream &s, const Fraction &t)
   {
      s << t.numerator << "/" << t.denominator << endl;
      return s;
   }

   friend istream &operator>>(istream &s, Fraction &t)
   {
      cout << "\nEnter the numerator : ";
      s >> t.numerator;
      cout << "Enter the denominator : ";
      s >> t.denominator;
      return s;
   }
};
int main()
{
   Fraction f1, f2;
   cout << "\nEnter first fraction value \n";

   cin >> f1;
   f1++;

   cout << "f1++ : " << f1;
   ++f1;
   cout << "++f1 : " << f1;
   cout << "Enter second fraction value \n";
   cin >> f2;
   f2 = ++f1;
   cout << endl;
   cout << "f1 : " << f1;
   cout << "f2 : " << f2;
   f2 = f1++;
   cout << endl;
   cout << "f1 : " << f1;
   cout << "f2 : " << f2;
   cin.ignore();
   getchar();
   return 0;

   getchar();
   return 0;
}