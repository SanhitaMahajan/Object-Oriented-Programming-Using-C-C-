#include<iostream>
#include <vector>
using namespace std;

int main(){

    // for(int i=1;i<=10;i++){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<endl;

    // for(int i=10;i>0;i--){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<endl;

    // for(int i=1,j=5;i<5;i++,++j){
    //     cout<<i<<" "<<j<<" "<<(i+j)<<endl;
    // }

    // cout<<endl;
    // cout<<endl;

    // for(int i=1;i<=100;i++){
    //     if(i%10==0){
    //          cout<<i;
    //     }
    //     else{
    //         cout<<" ";
    //     }
    // }

    for(int i=1;i<=100;i++){
        cout<<((i%10==0) ? to_string(i) : " " );
    }

    std::vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}