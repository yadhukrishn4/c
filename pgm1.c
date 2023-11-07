#include<stdio.h>
#include<stdlib.h>
	int menu();
	int insert();
	int delete();
	int sort();
	int display();
	int search();	
int choice,j,i=0,a[50],b[10],s;
int  main()
{
	printf("\n enter the size of array:");
	scanf("%d",&s);
	printf("\n enter the elements of array:");
	for(i=0;i<s;i++)
	scanf("%d",&a[i]);
	menu();
	return 0;
}
int menu()
{
	printf("\n 1.insert");
	printf("\n 2.delete");
	printf("\n 3.sort");
	printf("\n 4.search");
	printf("\n 5.display");
	printf("\n 6.exit");
	printf("\n enter your choice:");
	scanf("%d",&choice);
switch(choice)
{
	case 1:insert();
		break;
	case 2:delete();
		break;
	case 3:sort();
		break;
	case 4:search();
		break;
	case 5:display();
		break;
	case 6:
	exit(1);
}
	return 0;
}
 int search()
{
	int ele,loc;
	printf("\n enter element to be searhed:");
	scanf("%d",&ele);
	printf("element found at:");
	for(i=0;i<s;i++)
{
	if(ele==a[i])
	printf("%d",i++);
}
	menu();
	return 0;
}
int  sort()
{
	printf("\n current array:");
	for(j=0;i<s;i++)
	printf("\t %d",a[i]);
	for(i=0;i<s;i++)
{
	for(j=i+1;j<s;j++)
	if(a[i]>a[j])
{
	a[i]=a[i]+a[j];
	a[j]=a[i]-a[j];
	a[i]=a[i]-a[j];
}
}
	printf("\n sorted array:");
	for(i=0;i<s;i++)
	printf("\t %d",a[i]);
	menu();
	return 0;
}
int insert()
{
int loc,ele;
	printf("enter the location:");
	scanf("%d",&loc);
	printf("enter the elements to be inserted:");
	scanf("%d",&ele);
	for(i=s;i>loc-1;i--)
	a[i]=a[i-1];
	a[loc-1]=ele;
	printf("element inserted");
	printf("\n new array after insertion:");
	s++;
	for(i=0;i<s;i++)
	printf("\t %d",a[i]);
	menu();
	return 0;

}
int  delete()
{
	int loc;
	printf("\n enter location:");
	scanf("%d",&loc);
	for(i=loc-1;i<s-1;i++)
	a[i]=a[i+1];
	printf("\n element deleted");
	printf("\n new array after deletion:");
	s--;
	for(i=0;i<s;i++)
	printf("\t %d",a[i]);
	menu();
	return 0;
}
int display()
{
int i,j;
	if(j==0)
{
	printf("\n array element are:");
	return 0;
}
	printf("no elements to be displayed");
	for(i=0;i<s;i++)
	printf("%d \t",a[i]);
	menu();
	return 0;
}





