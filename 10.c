#include <stdio.h>
#include <stdlib.h>
	int is_whitespace(char c)
	{
		if(c==' '||
		c=='\t'||
		c=='\n'||
		c=='\r'||
		c=='(' ||
		c==')')
		return 1;
		
	return 0;
	}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE* fp;
	char name[100];
	char word[100];
	int c,cnt;

	
	//printf,scanf
	printf("input a file name: ");
	scanf("%s",name);
	
	//fopen
	fp=fopen(name,"r");
	
	
	
	//error fondling
	if (fp==NULL)
	{
		printf("error! check the file name:%s\n", name);
		return -1;
	}
	
	while((c=fgetc(fp)) != EOF)
	{
		if(is_whitespace(c)==0)//유의미한 문자이면 나감 
		{
			break;
		}
}
		if(c==EOF)//최초 읽은 문자가 마지막 일때 
		{
			return 0;
		}
		
		cnt=0;
		word[cnt++]=c;
		word[cnt]='\0';
		
		while ((word[cnt]=fgetc(fp)) != EOF)
		{
			if(is_whitespace(word[cnt])==1)
			{
				word[cnt]='\0';
				break;
			}
			
			cnt++;
		
		
		//본격적으로 단어를 한글자씩 읽음 
		//word processing
		printf("%s\n",word);//test code
	}
	//fclose
	fclose(fp);
	return 0;
}
