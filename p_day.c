#include<stdio.h>
struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};

int main(){

    struct Student a[3];
    struct Student high;
    struct Student low;
    int height = 0;
    int lowest = 0;
    for(int i=0;i<3;i++){
    scanf("%s %d %d %c %d",&a[i].name,&a[i].marks,&a[i].roll,&a[i].section,&a[i].whichClass);
    if(a[i].marks>height){
        height = a[i].marks;
        high = a[i];
    }
    lowest = a[0].marks;
    if(lowest> a[i].marks){
        lowest = a[i].marks;
        low = a[i];
    }

    }


    printf("Highest-%s %d %d %c %d\n",high.name,high.marks,high.roll,high.section,high.whichClass);
    printf("Lowest-%s %d %d %c %d",low.name,low.marks,low.roll,low.section,low.whichClass);
return 0;
}
