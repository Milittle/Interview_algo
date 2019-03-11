#pragma

class number_of_one{
public:
    // quick count the numbe one
     int  NumberOf1(int n) {
         int result = 0;
         
         while(n)
         {
             result++;
             n = n & (n - 1);
         }
         
         return result;
     }
};