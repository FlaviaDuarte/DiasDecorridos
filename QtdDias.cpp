#include <stdio.h>
#include <stdlib.h>

main(){
	int dd,d,m,a;
	
	printf("Qual o ano atual? ");
	scanf("%d",&a);
	printf("Qual o mes atual? ");
	scanf("%d",&m);
	printf("Qual o dia atual? ");
	scanf("%d",&d);
	
	dd=d;
	m=m-1;
	switch(m){
case 11: dd= dd+30;
case 10: dd= dd+31;
case 9: dd= dd+30;
case 8: dd= dd+31;
case 7: dd= dd+31;
case 6: dd= dd+30;
case 5: dd= dd+31;
case 4: dd= dd+30;
case 3: dd= dd+31;
case 2: 
	if (((a%4==0)&(a%100!=0))|(a%400==0))
	{
		dd=dd+29;
	}
	else{
		dd=dd+28;
	}
case 01: dd= dd+31;
	}
	printf("O total de dias decorridos neste ano=%d\n", dd);
	system("pause");
	
}
