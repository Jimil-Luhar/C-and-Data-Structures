#include <stdio.h>
#define S 2
struct Student {
    char name[50];
    int rollNo;
    float marks[3];
};
void main() {
    struct Student students[S];
    for (int i = 0; i < S; i++) {
        printf("Details for S%d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("RollNo: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks(3 subs): ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
        }
    }
    printf("\nStudent's Info:\n");
    for (int i = 0; i < S; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Marks: %.2f, %.2f, %.2f\n", 
        students[i].marks[0], 
        students[i].marks[1], 
        students[i].marks[2]);
    }
}
