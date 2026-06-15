#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){

    // Intro

    printf("\nWelcome to Trouli's Quiz Game!\n\n");

    printf("\nYou will be presented with 10 multiple choice questions.\n\n");

    printf("\nAre you ready to start the game?\n\n");

    printf("\nRespond with: Yes / No\n\n");

    // First User Input: Start Game: Yes or No
    
    char user_input[30];
    scanf("%s", user_input);

 // here I should put something to account for whitespaces, uppercase, etc  etc. 

 /* if you want to check what the User Input is:
    printf("%s", user_input);
    printf("\n\n");
 */
    
 // THE BELOW IF/ELSE STATEMENT NEEDS FIXING...
    if (user_input == "Yes" || "y" || "yeah"){
        printf("Let's get started!");
    } 
    else if (user_input == "No" || "n" || "nah"){
        printf("Ok. Come back when you're ready to play!");
    }
    else if(user_input != "Yes" || "y" || "yeah" || "No" || "n" || "nah"){
        printf("Sorry, I didn't understand that. Try again.");    }

    return 0;

}

/*
 make a quiz game.


 present you with one multiple choice question
 with 4 possible numbered answers

 allow you to select the number corresponding to an answer

 tell you if you are right or wrong
 print "correct!" or "incorrect! the correct answer is: ()"

 repeat

*/
