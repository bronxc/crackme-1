#include <stdio.h>
#include <string.h>

int main()
{
        char usr_input[2048] = "";

        puts("Password: ");
        gets(usr_input);

        puts(
                (!strcmp(usr_input, "drtgsfh232DDGHD13")) ?
                "Great Job!\n" :
                "Wrong password! You'll get it!\n"
        );

        return 0;
}