#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()  //Strcpy����ʹ�ã���arr1���ַ���������arr2�� 
//{
//	char arr1[]="bit";
//	char arr2[20]="########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}





//int main() //memset�ڴ����ú���
//{
//	char arr[]="hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}




//int get_max(int x, int y)
//{
//	//return (x>y)?(x):(y); Ч��ͬ�£�x>y����x�����򷵻�y 
//	if(x>y)
//	return x;
//	else
//	return y;
//}
//int main() //�Զ��庯�����ҳ����������еĽϴ�ֵ 
//{
//	int a=10;
//	int b=20;
//	int max=get_max(a, b);
//	printf("%d\n", max);
//	max=get_max(100, 300);
//	printf("%d\n", max);
//	return 0;
//}




//��ֵ���ú�������ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ���������βε�ֵ�޸��ǲ���ı�ʵ�ε� 
//��ַ���ú������������βεĲ������Ըı����������ʵ�ε�ֵ 
//void swap(int* x, int* y)  //void��ʾ�գ�����û�з���ֵ��û�����ͣ�����ָ�룬��ʵ����ֱ�Ӳ���&a��&b,����a��b��û�н�����ֻ������x��y�� 
//{
//	int tmp=0;
//	tmp=*x;
//	*x=*y;
//	*y=tmp;
//}
//int main() //���ú�������a��b��ֵ 
//{
//	int a=10;
//	int b=20;
//	printf("a=%d\nb=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}




//int is_prime(int n) //ͨ�������ж�һ�����Ƿ������� 
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
//int main() //���ú������100-200֮�����е����� 
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
//	printf("һ����%d������\n", j);
//	return 0;
//}




//int run(int n) �ж�n�ǲ�������ĺ��� 
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
//int main() ���ú����ж�a�ǲ������� 
//{
//	int a=0;
//	scanf("%d", &a);
//	if(run(a)==1)
//	printf("%d��������", a);
//	else
//	printf("%d�겻������", a);
//	return 0;
//}




//int binary_search(int arr[], int k, int sz) //�������в�һ���� 
////sz�����ں�����ͼ���ã��ٴ����������������������ʵֻ����Ԫ�صĵ�ַ 
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
//int main()  //���ú�����һ�������в���һ���� 
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr, k, sz); //���ݵ�������ʱ�����鴫��ȥ��ֻ����Ԫ�صĵ�ַ 
//	if(ret==-1)
//	{
//		printf("�Ҳ���ָ��������");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}






//void add(int* p) //ÿ����һ�κ�����num��ֵ��+1 
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
	printf("%d", printf("%d", printf("%d", 43))); //ÿһ�δ�ӡ�ķ���ֵ���Ƕ�Ӧ���ַ���������һ�δ�ӡ43����2���ַ����ڶ��δ�ӡ2��1���ַ��������δ�ӡΪ1��������Ϊ4321 
	return 0;
}







//һ�㺯��Ҫ����������ǰ�棬����������������棬Ҫ��������ǰ��������
//ʵ����������Ŀ��ͷ�ļ�����һ��.h��ʽ�ļ����������к�����Դ�ļ�������Ӧ.c�ļ�д��������ʽ��������.c�ļ���ֻҪ#include ""�Ϳ���ֱ�ӵ��ñ���Ŀ��Ӧ�����к����� 
int add(int x, int y)
int main()
{

}
int add(int x, int y)
{

}