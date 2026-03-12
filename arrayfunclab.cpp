#include<iostream>
using namespace std;
int findmax(int arr[],int &n);
void searchx(int arr[],int n);
void choose(int &n, int arr[]);
int main(){
int choice;
cout<<"What do you want to do?   \n1) find max \n 2) search x ";
cin>>choice;
int x,z,y,k;
int n;
int arr[100]={};
switch(choice){
case 1:
choose(n,arr);
cout<<"your array looks like {";
for(int i=0;i<n;i++){
cout<<arr[i];

}
cout<<" }"<<endl;
k=findmax(arr,n);
cout<<"the maximum number in your array is :"<<k;
break;
case 2:
    choose(n,arr);
searchx(arr,x);
break;
}
return 0;
}
int findmax(int arr[],int &n){
int maxi=arr[0];
for(int i=0;i<n;i++){
if(arr[i]>maxi)
maxi=arr[i];
cout<<maxi;
}
return maxi;
}
void searchx(int arr[],int n){
    int x;
cout<<"Enter the element you want to search� for:";
cin>>x;
bool found=false;
for(int i=0;i<x;i++){
if(arr[i]==x){
    cout<<"the  index of "<<x<<" is "<<i<<endl;
    found=true;
}
}
if(!found){
cout<<x<<" doest found in the array";
}
}
void choose(int &n,int arr[]){
cout<<"Enter n:";
cin>>n;
cout<<"Enter "<<n<<"elements:";
for(int i=0;i<n;i++){
cin>>arr[i];
}
}
