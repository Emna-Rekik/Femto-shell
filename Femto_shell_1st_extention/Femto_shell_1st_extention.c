#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>
#include <mymath.h> //personal library

const char* tolowerstring (char str[])
{
	for(int i = 0; i < strlen(str); i++)
    	{
    		str[i] = tolower(str[i]);
    	}
    	return str;
}
 
int main()
{
    char sentence[50];
    int number;
    
    while(strcmp(sentence, "exit") != 0)
    {
    	printf("Type something: ");
    	scanf("%s", sentence);
    	char temp[50];
	strcpy(temp, sentence);
	// lower_str is the same content of sentence but in lower case
	const char* lower_str = tolowerstring(temp);
    	if(strcmp(lower_str, "rand") == 0 || strcmp(lower_str, "random") == 0)
    	{
    		printf("%d\n", myrandom());
    	}
    	else if(strcmp(lower_str, "fact") == 0 || strcmp(lower_str, "factorial") == 0)
    	{
    		printf("Enter a number: ");
    		scanf("%d", &number);
    		printf("Result is: %d \n", factorial(number));
    	}
    	else if(strcmp(lower_str, "fib") == 0 || strcmp(lower_str, "fibonacci") == 0)
    	{
    		printf("Enter a number: ");
    		scanf("%d", &number);
    		printf("\nThe sequence is:  ");
    		int *fib = fibonacci(number);
    		for (int i = 0; i <= number; i++)
		{
			printf("%d ", fib[i]);
		}
		free(fib);
    		printf("\n");
    	}
    	else
    	{
    		printf("You said: %s \n", sentence);
    	}
    	printf("(Type \"exit\" to quit)\n\n");
    }
    
    printf("\nGood bye :)\n");
    
    return 0;
}
