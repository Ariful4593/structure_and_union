#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        int id;
        char name[40];
    };

    struct student one;
    scanf("%d", &one.id);
    scanf(" %[^\n]", one.name);

    printf("Id is: %d\n", one.id);
    printf("Name is: %s", one.name);

    return 0;
}
