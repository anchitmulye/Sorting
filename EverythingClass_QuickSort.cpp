#include <iostream>
using namespace std;
class array
{
	int arr[100];
	public:	
	void traverse(int size);
	void insert(int i,int element);	
	void quick_sort( int low,int high);
	int part(int *list, int low,int high);
};
void array::insert(int i,int element)
{
	arr[i]=element;	
}
void array::traverse(int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
void array::quick_sort(int low,int high)
{
	int pivot;
	if(high>low)
	{
		pivot=part(arr,low,high);
		quick_sort(low,pivot-1);
		quick_sort(pivot+1,high);
	}
}
int array::part(int *list,int low,int high)
{
	int left,right,pivot_item=list[low];
	left=low;
	right=high;
	while(left<right)
	{
		while(list[left]<=pivot_item)
			left++;
		while(list[right]>pivot_item)
			right--;
		if(left<right)
		{
			int temp;
			temp=list[left];
			list[left]=list[right];
			list[right]=temp;
		}
	}
	list[low]=list[right];
	list[right]=pivot_item;
	return right;
}
int main()
{
	int element,size;
	array list;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"Enter the elements in array\n";
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the element";
		cin>>element;
		list.insert(i,element);
	}
	int low=0;
	int high=size-1;
	list.quick_sort(low,high);
	cout<<"The sorted array is\n";
	list.traverse(size);
	return 0;
}
