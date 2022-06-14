#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()  //Strcpy函数使用，把arr1的字符串拷贝到arr2里 
//{
//	char arr1[]="bit";
//	char arr2[20]="########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}





//int main() //memset内存设置函数
//{
//	char arr[]="hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}




//int get_max(int x, int y)
//{
//	//return (x>y)?(x):(y); 效果同下，x>y返回x，否则返回y 
//	if(x>y)
//	return x;
//	else
//	return y;
//}
//int main() //自定义函数，找出两个整数中的较大值 
//{
//	int a=10;
//	int b=20;
//	int max=get_max(a, b);
//	printf("%d\n", max);
//	max=get_max(100, 300);
//	printf("%d\n", max);
//	return 0;
//}




//传值调用函数：当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参的值修改是不会改变实参的 
//传址调用函数：函数内形参的操作可以改变主函数里的实参的值 
//void swap(int* x, int* y)  //void表示空，函数没有返回值，没有类型，利用指针，其实是在直接操作&a和&b,否则a和b并没有交换，只交换了x和y。 
//{
//	int tmp=0;
//	tmp=*x;
//	*x=*y;
//	*y=tmp;
//}
//int main() //利用函数交换a和b的值 
//{
//	int a=10;
//	int b=20;
//	printf("a=%d\nb=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}




//int is_prime(int n) //通过函数判断一个数是否是素数 
//{
//	int m=0;
//	for(m=2;m<=sqrt(n);m++)
//	{
//		if(n%m==0)
//		{
//			return 0;
//		}
//	}
//	if(m>sqrt(n))
//	return 1;
//}
//int main() //调用函数输出100-200之间所有的素数 
//{
//	int i=0;
//	int j=0;
//	for(i=100;i<=200;i++)
//	{
//		if(is_prime(i)==1)
//		{
//		    printf("%d\n", i);
//		    j++;
//	    }
//	}
//	printf("一共有%d个素数\n", j);
//	return 0;
//}




//int run(int n) 判断n是不是闰年的函数 
//{
//	if((n%4==0 && n%100!=0) || (n%400==0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main() 调用函数判断a是不是闰年 
//{
//	int a=0;
//	scanf("%d", &a);
//	if(run(a)==1)
//	printf("%d年是闰年", a);
//	else
//	printf("%d年不是闰年", a);
//	return 0;
//}




//int binary_search(int arr[], int k, int sz) //在数组中查一个数 
////sz必须在函数外就计算好，再传进函数里，传过来的数组其实只是首元素的地址 
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]<k)
//		{
//			left=mid+1;
//			continue;
//		}
//		else if(arr[mid]>k)
//		{
//			right=mid-1;
//			continue;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()  //调用函数在一个数组中查找一个数 
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr, k, sz); //传递到函数的时候，数组传过去的只是首元素的地址 
//	if(ret==-1)
//	{
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}






//void add(int* p) //每调用一次函数，num的值就+1 
//{
//	(*p)++;
//}
//int main()
//{
//	int num=0;
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}





int main()
{
	printf("%d", printf("%d", printf("%d", 43))); //每一次打印的返回值都是对应的字符个数，第一次打印43，有2个字符，第二次打印2有1个字符，第三次打印为1，输出结果为4321 
	return 0;
}







//一般函数要放在主函数前面，如果放在主函数后面，要在主函数前面先声明
//实际中是在项目的头文件创建一个.h格式文件，声明所有函数，源文件创建对应.c文件写函数，正式的主函数.c文件里只要#include ""就可以直接调用本项目相应的所有函数了 
int add(int x, int y)
int main()
{

}
int add(int x, int y)
{

}