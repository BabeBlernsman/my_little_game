#include <iostream>
#include "personnage.h" //Ne pas oublier

using namespace std;
    
int main()
{
  Personnage david, goliath("Épée aiguisée", 20);

  int input;
  int player(0);
  string playerName[2];
  playerName[0] = "David";
  playerName[1] = "Goliath";
  do
  {
    cout<<"\033[1;33m============ MENU ============\033[0m\n";
    cout<<"\033[1;31m1. Attaquer\033[0m\n";
    cout<<"\033[1;32m2. Heal\033[0m\n";
    cout<<"\033[1;37m3. Exit\033[0m\n";
    cout<<"Au tour de " + playerName[player] + " : ";
    cin>> input;
    switch ( input ) {
    case 1:
      (player == 0 ? david : goliath).attaquer(player == 0 ? goliath : david);
      cout<<"\033[1;33m************ ETATS ************\033[0m\n";
      cout << "David" << endl;
      david.afficherEtat();
      cout << endl << "Goliath" << endl;
      goliath.afficherEtat();
      player == 0 ? player = 1 : player = 0;
      break;
    case 2:
      (player == 0 ? david : goliath).boirePotionDeVie(20);
      cout<<"\033[1;33m************ ETATS ************\033[0m\n";
      cout << "David" << endl;
      david.afficherEtat();
      cout << endl << "Goliath" << endl;
      goliath.afficherEtat();
      player == 0 ? player = 1 : player = 0;
      break;
    case 3:
      cout<<"Thank you for playing!\n";
      break;
    default:
      cout<<"Error, bad input.\n";
      cin.clear();
      break;
    }
    cin.get();
  } while(input != 3);
}