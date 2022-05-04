// Two_SUM.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <vector>
#include <map>
#include <iostream>


using namespace std;






vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> MapTwoSum;
        vector<int> Out;

        for (int it1 = 0; it1 < nums.size(); it1++)
        {
            MapTwoSum.insert(make_pair(nums[it1], it1));
        }

        for (int it1 = 0; it1 < nums.size(); it1++)
        {
            if (MapTwoSum.find(target - nums[it1]) != MapTwoSum.end())
            {
                Out.push_back(it1);
                Out.push_back(MapTwoSum[target - nums[it1]]);
                Out.push_back(it1);
                return Out;

            }
        }



    }

int main()
{
    vector<int> Test = { 2,7,11,15 };
    int target = 18;
    vector<int> In;


    In=twoSum(Test, target);
    cout << In[0];
}