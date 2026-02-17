#include "SingleTon.h"

SingleTon SingleTon::m_Instance;

SingleTon &SingleTon::getInstance(){
    return m_Instance;
}

void SingleTon::methodA(){
    std::cout << "Method A called " << std::endl;
}

void SingleTon::methodB(){
    std::cout << "Method B called " << std::endl;
}