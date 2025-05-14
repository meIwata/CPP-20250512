#include <stdio.h> //for file io
#include <ctype.h> //for getche()
int main()
{
	FILE *fp; //宣告檔案指標 
	char ch;
	int count=0;
	//開啟檔案(讀取模式) 
	if((fp=fopen("test.txt","r")) == NULL)
	{
	  printf("open file error!!");
	  exit(1); //結朿程式 
	}
	//每次讀取一個字元 
    while((ch=fgetc(fp))!=EOF)
    {
		printf("%c",ch);	 
	}
 	fclose(fp);
	getche(); //讀取一個字元後，須按Enter(作暫停用) 
}
