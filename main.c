#include<stdio.h>
#include"miniproject.h"

int main(void){

int menu, count = 0;

Restaurant *res[100];

while(1){
readMenu();
printf("메뉴를 선택해주세요!\n");
scanf("%d",&menu);

if(menu ==1) {addData(&res[count]); count++;}
else if(menu == 2) {listRes(res,count);}
else if(menu == 3) {updateData(res,count);}
else if(menu == 4) {count -= deleteData(res,count);}
else if( menu == 0) break;
else printf("다시입력해주세요!\n");
}


}
