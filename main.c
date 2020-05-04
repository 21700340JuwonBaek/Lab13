#include<stdio.h>
#include"miniproject.h"

int main(void){

int menu;

Restaurant *res[100];
int count = loadData(res);

while(1){
readMenu();
printf("메뉴를 선택해주세요!\n");
scanf("%d",&menu);

if(menu ==1) {addData(&res[count]); count++;}
else if(menu == 2) {listRes(res,count);}
else if(menu == 3) {updateData(res,count);}
else if(menu == 4) {count -= deleteData(res,count);}
else if(menu == 5) {sortName(res, count);}
else if(menu == 6) {sortPrice(res, count);}
else if(menu==7) {recommand(res, count);}
else if(menu == 8){SaveData(res,count);}
else if(menu == 9){count = loadData(res);}
else if( menu == 0) break;
else printf("다시입력해주세요!\n");
}


}
