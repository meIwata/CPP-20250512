#include <stdio.h> //for file io
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *fptr;
    char pw[10],keyin[10];
    //檔案路徑
    //fptr = fopen("d:\\ctest\\password.txt","r");
    //檔案在同一資料位置 
    fptr = fopen("password.txt","r");
    /*1.測試讀檔是否成功 */
    if(fptr == NULL)  
    {
        puts("密碼檔讀取失敗..."); 
        system("PAUSE");
        exit(0);
    }
    
	/*2.輸入字串比對密碼是正確*/
    printf("輸入密碼:");      
    scanf("%s",keyin);
    
    /*3. 從檔案讀取密碼字串*/
    if(fgets(pw,10,fptr)!=NULL)  
    {
        printf("密碼:%s",pw); 
        printf("密碼長度:%d\n",strlen(pw));
    }
    /*4.輸入字串比對密碼是正確*/
    if((strcmp(pw,keyin)==0)) 
    {
        printf("輸入密碼:%s正確!\n",keyin); 
    }
    else
    {
        printf("輸入密碼:%s錯誤!\n",keyin); 
    }
    fclose(fptr);
    system("PAUSE");
    return 0;
}
