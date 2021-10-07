#include "algorithms.hpp"
#include <iostream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>

QLearning::QLearning(const int &s, const int &r, const int &a):
_stateSize(s), _range(r), _actionSize(a+1)
{
    try{
        if(_stateSize >0 && _actionSize >0){
            std::cout << "Constructor call successful" << std::endl;
            QtableLogic(_range, _stateSize, _actionSize);
            std::cout << "Qtable generated successfully" <<std::endl;
            _init = true;
        }
        else{
            throw -1;
        }
    }
    catch(...)
    {
        std::cerr << "State or action size is 0" <<  std::endl;
    }


}

