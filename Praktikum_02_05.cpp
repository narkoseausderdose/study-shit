#include <iostream>
using namespace std;
 
int main()
{
    double eingabe, ergebnis;
    short auswahl;
 
    cout << "Ihre Eingabe: ";
    cin >> eingabe;
    cout << endl << "Ihre Auswahl der Umwandlung:" << endl <<
        " 1 - Celsius in Fahrenheit" << endl <<
        " 2 - Meter in Fuss" << endl <<
        " 3 - Euro in US Dollar" << endl;
    cin >> auswahl;
 
    ergebnis = ((auswahl - 2) * (auswahl - 3) /   2  * (eingabe * 1.8 + 32)) + // Berechnung, falls Eingabewert = 1 für Celsius -> Fahrenheit
               ((auswahl - 1) * (auswahl - 3) * (-1) * (eingabe * 3.2808)) + // Berechnung, falls Eingabewert = 2 für Meter -> Fuß
               ((auswahl - 1) * (auswahl - 2) /   2  * (eingabe * 1.2957)); // Berechnung, falls Eingabewert = 3 für EUR -> USD
 
     
 
    cout << "Ihr Ergebnis lautet: " << ergebnis << endl << endl;
 
    system("PAUSE");
    return 0;
}
