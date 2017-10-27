#ifndef GEOM
#define GEOM
#include <iostream>
class geom_body{
public:
    geom_body ();
    virtual double volume () =0;
    virtual void data () =0;
    virtual ~geom_body () =0;
};

class cylinder : public geom_body{
public:
    cylinder(double rr=0,double hh=0);
    cylinder (const cylinder&);
    double volume ();
    void new_data (double, double);
    void data ();
    ~cylinder ();
private:
    double r, h;
};
//Rectangular parrallelepiped
class R_P :public geom_body{
public:
    R_P(double aa=0,double bb=0, double cc=0);
    R_P (const R_P &);
    double volume();
    void new_data(double,double,double);
    void data();
    ~R_P();
private:
    double a,b,h;
};

//Cube
class cube: public geom_body{
public:
    cube(double a=0);
    cube (const cube&);
    double volume();
    void new_data(double);
    void data();
    ~cube();
private:
    double a;
};
//regular quadrangular pyramid
class pyramid: public geom_body{
public:
    pyramid(double=0, double=0);
    pyramid(const pyramid&);
    double volume();
    void new_data(double, double);
    void data();
    ~pyramid();
private:
    double a,h;
};

#endif // GEOM

