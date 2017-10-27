#include "mylist.hpp"
mylist::mylist(){
    head=NULL;
}
void mylist::push_back(geom_body & data){
    node* newnode = new node;
    newnode->data=&data;
    //Если добавляем первый элемент в список.
    if(head==NULL){
        head=newnode;
        head->next=0;
    }
    else{
        node* t=head;
        for(; t->next!=0; t=t->next);
        t->next=newnode;
        newnode->next=0;
        t=0;
        delete t;
    }
}
void mylist::show_all(){
    for(node* t=head; t!=0; t=t->next){
        t->data->data();
    }
}
mylist::~mylist(){
    node* t;
    for(t=head;t!=0;t=t->next){
        delete head;
        head=t->next;
    }
    delete t;
    std::cout<<"mylist deleted"<<std::endl;
}
speclist::speclist(){
    head=0;
}

void speclist::push_after(geom_body& new_gb,size_t n){
    size_t k=1;
    node* t;
    if(head==NULL){
        node* newnode =new node;
        newnode->data=&new_gb;
        head=newnode;
        head->next=0;
        newnode=0;
        delete newnode;
    }
    else{
        t=head;
        while(t!=0){
            if(k==n){
                node* newnode =new node;
                newnode->data=&new_gb;
                node* temp=t->next;
                t->next=newnode;
                newnode->next=temp;
                k=1;
                t=t->next->next;
            }
            else{
            t=t->next;
            ++k;
            }
        }
    }
    delete t;
}
speclist::~speclist(){
    std::cout<<"speclist deleting"<<std::endl;
}
