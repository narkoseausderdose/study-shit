#include <iostream>
using namespace std;

int main()
{
    int breite = 0, hoehe = 0;
    
    cout <<"Bitte geben Sie die Breite des Parallelogramms ein: ";
    cin >> breite;
    
    cout <<"Bitte geben Sie die Hoehe des Parallelogramms ein: ";
    cin >> hoehe;
    
    for (int i = 0; i < hoehe; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < breite; j++)
            {
                cout << "*";
            }
        }
        else if (i == (hoehe - 1))
        {
            int anzahl_punkte = 0;
            for (int p = 0; p <= i - 1; p++)
            {
                cout << ".";
                anzahl_punkte++;
            }
            
            for (int s = 0; s < breite; s++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int p = 0; p < i; p++)
            {
                cout << ".";
            }
            
            cout << "*";
            
            for (int f = 0; f < breite - 2; f++)
            {
                cout << "+";
            }
            
            cout << "*";
        }
        cout << " ";
        cout << endl;
    }
    
    system("PAUSE");
    return 0;
}
