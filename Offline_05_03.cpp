#include <iostream>
using namespace std;

int main()
{
    int gesamtzahlen[9];
    int eingabeZahl, unterschiedZaehler = 0;
    int eins = 0, zwei = 0, drei = 0, vier = 0, fuenf = 0, sechs = 0;
    
    for (int i = 0; i <= 8; i++)
    {
        do
        {
            cout << "Bitte geben Sie die " << i+1 << "-te Zahl ein: ? ";
            cin >> eingabeZahl;
            
        } while (eingabeZahl < 1 || eingabeZahl >6);
        
        gesamtzahlen[i] = eingabeZahl;
    }
    
    for (int o = 0; o <= 8; o++)
    {
        if (gesamtzahlen[o] == (int)1)
        {
            eins++;
        }
        if (gesamtzahlen[o] == (int)2)
        {
            zwei++;
        }
        if (gesamtzahlen[o] == (int)3)
        {
            drei++;
        }
        if (gesamtzahlen[o] == (int)4)
        {
            vier++;
        }
        if (gesamtzahlen[o] == (int)5)
        {
            fuenf++;
        }
        if (gesamtzahlen[o] == (int)6)
        {
            sechs++;
        }
    }
    
    if (eins >0)
    {
        unterschiedZaehler = unterschiedZaehler + 1;
    }
    if (zwei >0)
    {
        unterschiedZaehler = unterschiedZaehler + 1;
    }
    if (drei >0)
    {
        unterschiedZaehler = unterschiedZaehler + 1;
    }
    if (vier >0)
    {
        unterschiedZaehler = unterschiedZaehler + 1;
    }
    if (fuenf >0)
    {
        unterschiedZaehler = unterschiedZaehler + 1;
    }
    if (sechs >0)
    {
        unterschiedZaehler = unterschiedZaehler + 1;
    }
    cout << "In der Eingabe kamen " << unterschiedZaehler  <<" unterschiedliche Zahlen vor." << endl;
    
    system("PAUSE");
    return 0;
}

