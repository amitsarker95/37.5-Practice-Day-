#include<stdio.h>


int main(){
FILE * outputFile = fopen("output3.txt","a");
int n;
scanf("%d",&n);

for(int i=0;i<n;i++){
    int nb;
    scanf("%d",&nb);
    int arr[n];
    int sum = 0;
    for(int j=0;j<nb;j++){
        scanf("%d",&arr[j]);
        sum += arr[j];
    }
   fprintf(outputFile,"Case %d %d\n",i+1,sum);
}






return 0;
}
