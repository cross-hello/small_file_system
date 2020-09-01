#include"list.h"
#include<iostream>
void prin(int &o)
{
	printf("%d\t",o);
}
//template<class t>
//extern void list<t>::add(const t );
int main(void)
{
	list<int> hi;
	int i;
	for(i=0;i<10;i++)
		hi.add(i);
	hi.do_all(prin);
	for(i=0;i<10;i++)
		hi.add(i);
	hi.do_all(prin);
	i=12;
	int d;
	while(1)
	{
	scanf("%d",&d);
	int *test=hi.seek(&d);
	if(test!=NULL)
	printf("seek %d:  %d\n",d, *test);
	}
/*	for(i=0;i<10;i++)
	{
		hi.pop(i);
		putchar('\n');
		hi.do_all(prin);
		putchar('\n');
	}
*/
	int *hi_;
		//for(i=0;i<2000;i++)
		hi_=hi.pop(0);
		hi_=hi.pop(0);
		hi_=hi.pop(0);
//	hi.~list();

	putchar('\n');
	hi.add(i);
	printf("Hello, I am %d\n",*hi_);
	//hi.add('i');
	printf("The number of list is %d\n",hi.nums());
	hi.do_all(prin);
	putchar('\n');
	hi.~list();
	return 0;
}


	
