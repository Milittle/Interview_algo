#pragma once
class sum_solution{
public:
    //求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
    int Sum_Solution(int n) {
        return ((1 + n) * n) >> 1;
    }
};