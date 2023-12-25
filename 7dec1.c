//file handling
#include<stdio.h>
#include<stdlib.h>
int main (){
    FILE* fp;
    fp=fopen("test.txt","w+");//a or a+ se old input ke saath 
//w  or w+ se old input ko clear kar new wala input print karega 
    if(fp==NULL)
    printf("file does not exist");
    else
    printf("file exist");

    //fprintf(fp,"%s","shivesh");//or niche wala
    fputs(" kumar ",fp);

    







return 0;    
}