#include<stdio.h>
#include<string.h>
struct nametype{
    char fullName[40];
};
struct studenttype{
    int id;
    struct nametype name;
};
int main()
{
    struct studenttype student[5];
    int i, n=5;

    for(i = 0; i < n; i++){
        printf("Enter the ID for student %d: ", i+1);
        scanf("%d", &student[i].id);
        printf("Enter the full name: ");
        scanf(" %[^\n]", student[i].name.fullName);
        printf("\n");
    }
    printf("Output: \n\n");
    for(i = 0; i < n; i++){
        printf("ID: %d\n", student[i].id);
        printf("Name: %s\n", student[i].name.fullName);
    }
}
