#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Function for removing Spaces from String 
char *strip(char *token)
{
	for(int i=0;i<strlen(token);i++)
	{
		if(token[i]==' ')
		{	
			int k=i;
			while(token[k]!='\0')
			{
				token[k]=token[k+1];
				k++;
			}
		}
	}
	return token;
}
// search key
int get_value_from_key(char *key)
{
	char line[255],*token;
	FILE *fp=fopen("/tmp/NBAnswerFile.conf","r");
	if(fp==NULL)
	{
		printf("File not found\n");
		exit(0);
	}
	while(!feof(fp))
	{
		fgets(line,255,fp);
		if(feof(fp))
			break;
		if(strstr(line,"="))
			token=strtok(line,"=");
		if(strstr(strip(token),strip(key)))
		{
			puts(token=strtok(NULL,"\n"));
			fclose(fp);	
			return 1;
		}
	}
	fclose(fp);
	return 0;
}
int main()
{
	char key[100];
	// Accept Key to Search from user
	printf("Enter the key to see its value:");
	scanf("%s",key);
	strcpy(key,strip(key));
	if(!get_value_from_key(key))
		printf("\nWARNING:Key Not Exists\n");
	return 0;
}
