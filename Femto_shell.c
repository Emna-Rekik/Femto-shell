#include <stdio.h>
#include<string.h>
 
int main()
{
    char sentence[50];
    
    while(strcmp(sentence, "exit") != 0)
    {
    	printf("Type something: ");
    	scanf("%s", sentence);
    	printf("You said: %s \n", sentence);
    	printf("(Type \"exit\" to quit)\n\n");
    }
    
    printf("\nGood bye :)\n");
    
    return 0;
}
