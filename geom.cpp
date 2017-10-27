#include "geom.hpp"
#include <math.h>
//cylinder
cylinder::cylinder(double rr, double hh)
    :r(rr),
    h(hh)
{}
geom_body::geom_body(){}
geom_body::~geom_body() {std::cout<<"deleted"<<std::endl;}
void cylinder::data(){
    std::cout<<"Radius="<<r<<std::endl;
    std::cout<<"Height="<<h<<std::endl;
    std::cout<<"Volume of cylinder="<<this->volume()<<std::endl;
}

double cylinder::volume(){
    return M_PI*this->r*this->r*this->h;
}
void cylinder::new_data(double new_r, double new_h){
    this->h=new_h;
    this->r=new_r;
}

cylinder::~cylinder(){
    std::cout<<"cylinder destr"<<std::endl;
    this->r=0;
    this->h=0;
}
cylinder::cylinder(const cylinder& other)
    :r(other.r),
     h(other.h)
{}

//rectangular parallelepiped
R_P::R_P(double aa,double bb, double cc)
    :a(aa),
     b(bb),
     h(cc)
{}
void R_P::data(){
    std::cout<<"1st side="<<a<<std::endl;
    std::cout<<"2nd side="<<b<<std::endl;
    std::cout<<"Height="<<h<<std::endl;
    std::cout<<"Volume of parrallelepiped="<<this->volume()<<std::endl;
}
void R_P::new_data(double aa, double bb, double hh){
    this->a=aa;
    this->b=bb;
    this->h=hh;
}
double R_P::volume(){
    return this->a*this->b*this->h;
}

R_P::R_P(const R_P & other)
    :a(other.a),
     b(other.b),
     h(other.h)
{}
R_P::~R_P(){
    this->a=0;
    this->b=0;
    this->h=0;
    std::cout<<"parrallelepiped destr"<<std::endl;
}
//Cube
cube::cube(double aa)
    :a(aa)
{}
cube::cube(const cube & other)
    :a(other.a)
{}
double cube::volume(){
    return this->a*this->a*this->a;
}
void cube::new_data(double aa){
    this->a=aa;
}
void cube::data(){
    std::cout<<"side of cube="<<a<<std::endl;
    std::cout<<"volume of cube="<<this->volume()<<std::endl;
}
cube::~cube(){
    this->a=0;
    std::cout<<"cube destr"<<std::endl;
}
//regular quadrangular pyramid
pyramid::pyramid(double aa, double hh)
    :a(aa),
     h(hh)
{}
pyramid::pyramid(const pyramid & other)
    :a(other.a),
     h(other.h)
{}
double pyramid::volume(){
    return (this->a*this->a*this->h*1/3);
}
void pyramid::new_data(double aa, double hh){
    this->a=aa;
    this->h=hh;
}
void pyramid::data(){
    std::cout<<"side of pyramid base="<<this->a<<std::endl;
    std::cout<<"height="<<this->h<<std::endl;
    std::cout<<"volume of pyramid="<<this->volume()<<std::endl;
}
pyramid::~pyramid(){
    this->a=0;
    this->h=0;
    std::cout<<"pyramid destr"<<std::endl;
}

