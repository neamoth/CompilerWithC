#include <stdio.h>

void main()
{

    int i = 2, j = 0;
    char user[1000];
    printf("Enter a Line: ");
    gets(user);

    // Checking the 1st index is (-) or not
    if(user[0] == '-')
    {
        /* The condition if single comment is -- so checking if there
        + in the index 2.
        */
        if(user[1] == '-' && user[1+1] != '+')
        {
            printf("\nThis is a single comment");
        }
        else if(user[1] == '-' && user[1+1] == '+')
        {
            // Running a loop for check the last 3 index for --+ this pattern
            for(i=2; i<=1000; i++)
            {
                if(user[i] == '+' && user[i+1] == '-' && user[i+2] == '-')
                {
                    printf("\nThis is a multi-line comment");
                    j=1;
                    break;
                }
                else
                {
                    continue;
                }
                if(j ==0)
                {
                    printf("\nThis is not a comment");
                }

            }
        }
        else
        {
            printf("\nThis is not a comment");
        }

    }
    else
    {
        printf("\nThis is not a comment");
    }
    getch();
}
