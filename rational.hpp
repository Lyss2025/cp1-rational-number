#ifndef RATIONAL_HPP
#define RATIONAL_HPP

class division{
    public:
        void zero(int num2);
        void oneDenom(int num1);
        void simplify(int num1, int num2);
    private:
        int numerator;
        int denominator;
};

#endif