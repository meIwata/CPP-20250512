#include <stdio.h>
main(int argc,char *argv[])
{
	FILE *sourcefp,*targetfp;
	char ch;

	sourcefp = fopen("temp.txt","r");
	targetfp = fopen("out1.txt","a"); //加至檔案未端 
	while ((ch = fgetc(sourcefp)) != EOF )
	{
		fputc(ch,targetfp);
	}
		
	printf("The argc is %d OK\n",argc);
	fclose(sourcefp);
	fclose(targetfp);
	system("pause");
}
