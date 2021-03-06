#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_MAX_SIZE 2048

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
        char usr_login[STRING_MAX_SIZE] = "";
        char usr_pswrd[STRING_MAX_SIZE] = "";

        printf("Login: ");
        gets(usr_login);

        printf("Password: ");
        gets(usr_pswrd);

        printf((!strcmp(getPassword(usr_login), usr_pswrd)) ?
                     "Great Job! :) \n" :
                     "Wrong password! Try! You'll get it!\n");

        return 0;
}
