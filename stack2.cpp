#include <iostream>
using namespace std;
class node{
    public:
    int info;
    node *next;
    node(int data){
        info=data;
        next=nullptr;
    }
};
void push(node* &top,int data){
    node *temp=new node(data);
    temp->next=top;
    top=temp;
}
void pop(node* &top){
    if (top==nullptr){
        cout<<"Stack Underflow!"<<endl;
    }
    else{
        node *temp=top;
        top=top->next;
        cout<<"Popped element: "<<temp->info<<endl;
        delete temp;
    }
}
void peek(node* &top){
    if(top==nullptr){
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<top->info<<endl;
    }
}
void display(node* &top){
    if(top==nullptr){
        cout<<"Stack is empty."<<endl;
    }
    else{
        node *temp=top;
        cout<<"Stack elements are:"<<endl;
        while(temp!=nullptr){
            cout<<temp->info<<endl;
            temp=temp->next;
        }
    }
}
int main() {    
  node *top =nullptr;
  push(top,20);
  push(top,30);
  peek(top);
  display(top);
  pop(top);
  display(top);

  return 0;
}