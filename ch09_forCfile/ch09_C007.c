/*    */
#include <stdio.h>
main()
{
	FILE *fp;
	char str[50];
	int i;
	fp = fopen("temp.txt","r");
	//每次讀取N個字 
	while(fgets(str,50,fp) != NULL) //中文2byte
	{
		printf("%s\n",str); //顯示讀取的字串 
	} 
	    
	system("pause");    
	fclose(fp);
}
