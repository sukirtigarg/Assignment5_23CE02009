/*Lab Assignment 5
Question No.1
Name- Sukirti Garg
Roll No.- 23CE02009
Branch- Civil Engg.
Date- 9/2/24*/

#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    int array[4];
    printf("enter a 4 digit number");
    scanf("%d", &a);
    for (int i = 0; i < 4; i++)
    {
        array[i] = a % 10;
        a = a / 10;
    }
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (k == j)
                continue;
            for (int l = 0; l < 4; l++)
            {
                if ((l == k) || (l == j))
                    continue;
                for (int m = 0; m < 4; m++)
                {
                    if ((m == l) || (m == k) || (m == j))
                        continue;
                    printf("%d%d%d%d\n", array[j], array[k], array[l], array[m]);
                }
            }
        }
    }
}
//if we want repetition of digits that we have entered once the simply remove (all if conditions followed by continue) ex : if we enter 1234 and we also want to get 1111 or 2222 in the output ,then remove if and continue statements.