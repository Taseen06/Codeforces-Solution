#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr1[100],arr2[100];
    cin>>n;
    
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1 + n2];

        for (int i = 0; i < n1; i++)
        arr3[i] = arr1[i];   
        for (int i = 0; i < n2; i++)
        arr3[n1 + i] = arr2[i];

       
        sort(arr3, arr3 + n1+n2); 
    for (int i = 0; i < n; i++) {    
        for (int j = 1; j < n; j++) {
            if (arr3[j] == arr3[j - 1]) {
                arr3[j-1] = arr3[j];
            }
        }
    }

        int m=sizeof(arr3) / sizeof(arr3[0]);
       
        if(m==n)cout<< "I become the guy.";
        else cout<< "Oh, my keyboard!";
    
    
    
   
    return 0;
}