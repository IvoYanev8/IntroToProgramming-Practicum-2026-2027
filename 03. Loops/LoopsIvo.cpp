/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    
    
      /* unsigned n;
    std::cout << "Chose the sum: ";
    std::cin >> n;
   
    for (int i=1; i<n; i++)
    {
        std::cout << "x = " << i << " " <<  "y = " << n-i << "\n";
    }*/
   
   
   
   
   /* unsigned a, b, bigger, lower;
    std::cout << "Chose two numbers: ";
    std::cin >> a >> b;
    lower = b<=a ? b : a;
    bigger = a <= b ? b : a;
    for ( unsigned i = lower; i > 1; i--)
    {
        if (a%i == 0 && b%i == 0)
        {
            std::cout << i << ", ";
        }
    }
    std::cout << "1"; */
   
   
   
   
   /* unsigned a, sumOfDivisers;
    sumOfDivisers = 0;
    std::cout << "Select a number: ";
    std::cin >> a;
    for (unsigned i = a; i>1; i--)
    {
       if (a%i == 0)
       {
           sumOfDivisers += i;
       }
    }
    if ((sumOfDivisers - a + 1) == a)
    {
        std::cout << "Perfect";
    }
    else std::cout << "Not Perfect"; */
    
    
    
    
    
  /* unsigned N;
  std::cout << "Enter the side of the square: ";
  std::cin >> N;
  
  if (N<=0)
  {
        std::cout << "Enter a positive integer!: ";
  }
  for (unsigned i = 0; i <= N; i++)
  {
      for (unsigned j = 0; j <= N; j++)
      {
          if (i==j)
          {
              std::cout << "0";
          }
          else if (i<j)
          {
              std::cout << "+";
          }
          else std::cout << "-";
      }
      std::cout << "\n"; 
  }*/
      
      
      
     
     /* unsigned number, index;
      std::cout << "Enter the number and the index: ";
      std::cin >> number >> index;
      for (unsigned i = 0; i<index-1; i++)
      {
          number /= 10;
      }
      if(number==0)
      {
          std::cout << "The index doesnt exist!";
      }
      else std::cout << number%10;*/
        
        
        
        
        
        
    /*  unsigned binary;
      std::cout << "Enter a binary number: ";
      std::cin >> binary;
      unsigned sum = 0;
      unsigned power = 1;
      while (binary != 0)
      {
          sum += (binary%10)*power;
          power *= 2;
          binary /= 10;
      }
      std::cout << sum; */
      
      
      
      
      
      
     /* unsigned number;
      std::cout << "Enter a number: ";
      std::cin >> number;
      
      
      bool isAutomorphic = true;
      while (number!=0)
      {
         if (number % 10 == (number*number)%10)
         {
             number /= 10;
         }
         else isAutomorphic = false; break;
      }
      
      
      if (isAutomorphic)
      {
          std::cout << "Automorphic";
      }
      else std::cout << "Not Automorphic"; */
  
  
  
  
  
   /*   unsigned number, highest;
      std::cout << "Enter your number: ";
      std::cin >> number;
      unsigned repetitions = 0;
      highest = number;
      
      std::cout << "Sequence: ";
      while (number != 1)
      {
          if (number%2 == 0)
          {
              number /= 2;
          }
          else {
              number *= 3;
              number += 1;
          }
          if (number > highest)
          {
             highest = number; 
          }
          repetitions++; 
          std::cout << number << " ";
      }
      std::cout << "\n" << "Steps: " << repetitions; 
      std::cout << "\n" << "Max Value: " << highest; */
      
      
      
      
   /*   int a, b, x, y, r;
      std::cout << "Enter numerator and denominator: ";
      std::cin >> a >> b;
      if (b==0)
      {
          std::cout << "Division by zero!";
      }
      x = (a<0)*(-a) + (a>0)*a;
      y = (b<0)*(-b) + (b>0)*b;
      while (y!=0)
      {
          r = x%y;
          x = y;
          y = r;
      }
      a/=x;
      b/=x;
      std::cout << a << "/" << b; */
   
   
   
   
   /* unsigned number, repsMax, max;
    std::cout << "Enter a number: ";
    std::cin >> number;
    repsMax = 0; max = 0;
    for (unsigned i = 0; i <= 9; i++)
    {
        unsigned temp = number;
        unsigned reps = 0;
        while (temp!=0)
        {
            if(temp%10 == i)
            {
                reps++;
            }
            temp /= 10;
        }
        if (reps >= repsMax)
        {
            repsMax = reps;
            max = i;
        }
        
    }
    std::cout << max; */
      
      
}