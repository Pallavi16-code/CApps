
// REPORT CARD GENERATOR //

#include <stdio.h>

// Structure to store student information
struct Student {
    char name[50];
    int standard;
    char section;
};

// Structure to store subject marks
struct Subject {
    char name[20];
    int marks;
};

int main() {
    // Declare and initialize a student structure
    struct Student student;
    printf("Enter student name: ");
    scanf("%s", student.name);
     while ((getchar()) != '\n');  

    printf("\nEnter standard:");
    scanf("%d", &student.standard);
     while ((getchar()) != '\n');  

    printf("\nEnter section: ");
    scanf(" %c", &student.section);
    while ((getchar()) != '\n');  

    // Declare and initialize subject structures for Mathematics , English , Hindi ,Science and Social Science
    struct Subject Mathematics = {"\tMathematics:", 0};
    struct Subject English = {"\tEnglish:", 0};
    struct Subject Hindi = {"\tHindi:", 0};
    struct Subject Science= {"\tScience:", 0};
    struct Subject Social_Science= {"\tSocial_Science:", 0};
    

    // Input marks for each subject
    printf("\nEnter marks for Mathematics: ");
    scanf("%d", &Mathematics.marks);

    printf("\nEnter marks for English:");
    scanf("%d", &English.marks);

    printf("\nEnter marks for Hindi: ");
    scanf("%d", &Hindi.marks);

     printf("\nEnter marks for Science: ");
    scanf("%d", &Science.marks);

     printf("\nEnter marks for Social_Science: ");
    scanf("%d", &Social_Science.marks);



    // Calculate total marks 
    int totalMarks = Mathematics.marks + English.marks + Hindi.marks + Science.marks + Social_Science.marks;
      

    // Calculate grade
      char grade = 'X';
    
    if(totalMarks>=450 && totalMarks<=500){
        grade  = 'A';
    }else if(totalMarks>=400 && totalMarks<=449){
         grade = 'B';
    }else if(totalMarks>=350 && totalMarks<=399){
         grade = 'C';
    }else if(totalMarks>=300 && totalMarks<=349){
         grade  = 'D';
    }else if( totalMarks>=200 && totalMarks<=299){
         grade  = 'E';
    }else if(totalMarks>=0 && totalMarks<=200){
          grade  = 'F';
    }else{
        puts("invalid input.");
    }


    // Display the annual report card
    printf("\n----------------------------------------\n");
    printf("\n\tJawahar Navodaya Vidyalaya\n ");
    printf("\n\tAnnual Report Card\n\n");
    printf("\n\tStudent Name: %s\n", student.name);
    printf("\n\tStandard: %d\n", student.standard);
    printf("\n\tSection: %c\n\n\n", student.section);
    printf("\tMarks Secured out of 100\n\n");
    
    printf("%s %d\n\n", Mathematics.name, Mathematics.marks);
    printf("%s %d\n\n", English.name, English.marks);
    printf("%s %d\n\n", Hindi.name, Hindi.marks);
    printf("%s %d\n\n", Science.name, Science.marks);
    printf("%s\t%d\n\n",Social_Science.name, Social_Science.marks);
    
    

    printf("\tTotal Marks secured: %d\t\n", totalMarks);

    printf("\n\tGrade: %c",grade);

    printf("\n\n----------------------------------------\n");
    
    return 0;
}

