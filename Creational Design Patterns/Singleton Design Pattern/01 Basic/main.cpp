#include "SingleTon.h"
#include <iostream>
using namespace std;

int main(){
    SingleTon &m_Instace = SingleTon::getInstance();
    m_Instace.methodA();

    return 0;   
}
