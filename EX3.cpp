#include <iostream>
#include <list>
using namespace std;
//function pour afficher la liste 
void showlist(list <int> g) 
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout << '\t' << *it;
cout << '\n';
}
int main()
{
    int n ; // le nombre des �lements de la liste 
    int p ;
    list <int> liste;  
cout<<" les listes vous voulez inserer ? "<<endl;
cin>>n; 

for (int i = 0; i < n; ++i) // la boucle for pour ins�rer les �l�ments de la liste 
{
    cout<<"saisie  la valeur a ins�r� "<<endl;  
    cin>>p; 
liste.push_back(p); //fonction de conteneur List de la STL permet de ins�re les �lements � la liste 

}
cout << "\nvotre liste est  : ";
showlist(liste); // fonction affiche le contenue de la liste
cout << "\n votre liste tri� est  : ";
liste.sort(); //  trier la liste 

showlist(liste); //affiche la liste final apr�s le triage 
return 0;
}
