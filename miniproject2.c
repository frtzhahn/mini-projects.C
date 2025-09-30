//BMI calculator

#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {

    int yes;

    //empty variables
    char name[50] = "";
    int age = 0;
    double weight = 0.0f;
    double height = 0.0f;
    char Bsymbol[50] = "kg/m2";
    double BMI = 0.0;

    //user prompt
    printf("___________________________________________________\n");
    printf("                                                   \n");
    printf("             WELCOME TO BMI CALCULATOR !           \n");
    printf("                                                   \n");
    printf("      would you like to continue this program?     \n");
    printf("                        1/0 ?                      \n");
    printf("___________________________________________________\n");
    if (scanf("%d", &yes) != 1){
        return 1;
    }  
    getchar();


    //conditional statements

    if(yes == 1){

        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';

        printf("Enter your age: ");
        scanf("%d", &age);
        getchar();

        printf("Enter your weight in kilograms: ");
        scanf("%lf", &weight);
        getchar();

        printf("Enter your height in meters: ");
        scanf("%lf", &height);
        getchar();

        //formula for BMI
        BMI = weight / pow(height, 2);

    

        //output
    printf("___________________________________________________\n");
    printf("                                                   \n");
    printf("                **USER'S INFO/BMI**                \n");
    printf("                                                   \n");
    printf("         User's name: %s\n", name);
    printf("         User's age: %d\n", age);
    printf("         User's weight: %.2lf kilograms\n", weight);
    printf("         User's height: %.2lf meters\n", height);    
    printf("         User's BMI: %.2lf %s\n", BMI, Bsymbol);
    printf("                                                   \n");

    if(BMI >= 40.00){
        printf("         **BMI category: Class III Obesity**\n");
        printf("___________________________________________________\n");
    } else if(BMI <=39.99 && BMI >=30.00){
        printf("         **BMI category: Class II Obesity**\n");
        printf("___________________________________________________\n");
    } else if(BMI <= 29.99 && BMI >=25.00){
        printf("         **BMI category: Class I Obesity**\n");
        printf("___________________________________________________\n");
    } else if(BMI <=24.99 && BMI >=18.50){
        printf("         **BMI category: Normal Weight**\n");
        printf("___________________________________________________\n");
    } else if(BMI <=18.49){
        printf("         **BMI category: Underweight**\n");
        printf("___________________________________________________\n");
    } 


    }


else if(yes == 0){
    printf("Thank you for visiting this program, you may now close the terminal");
} 

return 0;

//will add new features in the future (maybe)
}
