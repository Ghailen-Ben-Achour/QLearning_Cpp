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
};
