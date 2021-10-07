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

std::vector<int> QLearning::IndexFromMulti(int one_dimensional_index, 
int nn, int depth){

    std::vector<int> index(depth, 0);
    for (int i=0; i<depth; i++){
        index[i]= (one_dimensional_index % nn);
        one_dimensional_index /= nn;
    }
    return index;
}

void QLearning::QtableLogic(int nn, int depth, int breadth){

    if (nn == 0){
        std::cerr << "size can not be 0" << std::endl;
    }
    float size = nn/2;
    int max_index = pow(nn, depth);
    for (int i=0; i < max_index; i++){
        std::vector<int> key = IndexFromMulti(i, nn, depth);
        for( int j=0; j <depth; j++){
        key[j] -= size;
        std::vector<float> value(breadth, 0);
        for( int j=0; j <breadth; j++){
            value[j] = (rand()%5)+1;
            this->_q_table[key] = value;
            }
        }

    }

}

void QLearning::Show() const{
    if(_init){
        std::cout << "qtable populated with: "<< std::endl;
        for(auto iter = this->_q_table.begin(); 
        iter!= this->_q_table.end(); ++iter){
            std::cout <<"qtable[{";
            for( size_t i=0; i< iter->first.size(); i++){
                std::cout << iter->first[i];
                if(i!= iter->first.size()-1)
                std::cout << ",";
            }
            std::cout << "}] =[";
            for( size_t i=0; i< iter->second.size(); i++){
                std::cout << iter->second[i];
                if (i!= iter->second.size()-1)
                std::cout << ",";
                std::cout << "]; " << std::endl;
            }
        }
    }
    else{
        std::cerr << "Qtable not initialized" << std::endl;
    }
}

