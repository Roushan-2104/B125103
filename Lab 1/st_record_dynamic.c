#include <stdio.h>

struct Students
{
    int roll;
    float marks;
    char name[50];
};

int main(){
    int n ;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Students *st = (struct Students *)malloc(n*sizeof(struct Students));

    if(st == NULL){
        printf("Memory Allocation failed!!");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Enter details of student %d\n", i+1);
        printf("Enter name : ");
        scanf("%s", (st + i)->name);
        printf("Enter Roll Number : ");
        scanf("%d", &(st + i)->roll);
        printf("Enter Marks : ");
        scanf("%d", &(st + i)->marks);
    }

    int highIdx = 0;
    for(int i = 0; i < n; i++){
        if((st+i)->marks > (st + highIdx)->marks) highIdx = i;
    }

    printf("\nTopper : %s (Roll No. %d) with %.2f Marks.\n", (st+highIdx)->name, (st+highIdx)->roll, (st+highIdx)->marks);
    return 0;
}