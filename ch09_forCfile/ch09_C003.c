#include <stdio.h>
main(int argc,char *argv[])
{
	FILE *sourcefp,*targetfp;
	char ch;

	sourcefp = fopen("temp.txt","r");
	targetfp = fopen("out1.txt","w"); //建立寫入檔案或覆蓋已存在檔案 
	while ((ch = fgetc(sourcefp)) != EOF )
	{
		fputc(ch,targetfp); //每次寫入一個字元到檔案 
	}
		
	printf("file OK.\n");
	
    fclose(sourcefp);
	fclose(targetfp);
}
