#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student Student);

int main()
{
    //          A Strcut is a custom container that holds multiple
    //           pieces of related information.
    //           Similar to Objects in other lanuages

    // Use typedef to reduce redancy
    // creating an strcut with no values will make it use garbage values

    // if you want to use a strcut and want to use vales later 
    // use strcpy()

    Student student1 = {"Don", 21, 3.6, true};
    Student student2 = {"Jaam", 21, 3.0, true};
    Student student3 = {0};

    
    strcpy(student3.name, "Goofy");
    student3.age = 22;
    student3.gpa = 3.4;
    student3.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);

    return 0;
}

void printStudent(Student student){
    printf("%s ", student.name);
    printf("%d ", student.age);
    printf("%.2f ", student.gpa);
   // printf("%d\n", student.isFullTime);
    printf("%s \n", (student.isFullTime) ? "true" : "false");
}