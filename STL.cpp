/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>v ;   //vectors are dynamic arrays and there is no need to define the size of the vectors
    v.push_back(12);  
    v.push_back(13);
    v.push_back(23);
    cout<<v.empty()<<endl;
    
    for(int i=0;i<3;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
/*===========================OUTPUT=====================*/