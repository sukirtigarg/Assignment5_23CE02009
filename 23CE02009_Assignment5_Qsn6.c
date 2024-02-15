/*Lab Assignment 5
Question No.6
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 9/2/24*/

#include <stdio.h>
#include <string.h>
int main()
{ // given a character array
    int j;
    char array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char word[10];
    printf("enter the word\n");
    scanf("%s", &word);
    for (int i = 0; i < strlen(word); i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (word[i] == array[j])
                break;
        }
        if (j == 10)
        {
            printf("the word cannot be formed");
            break;
        }
        if (i == strlen(word) - 1 && j != 10)
            printf("the word can be formed");
        else
            continue;
    }
}