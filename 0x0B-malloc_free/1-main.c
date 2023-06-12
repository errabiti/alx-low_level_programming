#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	int i;
	int j;
	int k;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
		p = (char *)malloc(i * sizeof(char));
		k = 0;
		for (j = 0; j < i; j++)
		{
			p[k] = str[j];
			k++;
		}
		return (p);
	}
}
/**
 *  * main - check the code for ALX School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char *s;

	        s = _strdup("ALX SE");
		    if (s == NULL)
			        {
					        printf("failed to allocate memory\n");
						        return (1);
							    }
		        printf("%s\n", s);
			    free(s);
			        return (0);
}
