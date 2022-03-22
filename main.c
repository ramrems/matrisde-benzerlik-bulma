#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int*p;
    int a[10][10];
    for(int i=0;i<10;i++){
            printf("\n\n");
        for(int j=0;j<10;j++){
        a[i][j]=rand()%2;
     p=a;
    printf("%5d",a[i][j]);}}
  /*  printf("\n\n");
    for(int k=1;k<11;k++){
            for(int m=1;m<11;m++){
             printf("adrs %d,%d:%p ",k,m,(p+m));}
             printf("\n\n");}*/
int benz[8][8]={0};
int *pyer1,*pyer2,yer2,yer1,*pmax,max=0;
pyer1=&yer1;
pyer2=&yer2;
pmax=&max;
for(int y=0;y<8;y++)
for(int x=0;x<8;x++){
if(a[0+y][0+x]==0){
    benz[y][x]=1;}
    if(a[0+y][1+x]==1){
        benz[y][x]+=1;}
        if(a[0+y][2+x]==0){
        benz[y][x]+=1;}
        if(a[1+y][0+x]==0){
        benz[y][x]+=1;}
        if(a[1+y][1+x]==1){
        benz[y][x]+=1;}
        if(a[1+y][2+x]==0){
        benz[y][x]+=1;}
        if(a[2+y][0+x]==1){
        benz[y][x]+=1;}
        if(a[2+y][1+x]==1){
        benz[y][x]+=1;}
        if(a[2+y][2+x]==1){
        benz[y][x]+=1;}
    //printf("\nbenzerlik %d,%d: %d",y,x,benz[y][x]);
    if(benz[y][x]>=*pmax){
        *pmax=benz[y][x];
        *pyer1=y;
        *pyer2=x;}}
    printf("\n\nMAX Benzerlik:%d",*pmax);
    printf("\nMAX Benzerligin yeri:ilk elemanı %d.satır,%d.sutundan baslayan 3x3 luk matris ",*pyer1,*pyer2);
    printf("\n(ilk satır ve sütun 0 olarak kabul edilmistir)");
            return 0;}
