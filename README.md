# QLearning_Cpp
In this work, we are focusing on the basics of reinforcement learning. This is a C++ implementation of Q learning which is one of the most used off policy methods.

----
## Q Table
Q-Table is a way for a lookup where we calculate the maximum expected future reward for actions at each state. (select the best action at each state)

To learn each value of the Q-table, we use the **Q-Learning algorithm**.

----
## Q-function
<p align="center" width="100%">
    <img width="80%" src="https://github.com/Ghailen-Ben-Achour/QLearning_Cpp/blob/main/images/equation.png">
</p>

There is an iterative process of updating the values. As we start to explore the environment, the Q-function gives us better and better approximations by continuously updating the Q-values in the table.

----
## Usage
In this work, we share a simple way to work with Q tables on C++. To try working with Q tables,
