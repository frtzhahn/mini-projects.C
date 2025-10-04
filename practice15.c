#include <stdio.h>
#include <string.h>

//practicing switch statements
int main () {

    //empty variable for conditional statements, were using string based option now
    char choice[10];

    //empty variables
    int number = 0;
    char letter = '\0'; //null terminator for an empty variable for char data type

    //user prompt
    printf("Please select a program between the following options: (yes or ok)\n");
    printf("yes: Random Character generator\n");
    printf("ok: Random Number generator\n");
    scanf("%s", &choice); //were not using fgets since were only using 1 word with no spaces included
    getchar();

    if(strcmp(choice, "yes") == 0)
    {
        printf("WELCOME TO RANDOM CHARACTER GENERATOR\n");
        printf("Please enter a number from 1-10: ");
        scanf("%d", &number);
        getchar(); //removes the input buffer preventing other scanf statements to read the same input here

        switch (number)
        {
        case 1:
            printf("The letter is: B");
            break;
            case 2:
            printf("The letter is: T");
            break;
            case 3:
            printf("The letter is: F");
            break;
            case 4:
            printf("The letter is: V");
            break;
            case 5:
            printf("The letter is: L");
            break;
            case 6:
            printf("The letter is: S");
            break;
            case 7:
            printf("The letter is: P");
            break;
            case 8:
            printf("The letter is: J");
            break;
            case 9:
            printf("The letter is: E");
            break;
            case 10:
            printf("The letter is: X");
            break;

            default:
            printf("Invalid user input, You can only enter numbers 1-10");

             
    }
}

else if(strcmp(choice, "ok") == 0){
    printf("WELCOME TO RANDOM NUMBER GENERATOR\n");
    printf("Please enter a letter between A-L: ");
    scanf("%c", &letter);

    //cases are up to 11 since A, B ,C ,D ,E, F, G, H, I, J, K ,L
    switch(letter) //didnt add another getchar syntax since there is no follow up scanf statements
    {
        case 'A':
            printf("Your number is 67");
            break;
            case 'B':
            printf("Your number is 1000000000000000000");
            break;
            case 'C':
            printf("Your number is 12");
            break;
            case 'D':
            printf("Your number is 35");
            break;
            case 'E':
            printf("Your number is 5");
            break;
            case 'F':
            printf("Your number is 45");
            break;
            case 'G':
            printf("Your number is 88");
            break;
            case 'H':
            printf("Your number is 89");
            break;
            case 'I':
            printf("Your number is 56");
            break;
            case 'J':
            printf(" Your number is 65");
            break;
            case 'K':
            printf("Your number is 0");
            break;
            case 'L':
            printf("Your number is 55");
            break;

            default:
            printf("Invalid input, you can only enter letters A to L in caps");
    }
}

else{
    printf("Invalid user input please choose between yes or no options in small caps");
}




return 0;
}