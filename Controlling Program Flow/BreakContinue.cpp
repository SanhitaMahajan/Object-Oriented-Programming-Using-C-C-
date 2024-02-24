#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(-1);
    values.push_back(3);
    values.push_back(-1);
    values.push_back(-99);
    values.push_back(7);
    values.push_back(8);
    values.push_back(10);
   
    for(auto val : values){
        if(val==-99){
            break;
        }
        else if(val==-1){
            continue;
        }
        else{
            cout<<val<<" "<<endl;
        }
    }

    return 0;
}
