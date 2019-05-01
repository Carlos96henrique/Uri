#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char p1[11], p2[11], p3[11];
    char a[] = {"aguia"}, b[] = {"pomba"}, c[] = {"homem"}, d[] = {"vaca"};
    char e[] = {"pulga"}, f[] = {"lagarta"}, g[] = {"sanguessuga"}, h[] = {"minhoca"};

    scanf("%s",p1);
    scanf("%s",p2);
    scanf("%s",p3);
    

    if (strcmp(p1,"vertebrado")==0) {
        if (strcmp(p2,"ave")==0) {
            if (strcmp(p3, "carnivoro")==0) {
                printf("%s\n",a);
            }
            else if (strcmp(p3,"onivoro")==0) {
                printf("%s\n",b);
            }
        }
        else if (strcmp(p2,"mamifero")==0) {
            if (strcmp(p3,"onivoro")==0) {
                printf("%s\n",c);
            }
            else if (strcmp(p3,"herbivoro")==0) {
                printf("%s\n",d);
            }
        }
    }
    if (strcmp(p1,"invertebrado")==0) {
        if (strcmp(p2, "inseto")==0) {
            if (strcmp(p3,"hematofago")==0) {
                printf("%s\n",e);
            }
            else if (strcmp(p3, "herbivoro")==0){
                printf("%s\n",f);
            }
        }
        else if (strcmp(p2,"anelideo")==0) {
            if (strcmp(p3,"hematofago")==0) {
                printf("%s\n",g);
            }
            else if (strcmp(p3,"onivoro")==0) {
                printf("%s\n",h);
            }
        }
    }

    return 0;
}