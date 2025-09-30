#include <stdio.h>
#include <string.h>

//a program where it presents collected student info

int main(){

    //empty variable for conditional statements
    int choice;

    //empty variables
    char studentname[50] = "";
    int gradeLevel = 0;
    char section[50] = "";
    int grade = 0;

    //user prompt
    printf(" _______________________________ \n");
    printf("!                               !\n");
    printf("!      WELCOME STUDENT FROM     !\n");
    printf("!  UNIVERSITY OF CALOOCAN CITY  !\n");
    printf("!                               !\n");
    printf("!  WOULD YOU LIKE TO CONTINUE?  !\n");
    printf("!             1/0?              !\n");
    printf("!                               !\n");
    printf("!_______________________________!\n");
    
    //option section
    scanf("%d", &choice);
    getchar();

    //conditional statements
    if(choice == 1){
        printf("\n---STUDENT INFO---\n");
        printf("Enter your student name: ");
        fgets(studentname, sizeof(studentname), stdin);
        studentname[strcspn(studentname, "\n")] = '\0';

        printf("Enter your Grade level: ");
        scanf("%d", &gradeLevel);
        getchar();

        printf("Enter your section: ");
        fgets(section, sizeof(section), stdin);
        section[strcspn(section, "\n")] = '\0';

        printf("Enter your Grade: ");
        scanf("%d", &grade);
        getchar();

        //representing recieve data
        
    printf(" _______________________________________________________________\n");
    printf("                                                                \n");
    printf("                       STUDENT INFO/REMARKS                     \n");
    printf("                                                                \n");
    printf("    Student Name: %s                                            \n", studentname);
    printf("    Grade Level: %d                                             \n", gradeLevel);
    printf("    Section: %s                                                 \n", section);    
    printf("    Student raw Grade: %d                                       \n", grade);
    printf("________________________________________________________________\n");
        
        
        //presenting student remarks1

        if (grade == 100 && grade <= 99)
        {
            printf("Your remarks is: 1.00\n");
        } else if(grade >=96 && grade <=98){
        printf("Your remarks is: 1.25\n");
        
    } else if(grade >=93 && grade <=95){
        printf("Your remarks is: 1.50\n");
        
    } else if(grade >=90 && grade <=92){
        printf("Your remarks is: 1.75\n");
        
    } else if(grade >=87 && grade <=89){
        printf("Your remarks is: 2.00\n");
        
    } else if(grade >=84 && grade <=86){
        printf("Your remarks is: 2.25\n");
        
    } else if(grade >=81 && grade <=83){
        printf("Your remarks is: 2.50\n");
        
    } else if(grade >=78 && grade <=80){
        printf("Your remarks is: 2.75\n");
        
    } else if(grade >=75 && grade <=78){
        printf("Your remarks is: 3.00\n");
        
    } else if(grade >=70 && grade <=74){
        printf("Your remarks is: 4.00\n");
        
    } else if(grade >=50 && grade <=69){
        printf("Your remarks is: 5.00 \n");
        
    } else {
        printf("Your remarks is: N/A\n");
    }
}

else if(choice == 0){
    printf("Thank you for visiting this program, you may now close the terminal\n");
} else{
    printf("Invalid option");
}

return 0;

//needs improvement mini project
//dont ever forget the ampersand symbols in scanf
//the difference between single and double quotation marks
//there can be multiple if's in one block of code
//new syntaxes from different libraries
}

