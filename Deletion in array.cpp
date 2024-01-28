#include <iostream>
using namespace std;
int main() {
    int a[4]={3,4,7,2};
    cout<<" Elements of the array are : "<<endl;;
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    int key;
    cout<<"Enter the element ";
    cin>>key;
    for(int i=0;i<4;i++)
    {
        if(a[i]==key)
        {
            while(i!=4){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=a[i];
            i++;
            }
        }
    }
    cout<<"After Deletion:- "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
