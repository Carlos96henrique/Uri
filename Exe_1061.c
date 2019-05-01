#include <stdio.h>
int main(){
	int d1,h1,m1,s1,d2,h2,m2,s2,st1,st2,stf;
	char dia1[3],dia2[3],krct;
	
	
	
	scanf("%s %d",&dia1,&d1);
	scanf("%d %s %d %s %d",&h1,&krct,&m1,&krct,&s1);
	scanf("%s %d",&dia2,&d2);
	scanf("%d %s %d %s %d",&h2,&krct,&m2,&krct,&s2);
	
	st1=(s1+m1*60+h1*60*60+d1*60*60*24);
	st2=(s2+m2*60+h2*60*60+d2*60*60*24);
	
	stf=(st2-st1);
	
	printf("%d dia(s)\n",stf/(60*60*24));
	stf=stf%(60*60*24);
    printf("%d hora(s)\n",stf/(60*60));
    stf=stf%(60*60);
    printf("%d minuto(s)\n",stf/(60));
    stf=stf%(60);
    printf("%d segundo(s)\n",stf);
	
	return 0;
}


