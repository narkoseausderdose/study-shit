#include <iostream>
using namespace std;

int main ()
{
  double eingabe;
  double ergebnis;
  
  cout <<"Bitte geben Sie die Geldmenge in Euro ein: ?  ";
  cin >> eingabe;
  
  ergebnis = double (eingabe*1.2957);
  
  cout <<"Die Geldemenge in US Dollar lautet :  " << ergebnis << endl;

 system("PAUSE");
 return 0;  
}
