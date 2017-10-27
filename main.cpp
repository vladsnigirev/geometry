#include "geom.hpp"
#include "mylist.hpp"
int main()
{
    bool continue_=true;
    int f=1;
    speclist list;
    while (continue_){
    unsigned i;
    std::cout<<"Enter the number: 1)cylinder\n2)Rectangular parrallelepiped\n3)Cube\n4)Regular quadrangular pyramid"<<std::endl;
    std::cin>>i;
    switch(i){
    case (1):{
        double r,h;
        cylinder *a=new cylinder;
        std::cout<<"Enter radius and height"<<std::endl;
        std::cin>>r>>h;
        a->new_data(r,h);
        list.push_back(*a);
        break;
    }
    case 2:{
        double a1,b1,h1;
        R_P *b=new R_P;
        std::cout<<"Enter sides and height"<<std::endl;
        std::cin>>a1>>b1>>h1;
        b->new_data(a1,b1,h1);
        list.push_back(*b);
        break;
    }
    case 3:{
        double a2;
        cube* c=new cube;
        std::cout<<"Enter a side"<<std::endl;
        std::cin>>a2;
        c->new_data(a2);
        list.push_back(*c);
        break;
    }
    case 4:{
        double a3,h2;
        pyramid *p=new pyramid;
        std::cout<<"Enter side and height"<<std::endl;
        std::cin>>a3>>h2;
        p->new_data(a3,h2);
        list.push_back(*p);
        break;
    }
    default:
        break;
    }
    std::cout<<"Do u want to contirnue? 1 for yes, 2 for no"<<std::endl;
    std::cin>>f;
    switch (f) {
    case 2:
        continue_=false;
        break;
    default:
        break;
    }
    }
    list.show_all();
    std::cout<<std::endl;
    //Демонстрация доп. функции списка-наследника. Вставка после каждого n-го элемента копии нового элемента.
    cube cube(5);
    list.push_after(cube,2);
    list.show_all();
    return 0;
}

