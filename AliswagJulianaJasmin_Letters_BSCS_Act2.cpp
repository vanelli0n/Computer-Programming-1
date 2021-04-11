// Letter Checker
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// October 28, 2020

#include <stdio.h>
#include <ctype.h>

using namespace std;

int checkVowel(char c)
{
	char lowerCaseC = tolower(c);
	
	if (lowerCaseC == 'a' ||
		lowerCaseC == 'e' ||
		lowerCaseC == 'i' ||
		lowerCaseC == 'o' ||
		lowerCaseC == 'u')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char word[200];
	int index = 0;

		printf("\n\n***************************************************");
		printf("\n\n*                                                 *");
		printf("\n\n*   Hello! Welcome to Aliswag's Letter Checker!   *");
		printf("\n\n*                                                 *");		
		printf("\n\n***************************************************");
	
			printf("\n\nPlease Enter a Word: ");
			scanf("%s", word);
	
			while(word[index] != '\0')
			{
				if (checkVowel(word[index]))
				{
					printf("\n%c is a Vowel Letter\n", word[index]);
				}
				else
				{
					printf("\n%c is a Consonant Letter\n", word[index]);
				}
				index++;
			}

	printf("\nThank You for Trusting Aliswag's Services!\n");
           
	return 0;
	
}
