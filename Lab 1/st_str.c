#include <stdio.h>

struct Students
{
    int roll;
    float marks;
    char name[50];
};

void StudentInput(struct Students st[], int n){
    for(int i = 0; i<n; i++){
        printf("Enter details of student %d\n", i+1);
        printf("Enter name : ");
        scanf("%s", st[i].name);
        printf("Enter Roll Number : ");
        scanf("%d", &st[i].roll);
        printf("Enter Marks : ");
        scanf("%d", &st[i].marks);
    }
}

void displaySt(struct Students st[], int n){
    printf("\n%-12s %-20s %-10s\n", "Roll no.", "Name", "Marks");
    printf("------------------------------------------\n");
    for(int i = 0; i < n; i++){
        printf("%-12d %-20s %-10.2f\n", st[i].roll, st[i].name, st[i].marks);
    }
}

int main(){
    struct Students st[5];

    StudentInput(st,5);
    displaySt(st,5);

    return 0;
}