#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_MAX_SIZE 2048

char *pswrd = "Danek123pro_MINOER_password341";

int hash(char *s)
{
        int h = 0;

        while (*s)
                h = h * 31 + *s++;

        return h;
}

char *getPassword(char *login)
{
        static char password[STRING_MAX_SIZE];

        sprintf(password, "%.8X", hash(login));

        return password;
}

int main(void)
{
        char usr_pswrd[STRING_MAX_SIZE] = "";

        printf("Enter Password: ");
        gets(usr_pswrd);

        printf((!strcmp(getPassword(pswrd), usr_pswrd)) ?
                     "Great Job! :) \n" :
                     "Wrong password! Try! You'll got it!\n");

        return 0;
}
