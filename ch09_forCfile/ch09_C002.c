#include <stdio.h>
#include <stdlib.h>
main(int argc,char *args[]) //從命令列傳參數到 args[] 字串陣列 
//在console 執行 ch09_c002 temp.txt (enter)
{
	FILE *fp;
	char ch;
	//判斷命令列傳參數argc是否為2 
	if (argc!=2)
	{
	  puts("input error!!");
	  exit(1); 
	}
	printf("args[0]=%s\n",args[0]);
	printf("args[0]=%s\n",args[0]);
	//開啟檔案(讀取模式) 
	if((fp=fopen(args[1],"r")) == NULL) //回傳NULL代表開啟檔案失敗 
	{
	  printf("open file error!!");
	  exit(1);
	}
	//每次讀取一個字元
	while((ch=fgetc(fp))!=EOF)
	  printf("%c",ch);
	fclose(fp);
	system("pause");
}
