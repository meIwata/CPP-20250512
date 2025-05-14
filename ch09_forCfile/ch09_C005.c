#include <stdio.h>
main()
{
	FILE *fp;
	int math,english;
	int sum_engl,sum_math;
	int count = 0;
	float math_ave,engl_ave;

	sum_engl = sum_math = 0;

	fp = fopen("SCORE.txt","r");
	printf("math english\n");
	//格式化讀取檔案內容 
	while(fscanf(fp,"%d %d",&math,&english) !=EOF)
	{
		printf("%d   %d\n",math,english); //顯示讀入的資料 
		sum_engl+= english; //計算加總 
		sum_math+= math;
		count++;
	}
	math_ave = (float) sum_math / count;  //計算平均 
	engl_ave = (float) sum_engl / count;
	//顯示資料
	printf("The average for english is %6.2f \n",engl_ave);
	printf("The average for math    is %6.2f \n",math_ave);
	fclose(fp);
	system("pause");
}
