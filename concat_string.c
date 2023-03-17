#include<stdio.h>
#include<conio.h>
 void main()
 {
 	
 	char s1[10];
 	char s2[20];
 	printf("\n enter the first string=");
 	scanf("%s",s1);
 	printf("\n enter the secound string=");
 	scanf("%s",s2);
 	strcat(s1,s2);
	 printf("\n concat sting is %s",s1);
	 
	 return 0;
	  	
 }
