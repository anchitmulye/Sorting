#include <iostream>
using namespace std;
class heap
{
	int arr[100];
	public:
	void traverse(int size);
	void insert(int i,int element);
	void heapify(int size);
	void heap_sort(int size);	
};
void heap::insert(int i,int element)
{
	arr[i]=element;	
}
void heap::traverse(int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
void heap::heapify(int size)
{
	for (int i=1; i<size; i++)
	{
		int val = arr[i] ;
		int child = i ;
		int parent=(child-1)/2;
		while (child>0 && arr[parent]<val)
		{
			arr[child]=arr[parent];
			child=parent ;
			parent= (child-1)/2;
		}
		arr[child] = val ;
	}	
}
void heap::heap_sort(int size)
{
	for (int i=size-1; i>0; i--)
	{
		int value = arr[i] ;
		arr[i] = arr[0] ;
		arr[0]=value;
		heapify(i);
	}
}
int main()
{
	int element,size;
	heap list;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"Enter the elements in array\n";
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the element";
		cin>>element;
		list.insert(i,element);
	}
	list.heapify(size);
	list.heap_sort(size);
	list.traverse(size);
	return 0;
}
