#include <stdio.h>
#include <stdlib.h>

//* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
    int age;
    char nom [10], prenom [10], num_tel[10], sex;

    printf("entrer votre nom:");
    scanf("%s", &nom);

    printf("entrer votre prenom:");
    scanf("%s", &prenom);

    printf("entrer votre num_tel:");
    scanf("%d", &num_tel);

    printf("entrer votre sex:");
    scanf("%s", &sex);

    printf("entrer votre age:");
    scanf("%d" , &age);

    //printf("%s", nom);
    printf("bonjour %s - %s vous etes %c et votre age est %d \n votre N° de tel est %s", nom, prenom, sex, age, num_tel);
    return 0;
}

