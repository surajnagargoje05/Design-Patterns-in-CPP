#pragma once
#include <iostream>
class SingleTon{
    private:
        SingleTon() = default;
        static SingleTon m_Instance;
    
    public:
        static SingleTon &getInstance();
        void methodA();
        void methodB();
};