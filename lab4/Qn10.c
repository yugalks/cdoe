# include <stdio.h>
int main ()

{
int len=0,i,j;
char s[40],y[20];
printf("enter any string");
scanf("%s",s);
printf("enter any string");
scanf("%s",y);
for (i=0;s[i]!='\0';i++);
s[i++]=' ';
    for(j=0;y[j]!='\0';i++,j++)
    s[i]=y[j];

s[i]='\0';
printf("the concatenation is %s",s);
return 0;
}