#pragma once
#include <vector>
#include <iostream>
#include "utils.h"

#ifndef TEST_H

#define TEST_H

class Test{
public:
    int type;
    int rep = 0;
    Test();
    Test(int t);
    void exe(double (*Force)(particle,particle));
    void exe(std::vector<particle> particles);
    void show_rep();
};

#endif // TEST_H
