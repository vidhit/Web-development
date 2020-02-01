#include<iostream>
using namespace std;

int *apply_all(const int array1[],size_t size1,const int array2[],size_t size2)
{
    int * array12=new int[size1*size2];
    int k{0};
    for(int i=0;i<size2;i++)
    {
        for(int j=0;j<size1;j++)
        {
            *(array12 + k)=array2[i]*array1[j];
              k++;
        }
    }
    return array12;
}

void print(const int arr[],size_t size)
{
    cout<<"[";
    for(int h=0;h<size;++h)
        cout<<arr[h]<< " ";
    cout<<"]";
    cout<<endl;
}

int main()
{
    const size_t array1_size{5};
    const size_t array2_size{3};
    
    int array1[]={1,2,3,4,5};
    int array2[]={10,20,30};
    
    cout<<"Array1 : ";
    print(array1,array1_size);
    cout<<"Array2 : ";
    print(array2,array2_size);
    int*results=apply_all(array1,array1_size,array2,array2_size);
    constexpr size_t result_size{array1_size*array2_size};
    
    cout<<"Result : ";
    print(results,result_size);
    
    delete []results;//Always deallocate heap space after using it.Good coding practice
    cout<<endl;
    return 0;
}