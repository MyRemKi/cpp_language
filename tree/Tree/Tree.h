#ifndef TREE_H
#define TREE_H
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
using namespace std;
using std::string;
class Tree
{
public:
    Tree(int main_case=0, int stair=0, string type_case="none");
    int LeftCase();
    int RightCase();
    ~Tree();
private:
    int m_main_case;
    int m_left_case;
    int m_right_case;
    int m_stair;
    string m_type_case;
    

};

#endif // TREE_H
