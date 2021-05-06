#include <iostream>
#include "Joueur.h"
#include <string>
#include <vector>
#include "Jeu.h"
#include "Jeu.cpp"
#include "JeuSolo.h"
#include "JeuSolo.cpp"
#include "JeuMulti.cpp"
#include "JeuMulti.h"
#include "Machine.h"
#include "Humain.h"
using namespace std;

int main()
{
        vector <Joueur*> v;
        char rep;
        do
        {
        cout<<"Vous voulez jouez seul ou avec des amis? "<<endl;
        cout<<"choisisez S ou M"<<endl;
        cin>>rep;
        }while ((rep!='S')&& (rep!='s')&&(rep!='M')&&(rep!='m'));
        if ((rep=='s')||(rep=='S'))
       {
           Jeu * g=new JeuSolo(v);
            g->remplirliste();
            g->partie();
       }
       else
       {
           Jeu * g=new JeuMulti(v);
            g->remplirliste();
            g->partie();
       }
        return 0;
}
