/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>



bool isDigit(char a)
{
  return a >= '0' && a <= '9'  ;
}
bool isUpper(char a)
{
    return a >= 'A' && a <= 'Z';
}
bool isLower(char a)
{
    return a >= 'a' && a <= 'z';
}
bool isAlpha(char a)
{
    return isLower(a) || isUpper(a);
}
bool isAlnum(char a)
{
    return isAlpha(a) || isDigit(a);
}
char capitalize(char a)
{
    return a - 32;
}
char lower(char a)
{
    return a + 32;
}
int parseInt(char a)
{
    if(isDigit(a))
    {
        return a - 0;
    }
    return -1;
}
char toChar(int a)
{
   if (a >= 0 && a <= 9)
   {
        return a + '0';
   }
   else return '\0';
}
double myLog(unsigned base, unsigned arg)
{
    if(base <= 0 || arg <= 0)
    {
       std::cout << "Invalid numbers"; 
    }
    unsigned times = 0;
    while (arg > 1)
    {
      arg /= base;
      times++;
    }
    return times;
}
double myPow(double base, int power)
{
    if(base==0 && power==0)
    {
       std::cout << "Undefined"; 
    }
    int n = power;
    if(power < 0)
    {
       power = -power; 
    }
    double product = 1;
    for(unsigned i = 1; i <= power; i++)
    {
        product *= base;
    }
    if(n<0)
    {
        return 1/product;
    }
    else return product;
}
int myCeil(unsigned a, unsigned b)
{
    if(b == 0)
    {
        std::cout << "Division by 0";
    }
    if(a%b != 0)
    {
        while (a%b != 0)
        {
            a++;
        }
        return a/b;
    }
    else return a/b;
}
int myFloor(unsigned a, unsigned b)
{
    if(b == 0)
    {
        std::cout << "Division by 0";
    }
    if(a%b != 0)
    {
        while (a%b != 0)
        {
            a--;
        }
        return a/b;
    }
    else return a/b;
}
unsigned myAbs(int a)
{
    return (a<=0)*(-a) + (a>=0)*a;
}





unsigned isDivisibleBy11AfterDel2nd (unsigned m, unsigned n)
{
    for (unsigned i = m; i <= n; i++)
    {
       unsigned number=(i/1000)*100 + i%100;
       if (number%11 == 0)
       {
          std::cout << i << " ";
       }
    }
    return 0;
}




unsigned mixTwoNums (unsigned num1, unsigned num2)
{
    unsigned sum = 0;
    while ((num1 != 0) || (num2 != 0)) 
    {
        if (num1 != 0)
        {
        sum = sum*10 + num1%10;
        num1 /= 10;
        }
        if (num2 != 0)
        {
        sum = sum*10 + num2%10 ;
        num2 /= 10;
        }
    } 
    return sum;
}



bool isStrong (unsigned n)
{
    long long sum = 0;
    long long product = 1;
    while (n!=0)
    {
        for(unsigned i = 1; i<=n; i++)
        {
           product *= i;
        }
        sum += product;
        n /= 10;
    }
    if (sum == n)
    {
      return true;  
    }
    else return false;
}


unsigned HowMuchWithKDivisers(unsigned a, unsigned b, unsigned k)
{
   
    unsigned numbers = 0;
    unsigned biggestDiviser = 1;
    for (unsigned i = a; i <= b; i++)
    {
         unsigned divisersCount = 0;
         unsigned temp = i;
        for (unsigned j = 2; j < i; j++)
        {
            unsigned biggestDiviser = 1;
            if(temp%j == 0)
            {
                if(j > biggestDiviser)
                {
                divisersCount++;
                }
                while(temp%j == 0)
                {
                    temp /= j;
                }
                biggestDiviser = j;
                
            }
        }
        if (divisersCount == k)
        {
        numbers++;
        }
    }
    return numbers;
}




int main()
{
unsigned a, b, k;
std::cin >> a >> b >> k;
std::cout <<HowMuchWithKDivisers(a, b, k);
 
}



