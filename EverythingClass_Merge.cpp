#include <iostream>
using namespace std;
class array
{
	int arr[100];
	public:	
	void traverse(int size);
	void insert(int i,int element);
	void merge(int size1,int size2,array list1, array list2);			
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
void array::merge(int size1,int size2, array list1, array list2)
{
	int n=0,i=0,j=0;
    while(i<size1 && j<size2)
    {
        if (list1.arr[i] < list2.arr[j])
        {
			arr[n] = list1.arr[i];
            i++;
        }
        else
        {
            arr[n] = list2.arr[j];
            j++;
		}
		n++;
    }
    while(i<size1)
        {
			arr[n] = list1.arr[i];
			i++;n++;
		}
    while(j<size2)
        {
			arr[n] = list2.arr[j];
			j++;n++;
		}
}	
int main()
{
	int size1,size2,size,element;
	array list1,list2,mergelist;
	cout<<"Enter the size of array1: ";
	cin>>size1;
	cout<<"Enter the size of array2: ";
	cin>>size2;
	cout<<"Enter the elements in array1\n";
	for(int i=0;i<size1;i++)
	{
		cout<<"Enter the element";
		cin>>element;
		list1.insert(i,element);
	}
	cout<<"Enter the elements in array2\n";
	for(int i=0;i<size2;i++)
	{
		cout<<"Enter the element";
		cin>>element;
		list2.insert(i,element);
	}
	cout<<"Array1 is\n";
	list1.traverse(size1);
	cout<<"Array2 is\n";
	list2.traverse(size2);
	cout<<"Now merging arrays\n";
	mergelist.merge(size1,size2,list1,list2);
	size=size1+size2;
	mergelist.traverse(size);
	return 0;	
}
