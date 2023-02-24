#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
	char letter = 'a';  // initialize the first letter
	        
	        // loop through the alphabet and print each letter
	while (letter <= 'z')
{
		putchar(letter);
		letter++;  // move to the next letter
}
                            
		putchar('\n');  // print a newline character at the end
	
	return 0;
}
