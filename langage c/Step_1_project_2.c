#include<stdio.h>
int main()

{
    //Déclaration
    int a, b , c,somme ,sous ,moulti,div,rest;

    //Affectation
    c=5;

    //Demander à l'utilisateur les datas
    printf("donne a:");
    scanf("%d", &a );
    printf("donne b:");
    scanf("%d", &b );

    //Addition
    somme= a+b+c;
    printf("somme = %d \n",somme);

    //Soustraction
    sous= a-b;
    printf("sous = %d \n",sous);

    //Multiplication
    moulti=a*b;
    printf("moulti = %d \n",moulti);

    //Division
    if(b==0){
        printf("error\n");
    }
    else{
        div=a/b;
        printf("div a/b=%d",div);
    }

    //Modulo
    if(b==0){
        printf("error");
    }
    else{
        rest=a%b;
        printf("div a/b=%d",rest);
    }
    return 0;
}
