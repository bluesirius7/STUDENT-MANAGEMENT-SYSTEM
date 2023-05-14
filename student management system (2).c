#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int rollNumber;
    float marks;
    char grade;
};

int main() {
    
    int i,n;
    
    printf("\nEnter number of students: \n");
    scanf("%d", &n);
    
    struct student s[n];

    // Input student data
    for(i=0; i<n; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &s[i].marks);

        // Determine grade based on marks
        if (s[i].marks >= 90) {
            s[i].grade = 'A';
        } else if (s[i].marks >= 80) {
            s[i].grade = 'B';
        } else if (s[i].marks >= 70) {
            s[i].grade = 'C';
        } else if (s[i].marks >= 60) {
            s[i].grade = 'D';
        } else {
            s[i].grade = 'F';
        }
    }

    // Display student data
    printf("\n\nDisplaying details of all students:\n");
    for(i=0; i<n; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nRoll Number: %d", s[i].rollNumber);
        printf("\nMarks: %.2f", s[i].marks);
        printf("\nGrade: %c", s[i].grade);
        printf("\n");
    }

    return 0;
}