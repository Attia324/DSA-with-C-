#include <iostream>
#include <string>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next = NULL;

    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){

        head=tail=NULL;
    }
    void  push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
        newNode->next=head;//link
        head=newNode;//updation of head pointer
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            tail->next=newNode;
            tail=newNode;
            
        }
    }
    void pop_front(){
        if(head==NULL){
            cout << "LL is empty\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void  pop_back(){
        if(head==NULL){
            cout << "LL is empty\n";
            return;
        }
        Node* temp= head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;

    }

    void insert(int val,int pos){
        if(pos<0){
            cout << "Invalid index!\n";
            return ;
        }
        if(pos==0){
            push_front(val);
            return;
        }
        Node* temp=head;
        for(int i=0 ; i<pos-1 ; i++){
            if(temp==NULL){
                cout <<"Invalid position\n";
                return ;
            }
            temp=temp->next;

        }
        Node* newNode =new Node(val);
        newNode->next=temp->next;
        temp->next= newNode;
    }
    int search(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;

        }
        return -1;
    }
    void printll(){
        Node* temp=head;
        while(temp!=NULL){
            cout <<temp->data <<" ";
            temp=temp->next;

        }
        cout << endl;
    }

};
int main(){
        List ll1;
        ll1.push_front(1);
        ll1.push_front(2);
        ll1.push_front(3);
        ll1.printll();
        ll1.push_back(4);
        ll1.printll();
        ll1.pop_front();
        ll1.printll();
        ll1.pop_back();
        ll1.printll();
        ll1.insert(4,1);
        ll1.printll();
        cout << ll1.search(2) <<endl;



}
 