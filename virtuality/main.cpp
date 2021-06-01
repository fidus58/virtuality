//
//  main.cpp
//  virtuality
//
//  Created by Klaus Ahrens on 31.05.21.
//

#include <iostream>

class A {
public:
    virtual void foo(){std::cout<<"A::foo()\n";}
};

class B : public A {
public:
    void foo() override {std::cout<<"B::foo()\n";}
};

class C : public B {
public:
    virtual void foo(int=0) {std::cout<<"C::foo(int)\n";}
};

class D : public B {
    
};

int main() {
    
    A a; B b; C c; D d;
    
    a.foo();
    b.foo();
    c.foo();
    c.foo(2);
    d.foo();

    A* pa = nullptr;
    
    pa = &a;
    pa->foo();
    pa = &b;
    pa->foo();
    pa = &c;
    pa->foo();


    pa = &d;
    pa->foo();
    
    return 0;
}
