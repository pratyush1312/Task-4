#include <stdio.h>
main()
{
    char FirstName[100], LastName[100], i, j;

    printf("Enter FirstName : ");
    scanf("%s", FirstName);

    printf("Enter LastName: ");
    scanf("%s", LastName);

    for(i = 0; FirstName[i] != '\0'; ++i);

    for(j = 0; LastName[j] != '\0'; ++j, ++i)
    {
        FirstName[i] = LastName[j];
    }

    FirstName[i] = '\0';
    printf("\Hi Your full name is: %s", FirstName);

    return 0;
}
