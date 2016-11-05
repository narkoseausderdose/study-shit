#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, output;
    cout << "Bitte geben Sie die Zeichenkette ein: ";
    getline(cin, input);
    for (int i = input.length()-1; i>=0; i--)
    {
        output = output+input.at(i);
    }
    cout << "Die umgekehrte Zeichenkette lautet: " << output << endl;
    system("PAUSE");
    return 0;
}
