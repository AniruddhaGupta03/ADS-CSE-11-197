#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s=to_string(n);
    stack<char>st;
    for (auto x:s){
        st.push(x);
    }
    
    int temp=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]!=st.top()){
            temp=1;
            break;
        }
        st.pop();
    }
    if(temp==1){
        cout<<"No";
    }
    else
    cout<<"Yes";
    
	// your code goes here

}
