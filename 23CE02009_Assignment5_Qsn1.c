/*Lab Assignment 5
Question No.1
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 9/2/24*/

#include <stdio.h>
int main()
{
    int a, digit = 0,original;
    printf("Enter the number: ");
    scanf("%d", &a);
    original=a;
    while (1)
    {
        if (a == 0)
            break;
        a = a / 10;
        digit++;
    }
    printf("the number of digits is %d\n", digit);


    int count[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array1[50];
    int sum = 0;
    for (int i = 0; i < digit; i++)
    {
        array1[i] = original % 10;
        original = original / 10;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < digit; j++)
        {
            if (count[i] == array1[j])
            {
                sum = sum + count[i];
                break;
            }
        }
    }
    printf("the sum of unique digits is %d", sum);
}