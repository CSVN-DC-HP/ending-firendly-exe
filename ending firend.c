#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
char b[10]="iamdog",c[10]="youdog",a[10];
system("shutdown -s -t 60");
do{ 
printf("neu khong muon bi bay acc,moi (ko dau cach) enter iamdog or youdog chi 1 phut thoi\n");
scanf("%s",&a);
if(strcmp(a,b)==0){ 
system("shutdown -a");
system("cls");
printf("hhhh,okok\n");
system("pause");
}
if(strcmp(a,c)==0){
system("pause");
printf("me may lao that\n");
system("shutdown -a");
system("shutdown -s -t 5");
printf("bay acc nha,bye bye\n");
system("pause");
}
}while(strcmp(a,b)!=0&&strcmp(a,c)!=0);
return 0;
}
