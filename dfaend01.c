//Constuct a Dfa , set of all strings ending with 01 over alphabet {0,1}
#include <stdio.h>

#define max 50
main()
{
char str[max],state='a';
int i;
printf("enter the string to be checked: ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
switch(state)
{
case 'a': if(str[i]=='0') state='b';
else if(str[i]=='1') state='a';
break;
case 'b': if(str[i]=='0') state='b';
 else if(str[i]=='1') state='c';
break;
case 'c': if(str[i]=='0') state='b';
else if(str[i]=='1') state='a';
break;
 }
}
if(state=='c')
printf("\nString %s is accepted  .",str);
else
printf("\nString %s is not accepted .",str );
return 0;
}

