#include<stdio.h>

int main(){
FILE * inputFile;
inputFile = fopen("input.txt","r");

char str[100];
fscanf(inputFile,"%s",&str);
int index = 0;

while(str[index] != '\0'){
    index++;
}

printf("%d",index);
return 0;
}
