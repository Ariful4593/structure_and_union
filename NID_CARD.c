#include<stdio.h>
#include<string.h>
typedef struct{
    char fullName[40];
    char fatherName[40];
    char motherName[40];
}nametype;
typedef struct{
    int date,month,year,nidNo;
}datetype;

typedef struct{
    nametype name;
    datetype dateInfo;
}nidtype;
int main()
{
    nidtype person[3];
    int i,n=3;
    for(i = 0; i < n; i++){
        printf("Enter your full name: ");
        scanf(" %[^\n]", person[i].name.fullName);
        printf("Enter your father name: ");
        scanf(" %[^\n]", person[i].name.fatherName);
        printf("Enter your mother name: ");
        scanf(" %[^\n]", person[i].name.motherName);
        printf("Enter your date of birth: ");
        scanf("%d %d %d", &person[i].dateInfo.date, &person[i].dateInfo.month, &person[i].dateInfo.year);
        printf("NID NO: ");
        scanf("%d", &person[i].dateInfo.nidNo);
        printf("\n");
    }

    for(i = 0; i < n; i++){
        printf("Name: %s\n", person[i].name.fullName);
        printf("Father Name: %s\n", person[i].name.fatherName);
        printf("Mother Name: %s\n", person[i].name.motherName);
        printf("Date of Birth: %d %d %d\n/", person[i].dateInfo.date, person[i].dateInfo.month, person[i].dateInfo.year);
        printf("NID NO: %d\n", person[i].dateInfo.nidNo);
        printf("\n\n");
    }
}
