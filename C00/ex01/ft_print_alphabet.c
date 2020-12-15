#include <unistd.h>

void ft_print_alphabet.c(void){
	char a = 'a';
	while (a <= 'z'){
		write(1, &a, 1);
		++a;
	}
}

