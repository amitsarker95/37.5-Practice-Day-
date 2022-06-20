#include<stdio.h>

int main(){
FILE * inputFile = fopen("input.txt","r");
if(inputFile == NULL){
   printf("No file found yet\n");
   }
FILE * outputFile = fopen("output.txt","w");
int n;
fscanf(inputFile,"%d",&n);

int arr[n];
int sum = 0;
for(int i=0;i<n;i++){

    fscanf(inputFile,"%d",&arr[i]);
    sum+=arr[i];
}
fprintf(outputFile,"Total - %d",sum);

return 0;
}
