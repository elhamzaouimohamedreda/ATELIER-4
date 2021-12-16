#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userInput,jour,mois,annee,heure,minutes;
    cout << "entre un date sous la forme (JJMMAAAAHHNN): \n";
    cin >> userInput;

    //utilisation de la methode substr() 
    jour = userInput.substr(0,2);
    mois = userInput.substr(2,2);
    annee = userInput.substr(4,4);
    heure = userInput.substr(8,2);
    minutes = userInput.substr(10,2);

    // affichage des valeurs
    cout << "la date est:\njour: " << jour << 
    "\nmois: " << mois << "\n annee: " << annee
    << "\n heure: " << heure << "\nminutes: " << minutes << endl;

    return 0;
}
