#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("========= QUIZ APPLICATION =========\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("A. Mumbai\nB. Delhi\nC. Chennai\nD. Kolkata\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='B' || answer=='b'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: B. Delhi\n\n");
    }

    // Question 2
    printf("2. Which language is known as the mother of many programming languages?\n");
    printf("A. Java\nB. Python\nC. C\nD. HTML\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='C' || answer=='c'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: C. C\n\n");
    }

    // Question 3
    printf("3. Which planet is called the Red Planet?\n");
    printf("A. Earth\nB. Mars\nC. Jupiter\nD. Venus\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='B' || answer=='b'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: B. Mars\n\n");
    }

    // Question 4
    printf("4. Which symbol is used to end a statement in C?\n");
    printf("A. :\nB. ;\nC. ,\nD. .\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='B' || answer=='b'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: B. ;\n\n");
    }

    // Question 5
    printf("5. How many continents are there on Earth?\n");
    printf("A. 5\nB. 6\nC. 7\nD. 8\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='C' || answer=='c'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: C. 7\n\n");
    }

    // Question 6
    printf("6. Which function is used to print output in C?\n");
    printf("A. scanf()\nB. printf()\nC. gets()\nD. puts()\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='B' || answer=='b'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: B. printf()\n\n");
    }

    // Question 7
    printf("7. What is the value of 9 x 8?\n");
    printf("A. 72\nB. 81\nC. 64\nD. 90\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='A' || answer=='a'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: A. 72\n\n");
    }

    // Question 8
    printf("8. Which loop is guaranteed to execute at least once?\n");
    printf("A. for\nB. while\nC. do-while\nD. None\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='C' || answer=='c'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: C. do-while\n\n");
    }

    // Question 9
    printf("9. Which operator is used to find the remainder in C?\n");
    printf("A. /\nB. %%\nC. *\nD. +\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='B' || answer=='b'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: B. %%\n\n");
    }

    // Question 10
    printf("10. Which data type is used to store a single character in C?\n");
    printf("A. int\nB. float\nC. char\nD. double\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if(answer=='C' || answer=='c'){
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer: C. char\n\n");
    }

    printf("=====================================\n");
    printf("Quiz Completed!\n");
    printf("Your Score = %d/10\n", score);

    if(score == 10)
        printf("Grade: Excellent!\n");
    else if(score >= 8)
        printf("Grade: Very Good!\n");
    else if(score >= 5)
        printf("Grade: Good!\n");
    else
        printf("Grade: Keep Practicing!\n");

    return 0;
}