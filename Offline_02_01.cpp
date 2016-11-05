#include <iostream>
using namespace std;

int main (){
    double eingabe =0., umfang = 0., flaeche = 0.;
    cout <<"Bitte geben Sie die Seitenlaenge ein (in cm): ? ";
    cin >> eingabe;
    umfang = (eingabe*4);
    flaeche = (eingabe*eingabe);
    cout <<"Der Umfang des Quadrats betraegt (in cm): " << umfang << endl;
    cout <<"Die Flaeche des Quadrats betraegt (in cm*cm): " << flaeche << endl;
    system("PAUSE");
    return 0;
}
