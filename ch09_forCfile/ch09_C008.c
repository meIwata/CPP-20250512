#include <stdio.h>
main()
{
	FILE *fp; //宣告檔案指標
	int ch;
	int i=0;
	
	if ((fp=fopen("temp.txt","r"))== NULL)
	{
	   printf("open file error.\n");
	   exit(1);
	}
	for (i=1;i<=2;i++) //執行二次迴圈，檔案讀取二回 
	{
	   while ((ch=getc(fp)) !=EOF) //每次讀取一個字元
	   {
	   		printf("%c",ch);
	   }
	   printf("\n\n");
	   //rewind 將fp檔案指標指向檔案起始位置，再直接從頭讀取內容
       rewind(fp);
	}
	fclose(fp);
	system("pause");
}
