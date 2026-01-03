#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20], str3[20];

    printf("Enter first string: ");
    scanf("%s", str1);
printf("Enter second string: ");
    scanf("%s", str2);
    printf("Length of first string = %lu\n", strlen(str1));

    strcpy(str3, str1);
     printf("Copy string = %s\n", str3);

    strcat(str1, str2);
    printf("Concatenated string = %s\n", str1);

    if (strcmp(str2, str3) == 0)
        printf("Strings are same");
    else
        printf("Strings are different");

    return 0;
}