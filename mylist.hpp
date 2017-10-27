#ifndef MYLIST
#define MYLIST
#include "geom.hpp"

struct node{
    geom_body* data;
    node* next;
};
class mylist{
public:
    mylist();
    void push_back(geom_body&);
    void show_all();
    virtual ~mylist();
protected:
    node* head;

};
class speclist : public mylist {
public:
    speclist ();
    void push_after (geom_body&,size_t);
    ~speclist();
};

#endif // MYLIST

