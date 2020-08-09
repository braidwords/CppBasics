#include "constants.h"
#include "calculateTotalCost.h"
#include<iostream>

int g_cost; //global variables
int g_margin; //global variable
int g_profit; //global variables
int g_totalValue; //global variables
int g_Value; //global variables

void userData()
{
    std::cout << "Enter your cost: " << '\n';
    std::cin >> g_cost;
    std::cout << "Enter your margin: " << '\n';
    std::cin >> g_margin;
    std::cout << "Enter your profit: " << '\n';
    std::cin >> g_profit;
    g_Value = totalCost(g_cost, g_margin, g_profit);
    std::cout << "The Total Value will be: " << g_totalValue << '\n';
}

int totalCost(int cost, int margin, int profit)
{
    g_totalValue = ((cost + margin) * profit);
    return g_totalValue;
}