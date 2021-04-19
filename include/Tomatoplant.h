#ifndef TOMATOPLANT_H
#define TOMATOPLANT_H

class Tomatoplant {
    private:
        int count;
        int height;
    public:
        //constructors
        Tomatoplant(int c, int h);
        Tomatoplant(int h);
        
        //count
        int getCount();
        void setCount(int new_count);
        
        //height
        void setHeight(int h);
        int getHeight();
};

#endif