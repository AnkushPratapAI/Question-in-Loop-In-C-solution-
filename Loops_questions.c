// C program to print all natural no 1 to n
#include <stdio.h>
int main()
{
    int a;
    while (a<4000000000000000000000000000)
    {
        a++;
        printf("%d\n", a);
    }

    return 0;
}

// C Program to all natural numbers in reverse
#include <stdio.h>
int main()
{
    int a = 40000000000000;
    while (a > 0)
    {
        a--;
        printf("%d\n",a);
    }
    return 0;
}

// C Program to all alphabet a to z
#include <stdio.h>

int main()
{
    char ch;
    char ch1 = 'z';

    printf("Alphabets from a - z are: \n");
    for(ch='a'; ch<=ch1; ch++)
    {
        printf("%c\n", ch);
    }

    return 0;

}

// C program 1 to 100 even numbers
#include <stdio.h>
int main()
{
    int a;
    for (a = 2; a < 101; a +=2)    //Replace a = 2 to a = 1 to 
                                   // to print odd no 1 to 100
    {
        printf("%d\n",a);
    }
        return 0;
}

