#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        int  c=0,maxc=0;
         for(int i=0; i<n;i++){
            if(arr[i]==0){
                c++;
                maxc<c? maxc=c:maxc=maxc;
            }
            else if(arr[i]==1){
                maxc<c? maxc=c:maxc=maxc;
                c=0;
            }          
        }
         cout<<maxc<<endl;
    }
    
    return 0;
}