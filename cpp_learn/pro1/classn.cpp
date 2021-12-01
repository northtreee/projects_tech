//
// Created by A_Xiao on 2021/11/25.
//
#include <iostream>
#include <vector>

/// 类的定义和使用 //
class Box{
public:
    double length;
    double height;
    double breadth;
    double get(void);
    void set(int h, int l, int b);
};

double Box::get(void)
{
    return length*height*breadth;

}

void Box::set(int h, int l, int b){
    height = h;
    length = l;
    breadth = b;
}
class compute{
public:
    int addp(int a, int b);
};

int addp(int a, int b){
    return a+b;
}

/// 类的的继承
class Shape{
public:
    void set(double w, double h){
        weight = w;
        height = h;
    }
protected:
    double height;
    double weight;
private:
    /// private定义的变量不可以被继承类使用
    double namep;
};
class Rectangle: public Shape{
public:
    double getRale(){
        return (height * weight);
    }
};

/// 多类继承
class computes{
public:
    int plus(int a, int b){
        return (a + b);
    }

    int sub(int a, int b){
        return (a - b);
    }
};

class Getnum{
public:
    int getnuma(){
        return na;
    }
    int getnumb(){
        return nb;
    }
    void set(int a, int b){
        na = a;
        nb = b;
    }
protected:
    int na;
    int nb;
};

class Computes1: public computes, public Getnum{
public:
    int res;

};
int main() {
    Box box1;
    box1.length = 1.0;
    std::cout << box1.length << std::endl;
    box1.set(1.0,2.0,3.0);
    double res;
    res = box1.get();
    std::cout << res << std::endl;

    int res2;
    res2 = addp(2,3);
    std::cout << res2 << std::endl;

    Rectangle rec;
    rec.set(1.2, 2.4);
    std::cout << "Total area: " << rec.getRale() << std::endl;

    Computes1 c;
    c.set(1,2);
    int a = c.getnuma();
    int b = c.getnumb();
    int res1, res11;
    res1 = c.plus(a,b);
    res11 = c.sub(a,b);
    std::cout << res1 << res11 << std::endl;
    int a2get;
    std::cout << "请输入整型变量：" << std::endl;
    std::cin >> a2get;
    std::cout << "这是输入的内容" << a2get << std::endl;
    return 0;
}


