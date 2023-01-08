#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[100];
    scanf("%[^\n]%*c", &s);

    char str[] = "Hello, World!";
    printf("%s\n%s", str, s);

    return 0;
}