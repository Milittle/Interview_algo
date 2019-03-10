#pragma

class rect_cover{
public:
    int rectCover(int number) {
        if (number == 0)
            return 0;
        
        if (number == 1)
            return 1;
        
        int pre = 1;
        int cur = 2;
        int tmp = 0;
        
        for (int i = 3; i <= number; ++i)
        {
            tmp = cur;
            cur = cur + pre;
            pre = tmp;
        }
        
        return cur;
    }
};