#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
cezar(char kontener);
//odszyfruj(int przesun,char kontener);
int main()
{   int p=0;
    int q=0;
    int n=1;
    int przesun=0;
    char kontener;
    char klucze[10][10];
    FILE *oryginal=fopen("oryginal.txt", "r");
    FILE *klucz=fopen("klucz.txt", "r");
    FILE *kopia=fopen("kopia.txt", "wt");
    FILE *szyfr=fopen("szyfr.txt", "wt");

    //srand(time(NULL));
    //n=rand()%11-5;

// TWORZ� KOPI� PLIKU ORYGINAL I SZYFR #CEZAR
    for(int i=0; i<=127; i++){
        fscanf(oryginal, "%c", &kontener);
        printf("%c", kontener);


        fprintf(kopia, "%c", kontener);
        kontener=kontener+n;


        fprintf(szyfr, "%c", kontener);
    }
    printf("\n");
    printf("\n");

//ZAPISUJ� DO TABLICY S�OWA - KLUCZE
    while(p<10)
    {
        while (q<10)
        {
        fscanf(klucz, "%c", &klucze[p][q]);
        if(klucze[p][q]!='#')
       printf("%c", klucze[p][q]);

        if (klucze[p][q] == '#')
        {
            p=11;
            break;
        }
        if(klucze[p][q]==32)
        {
        klucze[p][q]=0;
        q=0;
        break;
        }
        else
        {
        q++;
        }
        }
        p++;
    }

    p=0;
    q=0;

// SPRAWDZAM ZAWARTO�� TABLICY KLUCZE
printf("\n \n wypisz: \n");

 while(p<10)
    {
        while (q<10)
        {
        if(klucze[p][q]!='#')
        {
        printf("%c", klucze[p][q]);
        }
        if (klucze[p][q] == '#')
        {
            p=11;
            break;
        }
        if(klucze[p][q]==0)
        {
        q=0;
        break;
        }
        else
        {
        q++;
        }
        }
        p++;
    }
       printf("\n---- \n");





// ZAMYKAM SZYFR I KOPI� I OTWIERAM W TRYBIE READ
    printf("\n");
    fclose(szyfr);
    fclose(kopia);
    kopia=fopen("kopia.txt", "r");
    szyfr=fopen("szyfr.txt", "r");








    odszyfruj(kontener, )


    /*
    for(int i=0; i<=100; i++)
    {   if()
        fscanf(szyfr, "%c", &kontener);






    }

    */



/*
//zawijanie dookola alfabetu:
przesun = przesun % ('Z' - 'A');//zeby nie wyjechac dalej niz trzeba

char znak;//duza litera

if (znak < 'A')
	znak += 'Z' - 'A';
if (znak > 'Z')
	znak -= 'Z' - 'A';
*/













// SPRAWDZAM ZAWARTO�� SZYFR.TXT
       for(int i=0; i<=127; i++){
       fscanf(szyfr, "%c", &kontener);
        printf("%c", kontener);
       }
       printf("\n");








       fclose(szyfr);
       fclose(oryginal);
       fclose(kopia);
       fclose(klucz);


return 0;
}
char cezar(char kontener, int przesun){

if(kontener<='Z'&&kontener>='A'){
    przesun = przesun % ('Z' - 'A');

    if (kontener < 'A')
	kontener += 'Z' - 'A';
if (kontener > 'Z')
	kontener -= 'Z' - 'A';

    return kontener;

}






return kontener;




}








