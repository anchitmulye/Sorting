#include <iostream>
using namespace std;
class array
{
	int arr[100];
	public:	
	void traverse(int size);
	void insert(int i,int element);	
	void selection_sort( int size);
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
void array::selection_sort(int size)
{
	for(int i=0;i<size-1;i++)
	{
		int min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
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
	list.selection_sort(size);
	cout<<"The sorted array is\n";
	list.traverse(size);
	return 0;
}
