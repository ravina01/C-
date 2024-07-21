#include<iostream>
#include<string>
#include<vector>

using namespace std;

int minCost(string colors, vector<int>& neededTime) {

        int colorsSize = colors.size();
        auto neededTimeSize = neededTime.size();

        if(colorsSize != neededTimeSize)
            return -1;

        int totalTime =0;

        for(int iter=1; iter<colors.length(); iter++)
        {
            if(colors[iter] == colors[iter-1])
            {
                totalTime = totalTime + min(neededTime[iter], neededTime[iter-1]); 
                if(neededTime[iter] < neededTime[iter-1])
                {
                    neededTime[iter] = neededTime[iter - 1];
                }
                
            }
        }
        return totalTime;
    }