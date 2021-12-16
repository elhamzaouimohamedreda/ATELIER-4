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
    int n ; // le nombre des élements de la liste 
    int p ;
    list <int> liste;  
cout<<" les listes vous voulez inserer ? "<<endl;
cin>>n; 

for (int i = 0; i < n; ++i) // la boucle for pour insérer les éléments de la liste 
{
    cout<<"saisie  la valeur a inséré "<<endl;  
    cin>>p; 
liste.push_back(p); //fonction de conteneur List de la STL permet de insére les élements à la liste 

}
cout << "\nvotre liste est  : ";
showlist(liste); // fonction affiche le contenue de la liste
cout << "\n votre liste trié est  : ";
liste.sort(); //  trier la liste 

showlist(liste); //affiche la liste final après le triage 
return 0;
}
