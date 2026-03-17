#include<iostream>
#include<vector>
using namespace std;

vector<int> uniques(vector<int> &arr){
    int xor_all=0;
    vector<int> result(2,0);
    for(int i=0;i<arr.size();i++){
        xor_all^=arr[i];
    }
    int diff=xor_all & (-xor_all);
    for(int i=0;i<arr.size();i++){
        if((arr[i]&diff) !=0){
            result[0]^=arr[i];
        }
        else{
            result[1]^=arr[i];
        }
    }
    return result;
}

int main(){
    vector<int> arr={2,3,2,1,4,5,4,1};
    vector<int> res=uniques(arr);
    for(auto val:res){
        cout<<val<<endl;
    }
}