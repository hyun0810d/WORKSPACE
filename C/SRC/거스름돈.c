#include <stdio.h>
int main()
{
	int item=0;//물건값  
	int ip=0; //낸값  
	int op=0;
	int cash=50000;
	
	printf("물건의 가격을 설정해 주세요.\n물건 값: ");
	scanf("%d",&item);
	printf("\n얼마를 내셨나요?\n낸 값: ");
	scanf("%d",&ip);
	op=ip-item;
	if(ip<item)
	{
		return 0;
	}
	printf("거스름돈은 %d입니다.",op);
	
	
	printf("\n50000원권: %d",op/cash);
	op=op%cash;

	cash =10000;

	printf("\n10000원권: %d",op/cash);
	op=op%cash;

	cash =5000;
	printf("\n5000원권: %d",op/cash);
	op=op%cash;

	cash =1000;
	printf("\n1000원권: %d",op/cash);
		op=op%cash;

	cash =500;
	printf("\n500원권: %d",op/cash);
	op=op%cash;

	cash =100;
	printf("\n100원권: %d",op/cash);
		op=op%cash;

	cash =50;
	printf("\n50원권: %d",op/cash);
		op=op%cash;

	cash =10;
	printf("\n10원권: %d",op/cash);
		op=op%cash;

	cash =1;
	printf("\n1원권: %d",op/cash);
}
