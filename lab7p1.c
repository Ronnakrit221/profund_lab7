#include <stdio.h>
#include <string.h>

int main(){
    struct student
    {
        int ID;
        char name[10];
    };

    struct student s1, s2 ,s3;
    printf("Enter Student ID 1: ");scanf("%d",&s1.ID);
    printf("Enter Student Name 1: ");scanf("%s",s1.name);
    printf("Enter Student ID 2: ");scanf("%d",&s2.ID);
    printf("Enter Student Name 2: ");scanf("%s",s2.name);
    printf(" %d,%s",s1.ID,s1.name);
    printf(" %d,%s",s2.ID,s2.name);
    return 0;
}