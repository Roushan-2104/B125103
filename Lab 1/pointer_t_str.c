#include <stdio.h>

struct Students
{
    int roll;
    float marks;
    char name[50];
};

int main(){
    struct Students st;
    struct Students *ptr = &st;

    printf("Enter Name: ");
    scanf("%s", ptr->name);
    printf("Enter roll: ");
    scanf("%d", &ptr->roll);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\n-----Student Details--------\n");
    printf("Name : %s\n", ptr->name);
    printf("Roll : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);
    return 0;
}