#include <stdio.h>
#include <string.h>

int main(void)
{
	char usr_input[2048] = "";

	puts("Password: ");
	gets(usr_input);

	puts( (   strlen(usr_input) == 16
	       && usr_input[0]  == '3'
               && usr_input[1]  == '2'
               && usr_input[2]  == '3'
               && usr_input[3]  == '4'
               && usr_input[4]  == 'A'
               && usr_input[5]  == 'A'
               && usr_input[6]  == 'd'
               && usr_input[7]  == 'f'
               && usr_input[8]  == '2'
               && usr_input[9]  == '3'
               && usr_input[10] == 'j'
               && usr_input[11] == 'i'
               && usr_input[12] == 'u'
               && usr_input[13] == 's'
               && usr_input[14] == 'd'
               && usr_input[15] == 'l') ?
	       		"Great Job!\n" :
			"Wrong password! You'll get it!\n"
	);

	return 0;
}