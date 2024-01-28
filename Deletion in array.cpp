#include <iostream>
using namespace std;
int main() {
    int a[4]={3,4,7,2};
    int key;
    cin>>key;
    for(int i=0;i<5;i++)
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
    for(int i=0;i<4-1;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}