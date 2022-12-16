#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler_aposta (int *aposta,int n,int d){
d=0;
while(d==0){
printf("digite a quantidade de apostas\n");
scanf("%d",&n);
if(n<21){
FILE * arquivo;
arquivo=fopen("aposta.txt","w");
aposta=(int *)malloc(n*sizeof(int));
printf("digite quais valores quer apostar\n");
for(int i=0;i<n;i++){
scanf("%d",&aposta[i]);
fprintf(arquivo,"%d ",aposta[i]);
}
rewind (arquivo);
fclose(arquivo);
d++;
return;
}
   else{
       printf("so poderar realizar no maximo 20 apostas\n");
   }

}}


void sorteia_valores (int *sorteio,int n){
printf("sera sorteado 20 numeros:\n");
srand(time(NULL));
sorteio=(int*)malloc(20*sizeof(int));
for(n=0;n<20;n++){
sorteio[n]=rand()%100;
printf("%d\t",rand()%100);}
return;
}

int compara_aposta (int *aposta,int *sorteio,int n,int d){
d=0;
for(int i=0;i<20;i++){
if(aposta==sorteio){
    d++;
}}
    printf("numeros acertados %d",d);
}

void main (void){
int *ap,*sort,*val,*arq;
int np,n,l;
char *p;
ler_aposta (ap,np,l);
sorteia_valores (sort,np);
compara_aposta(ap,sort,n,np);

}
