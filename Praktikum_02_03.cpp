#include <iostream>
using namespace std;

int main ()
{
 double eingabe;
 double ergebnis;
 
 cout <<"Bitte geben Sie die Laenge in Metern ein: ?  ";
 cin >> eingabe;
 
 ergebnis = double (eingabe*3.2808);
 
 cout <<"Die Laenge in Fuss lautet:  " << ergebnis << endl;   
    
 system("PAUSE");
 return 0;
    
}
