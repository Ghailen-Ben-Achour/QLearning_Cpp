#include <iostream>
#include <vector>
#include <map>

class QLearning{
public:
    QLearning(const int &s, const int &r, const int &a);
    std::vector<int> IndexFromMulti(int one_dimensional_index, int nn, int depth);
    void QtableLogic(int nn, int s, int a);
    void Show() const;
    float GetEpsilon() const;
    void SetEpsilon(float e);
private:
const int _stateSize;
const int _actionSize;
const int _range;
std::map<std::vector<int>, std::vector<float>> _q_table;
bool _init;
float _EPSILON;
static double _DISCOUNT;
const static int _EPISODES = 10;
static float _EPS_DECAY;
static double _LEARNING_RATE;

};
