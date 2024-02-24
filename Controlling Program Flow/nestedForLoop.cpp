#include<iostream>
#include<vector>
using namespace std;

int main(){

    // for(int outerVal=1; outerVal<=2;outerVal++){
    //     for(int innerVal=1;innerVal<=3;innerVal++){
    //         cout<<outerVal<<" "<<innerVal<<endl;
    //     }
    // }


    //  multiplication table 
    // cout<<endl;
    // cout<<"Multiplication table of 5 - "<<endl;
    // for(int num1=5;num1<=5;num1++){
    //     for(int num2=1;num2<=10;num2++){
    //         cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;;
    //     }
    // }

    // histogram 
    int numItems;
    cout<<"How many data items do you have ?"<<endl;
    cin>>numItems;
    vector<int> data;
    for(int i=0;i<=numItems;i++){
        int dataItem;
        cout<<"Enter data item "<<i<<" : ";
        cin>>dataItem;
        data.push_back(dataItem);
    }

    //  displaying histogram
    cout<<"\nDisplay histogram"<<endl;
    for(auto val:data){
        for(int i=1;i<=val;i++){
            if(i%5==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}