#include <iostream>
using namespace std;
class array
{
	int arr[100];
	public:	
	void traverse(int size);
	void insert(int i,int element);	
	void insertion_sort( int size);
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
void array::insertion_sort(int size)
{
	int j,v;
	for(int i=1;i<size;i++)
	{
		v=arr[i];
		j=i;
		while(arr[j-1]>v&&j>=1)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=v;
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
	list.insertion_sort(size);
	cout<<"The sorted array is\n";
	list.traverse(size);
	return 0;
}
