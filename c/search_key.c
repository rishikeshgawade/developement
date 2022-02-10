#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Function for removing Spaces from String 
char *strip(char token[100])
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
	int count=0,flag=0;
	char line[255],*token,*key_value[100];
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
		while (token != NULL)
		{
			key_value[count] = (char *)calloc(255, sizeof(char));
        		strcpy(key_value[count],strip(token));
        		count++;
        		token = strtok(NULL,"\n");
    		}
	}
	// Search Value for key
	for(int i=0;i<count;i=i+2)
	{
		if(strstr(key_value[i],key))
		{
			puts(key_value[i+1]);
			flag=1;
			break;
		}
	}
	for(int i=0;i<count;i++)
		free(key_value[i]);
	fclose(fp);
	return flag;
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
