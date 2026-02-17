#include <stdio.h>

int main()
{
    // using this 2D array to store the questions, options and answers for the quiz game
    // it is 3 by 100 because we have 3 questions and each question can have up to 100 characters
    char questions[][100] = {
        "What is the capital of France?",
        "What is the largest planet in our solar system?",
        "Who is the author of 'To Kill a Mockingbird'?"};

    // using this 2D array to store the options for each question,
    // it is 3 by 200 because we have 3 questions and each option can have up to 200 characters
    char options[][200] = {
        {"A) Paris\nB) London\nC) Rome\nD) Berlin"},
        {"A) Earth\nB) Jupiter\nC) Saturn\nD) Mars"},
        {"A) Harper Lee\nB) J.K. Rowling\nC) Ernest Hemingway\nD) F. Scott Fitzgerald"}};
    char answers[3] = {'A', 'B', 'A'};

    int score = 0;
    char userAnswer;
    int questionCount = sizeof(questions) / sizeof(questions[0]);
    // This takes the size of the questions array and divides
    // it by the size of a single question to get the number of questions in the quiz game
    for (int i = 0; i < questionCount; i++)
    {
        // This loop iterates through each question in the quiz game with its corresponding options and answers. 
        //For each question, it displays the question and options to the user
        // and prompts the user to enter their answer.
        // It then checks if the user's answer is correct and updates the score accordingly.

        printf("%s\n", questions[i]);
        // This line prints the current question to the console.
        printf("%s\n", options[i]);
        // This line prints the options for the current question to the console.

        printf("Your answer: ");

        scanf(" %c", &userAnswer);
        userAnswer = toupper(userAnswer);
        // This line reads the user's answer from the console
        // and converts it to uppercase using the toupper function.

        if (userAnswer == answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong! The correct answer is %c\n", answers[i]);
        }

        printf("\n");
    }
    printf("Your final score is %d out of 3.\n", score);

    return 0;
}