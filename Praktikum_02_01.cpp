#include <iostream>
using namespace std;

int main()
{
 char eingabe=' ';
 
 cout <<" Bitte geben Sie den Buchstaben ein: ?  ";
 cin >> eingabe;
 
 cout << "Der Buchstabe " << eingabe << " hat die Position " << (eingabe - 96) << " im Alphabet."<< endl;

 system("PAUSE");
 return 0;
}
