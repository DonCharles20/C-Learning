#include <stdio.h>

int main(){

    //Write a file

    FILE *pFile = fopen("output.txt", "w");
    //This is how you delcare and intialize a file

    char text[] = "LEEEEROOOOYYY JENKINNNNNSSSS";

    if(pFile == NULL){
        printf("Error opening file \n");

        return 1;
    }

    fprintf(pFile, "%s", text);
    printf("File was written successfully! \n");

    fclose(pFile);//THis is how you close a file



    return 0;
}