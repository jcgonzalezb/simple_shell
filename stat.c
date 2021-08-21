#include "shell.h"

char *matchin(char **args)
{
	int i = 0;
	int j = 0;
	int a = 0;
	char *merge = NULL;
	char **dPath;

	while (args[i])
	{
		i++;
		printf("Tests ongoing2: %s\n", args[i]);
	}
	
	/*while (dividedPath[j])
	{
		j++;
		printf("Tests ongoing: %s\n", dividedPath[j]);
	}*/

	while(dPath[a])
	{
		if(dPath[a][0] == '\0')
			merge = getcwd(merge, 0);
		else
			merge = _strdup(dPath[a]);
		merge = _strcat(merge, "/");
		merge = _strcat(merge, args[0]);
		if (access(merge, F_OK) == 0)
		{
			return (merge);
		}
		free(merge);
		a++;
	}
	return (args[0]);
}
