#include <stdio.h>
#include <string.h>

//check for uppercase letters
int hasUpper(char pwd[])
{
    int i;
    for (i = 0; pwd[i] != '\0'; i++)
    {
        if (pwd[i] >= 'A' && pwd[i] <= 'Z')
            return 1;
    }
    return 0;
}

//check for lowercase letters
int hasLower(char pwd[])
{
    int i;
    for (i = 0; pwd[i] != '\0'; i++)
    {
        if (pwd[i] >= 'a' && pwd[i] <= 'z')
            return 1;
    }
    return 0;
}

//check for digits
int hasDigit(char pwd[])
{
    int i;
    for (i = 0; pwd[i] != '\0'; i++)
    {
        if (pwd[i] >= '0' && pwd[i] <= '9')
            return 1;
    }
    return 0;
}

//check for special characters
int hasSpecial(char pwd[])
{
    int i, j;
    char special[] = "!@#$%^&*()_+=-{}[]:;<>,.?/"; //list of special chars

    for (i = 0; pwd[i] != '\0'; i++)
    {
        for (j = 0; special[j] != '\0'; j++)
        {
            if (pwd[i] == special[j])
                return 1;
        }
    }
    return 0;
}

int main()
{
    char pwd[50];
    int score, choice;

    do
    {
        score = 0;

        printf("enter password: ");
        scanf("%s", pwd);

        printf("\nchecking password...\n");

        //check length
        if (strlen(pwd) >= 8)
        {
            printf("good length\n");
            score++;
        }
        else
        {
            printf("too short (minimum 8 characters needed)\n");
        }

        //check uppercase
        if (hasUpper(pwd))
        {
            printf("contains uppercase letter\n");
            score++;
        }
        else
        {
            printf("no uppercase letter found\n");
        }

        //check lowercase
        if (hasLower(pwd))
        {
            printf("contains lowercase letter\n");
            score++;
        }
        else
        {
            printf("no lowercase letter found\n");
        }

        //check digits
        if (hasDigit(pwd))
        {
            printf("contains digit\n");
            score++;
        }
        else
        {
            printf("no digit found\n");
        }

        //check special character
        if (hasSpecial(pwd))
        {
            printf("contains special character\n");
            score++;
        }
        else
        {
            printf("no special character found\n");
        }

        //final score message
        printf("\npassword strength score: %d / 5\n", score);

        if (score == 5)
            printf("strong password\n");
        else if (score >= 3)
            printf("medium password\n");
        else
            printf("weak password\n");

        printf("\ntry another password? (1 = yes, 0 = no): ");
        scanf("%d", &choice);

    } while (choice == 1); //repeat if user enters 1

    printf("\nprogram ended\n");
    return 0;
    
}
