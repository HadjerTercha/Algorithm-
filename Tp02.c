#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//دالة لادخال سلسلة حروف
char *ChargerChaine(int N) {
    char *chaine = (char*)malloc((N+1) *sizeof(char)); 

    printf("Entrez la chaine : ");

    return chaine;
}
//دالة لحساب طول سلسلة الاحرف
int Longueur(char *ch) {
    int i = 0;
    while (ch[i] != '\0') {
        i++;
    }
    return i;
}
//عكس الجدول . 

void InverserTab(char Tab[], char T[], int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m-i-1];
    }
}
