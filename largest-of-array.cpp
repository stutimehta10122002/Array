#include <iostream>

using namespace std;

int main(){

    cout<<" Enter the no of elements"<<endl;
     int n;
     cin>>n;

     int a[n];
     for (int i=0;i<n;i++)
     {
        cin>>a[i];
     
    }
    int largest = INT_MIN;
    int minimum = INT_MAX;
    for (int i=0;i<n;i++){
        if (a[i]> largest)
            largest= a[i];

        if (a[i]< minimum)
             minimum = a[i];

          }
    cout<<"largest element is" <<largest<<endl;
    cout<<"smallest element is "<<minimum<<endl;


 return 0;
}