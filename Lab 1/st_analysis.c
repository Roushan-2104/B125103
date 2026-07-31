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
        scanf("%f", &st[i].marks);
    }
}

void displaySt(struct Students st[], int idx){
    printf("\n%-12s %-20s %-10s\n", "Roll no.", "Name", "Marks");
    printf("------------------------------------------\n");
    
        printf("%-12d %-20s %-10.2f\n", st[idx].roll, st[idx].name, st[idx].marks);
    
}

void avgMrks(struct Students st[], int n){
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += st[i].marks;
    }

    printf("\nAverage marks of the class is %.2f\n", sum/n);
}

int findHigh(struct Students st[], int n){
    int idx = 0;
    float maxi = st[0].marks;
    for(int i =0; i < n; i++){
        if(maxi < st[i].marks){
            maxi = st[i].marks;
            idx = i;
        }
    }
    return idx;
}

int main(){
    struct Students st[5];

    StudentInput(st, 5);
    int highIdx = findHigh(st, 5);
    printf("Student with highest marks:- \n");
    displaySt(st,highIdx);

    avgMrks(st,5);

    return 0;
}