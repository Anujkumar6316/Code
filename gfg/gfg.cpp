#include <iostream>
using namespace std;

void _init_(){
    #ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

class Solution{
public:
void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int partition(int a[],int l,int h){
    int pivot=a[l];
    int i=l,j=h;
    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j)
            swap(&a[i],&a[j]);
    }while(i<j);
    swap(&a[l],&a[j]);
    return j;
}

void quicksort(int a[],int l,int h){
    if(l<h){
        int j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}
void kthSmallest(int arr[], int l, int r, int k) {
        //code here
        arr[r+1]=65535;
        quicksort(arr,l,r+1);
        cout<<arr[l+k-1]<<endl;
    }
};

int main(){
    _init_();
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        ob.kthSmallest(a, 0, number_of_elements-1, k);
    }
    return 0;
}