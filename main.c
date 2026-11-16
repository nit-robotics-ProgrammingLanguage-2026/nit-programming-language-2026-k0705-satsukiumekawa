#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int x);

int main(void)
{
    int input_number;
    int answer;

    scanf("%d", &input_number);

    if (input_number > 9966990)
    {
        printf("NG");
        return 0;
    }

    answer = gcd(9966990, input_number);

    printf("%d", answer);

    return 0;
}

int gcd(int m, int x)
{
    int remainder;
    int first_number = m;
    int second_number = x;

    while (second_number != 0)
    {
        remainder = first_number % second_number;
        first_number = second_number;
        second_number = remainder;
    }

    return abs(first_number);
}
    
