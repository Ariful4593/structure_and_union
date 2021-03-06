#include<stdio.h>
#include<string.h>
typedef struct{
    char fullName[40];
}nametype;

typedef struct{
    int id;
    nametype name;
    char grade[3];
}studenttype;

void calculate_grade(studenttype* s, int mark)
{
    if(mark >= 80){
        strcpy(s->grade, "A+");
    }
    else if(mark >= 70){
        strcpy(s->grade, "A");
    }
    else if(mark >= 60){
        strcpy(s->grade, "A-");
    }
    else if(mark >= 50){
        strcpy(s->grade, "B");
    }
    else if(mark >= 40){
        strcpy(s->grade, "C");
    }
    else{
        strcpy(s->grade, "F");
    }
}
int main()
{
    studenttype student[3];
    int i, n = 3;
    int marks[] = {72,82,60};
    for(i = 0; i < n; i++){
        printf("Enter the ID for student %d: ", i+1);
        scanf("%d", &student[i].id);
        printf("Enter Full name: ");
        scanf(" %[^\n]", student[i].name.fullName);
        strcpy(student[i].grade, "");
        printf("\n");
    }

    for(i = 0; i < n; i++){
        calculate_grade(&student[i], marks[i]);
    }
    printf("Output: \n\n");

    for(i = 0; i < n; i++){
        printf("ID: %d\n", student[i].id);
        printf("Name: %s\n", student[i].name);
        printf("Grade: %s\n", student[i].grade);
    }
}
