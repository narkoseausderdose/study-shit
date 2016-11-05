#include <iostream>
using namespace std;

int main ()
{
 double eingabe; 
 double ergebnis;
    
    cout <<"Bitte geben Sie die Temperatur in Grad Celsius ein: ? " ;
    cin >> eingabe;
    
    ergebnis = double (eingabe*1.8+32);
    
    cout <<"Die Temperatur in Fahrenheit lautet: " << ergebnis << endl;
    
    system("PAUSE");
return 0;

}
