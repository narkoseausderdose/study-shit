#include <iostream>
using namespace std;

int main ()
{
    int gesamt = 0, erster = 0, zweiter = 0, dritter = 0;
    double pro1 = 0., pro2 = 0., pro3 = 0;
    cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
    cin >> gesamt;
    cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
    cin >> erster;
    cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
    cin >> zweiter;
    dritter = gesamt - (erster + zweiter);
    cout << "Auf den dritten Kandidaten sind somit " << dritter << " Stimmen entfallen." << endl;
    pro1 = 100. / gesamt*erster;
    pro2 = 100. / gesamt*zweiter;
    pro3 = 100. / gesamt*dritter;
    cout << "Kandidat 1 erhielt " << pro1 << "% der Stimmen." << endl;
    cout << "Kandidat 2 erhielt " << pro2 << "% der Stimmen." << endl;
    cout << "Kandidat 3 erhielt " << pro3 << "% der Stimmen." << endl;
    system("PAUSE");
    return 0;
    
}
