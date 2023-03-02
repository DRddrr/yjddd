#include<stdio.h>
int main()
{
    int a, N, b;
    int count = 0;
    scanf_s("%d%d", &a, &N);
    while (1)
    {
        scanf_s("%d", &b);
        count++;
        if (b < 0)
            printf("Game Over");
        break;
        if (count > N)
        {

            printf("Game Over");
            break;
        }
        else {


            if (b > a)
                printf("Too big");

            else if (b < a)
                printf("Too small");
            else
            {
                if (count == 1)
                    printf("Bingo!");
                if (count > 1 && count <= 3)
                    printf("Lucky You!");
                if (count > 3 && count <= N)
                    printf("Good Guess!");


            }

        }

        return 0;
    }
}