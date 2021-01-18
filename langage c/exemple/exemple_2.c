#include <stdio.h>
#include <stdlib.h>

void affichage (char nom [])
     {

    printf("bonjour M(Mme) %s" , nom);
    }

int somme (int a, int b){
    int s;
    s = a+b;
 return s;
}

int main()
{
    char nom[10];
    int s;
    printf("Entrez votre nom : ");
    scanf("%s", &nom);

    //APPEL FUNCTION
    affichage (nom);

    //*********************************//

    s=somme(2,3);
    printf("la somme est %d", s);

    return 0;
}
