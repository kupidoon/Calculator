#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "calculator.h"
int main()
{
int vubor=0;
float pervi=4;
float vtori=90;
propusk();
printf("\nОберіть дію\n");
printf("1.Додавання\n");
printf("2.Віднімання\n");
printf("3.Множення\n");
printf("4.Ділення\n");
scanf("%i", &vubor);
if(vubor>=1&&vubor<=4){
propusk();
printf("Напишіть перше число ");
scanf("%f", &pervi);
propusk();
printf("Напишіть друге число ");
scanf("%f", &vtori);
}
if(vubor==1){
dodavanie(pervi,vtori);
}else
if(vubor==3){
mnoshenie(pervi,vtori);
}else
if(vubor==4){
delenie(pervi,vtori);
}else
if(vubor==2){
vidnimana(pervi,vtori);
}else{
    propusk();
    printf("Схоже ти десь помилився");
}


}