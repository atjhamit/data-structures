//
//  common.hpp
//  data-structures
//
//  Created by Amit Jha on 08/04/22.
//

#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <stack>
#include <queue>

#define LOG(x) std::cout << x << "\n"
#define LOG_T(x) std::cout << x << "\t"

typedef struct Leaf
{
    Leaf *left, *right;
    int data;
}Leaf;
