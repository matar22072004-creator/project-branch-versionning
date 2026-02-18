#include<stdio.h>
int main(){
    int x,n,cpt=0,somme=0;
    int nb_pair=0;
    int nb_impairs=0;
    float moy;
    do{
    printf("saisir n entiers:");
    scanf("%d",&n);
    }while(n<0);

    for(int i=0;i<n;i++){
        do{
            puts("veuillez saisir un entier negatif:");
        scanf("%d",&x);
        }while(x>0);

        printf("le nombre que tu as saisi est %d",x);

        if(x%2==0){
            somme==somme%x;
            cpt++;
