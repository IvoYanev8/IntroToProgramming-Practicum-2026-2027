/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
     /* int a, b;
    std::cout << "Write your numbers: ";
    std::cin >> a >> b;
    std::cout << " The smaller number is: " << (a >= b ? b : a) ; */
   
   
   
  /*  unsigned year;
    std::cout << "Chose your year: ";
    std::cin >> year;
    if ((year %4 == 0 && year %100 !=0) || (year %400 ==0))
    {
        std::cout << "yes";
    }
    else std::cout << "no"; */
   
   
   
   
   /* unsigned a, b, c;
    std::cout << "Chose the sides of the triangle: ";
    std::cin >> a >> b >> c;
    if (a + b > c || b + c >a || c + a > b )
    {
        std::cout << "Valid triangle";
    }
    else std::cout << "Invalid sides"; */
   
   
   
 /*   double x, y;
    std::cout << "Chose the coordinates of the point: ";
    std::cin >> x >> y;
    if (x==0 || y==0)
    {
        std::cout << "On axis";
    }
    else if (x > 0 && y > 0)
    {
        std::cout << "First";
    }
    else if (x < 0 && y >0)
    {
        std::cout << "Second";
    }
    else if (x < 0 && y < 0)
    {
        std::cout << "Third";
    }
    else std::cout << "Fourth"; */
   
   
   
    /*   unsigned month;
    std::cout << "Chose your Month: ";
    std::cin >> month;
    switch (month)
    {
        case 1:  case 3: case 5: case 7: case 8: case 10: case 12:
         std::cout << 31;
         break;
         
        case 4: case 6: case 9: case 11:
         std::cout << 30;
         break;
       
        case 2:
        unsigned year;
        std::cout << "Enter year: ";
        std::cin >> year;
         if ((year %4 == 0 && year %100 !=0) || (year %400 ==0))
             {
             std::cout << 29;
             }
             else std::cout << 28;
        break;
    } */
   
    
    /* unsigned a, b;
    std::cout << "Enter two numbers greater than 10: ";
    std::cin >> a >> b;
    unsigned newNumber;
    if (a < 10 || b < 10)
    {
        std::cout << "Enter valid two-digit numbers!";
    }
    else
    {
        newNumber = a*100 + b;
        if (((a - a%10)/10 < a%10) && (a%10 < (b - b%10)/10) && ((b - b%10)/10 < b%10))
        {
            std::cout << newNumber << " - Yes";
        }
        else std::cout << newNumber << " - No";
    } */
   
   
   
   
   
   /* unsigned a, x, y;
    std::cout << "Chose the square side: ";
    std::cin >> a;
    if (a < 0)
    {
        std::cout << "Enter a valid side!";
    }
   
    std::cout << "Chose your point coordinates (x, y): ";
    std::cin >> x >> y;
    if (x < 0 || y < 0)
    {
      std::cout << "Enter non-negative coordinates: " ;
    }
   
    if ((x % (2*a) > a) && (y % (2*a) > a))
    {
        std::cout << "Black";
    }
    else if ((x % (2*a) < a) && (y % (2*a) < a))
    {
        std::cout << "Black";
    }
    else  std::cout << "White"; */
   
   
   
   
   
   /* unsigned option;
    int a, b, result;
   
    std::cout << "1: (+), 2: (-), 3: (*), 4: (/), 5: (%)";
    std::cout << "\n Chose your operation by number: ";
    std::cin >> option;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
   
    switch (option)
    {
        case 1:
        result = a + b;
        break;
       
        case 2:
        result = a - b;
        break;
       
        case 3:
        result = (a*b);
        break;
       
        case 4:
        if (b!=0)
        {
        std::cout << (a*1.0/b);
        }
        else std::cout << "Division by 0";
        break;
       
        case 5:
        if (b!=0)
        {
        result = a%b;
        }
        else std::cout << "Division by 0";
        break;
       
        default: std::cout << "Invalid option";
    }
    std::cout << result; */
    
    
    
    
     /* unsigned a, b, c;
    std::cout << "Enter three sides of your triangle: ";
    std::cin >> a >> b >> c;
    if (a<=0 || b<=0 || c<=0)
    {
        std::cout << "Enter valid numbers! ";
        std::cin >> a >> b >> c;
    }
   
    if (a + b < c || a + c < b || b + c < a)
    {
        std::cout << "Not a triangle!";
    }
    
    
    
    if (a==b==c)
    {
        std::cout << "Equilateral, ";
    }
    else if (a==b || b==c || a==c)
    {
        std::cout << "Isosceles, ";
    }
    else std::cout << "Scalene, ";
    
    
   
   if (a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a)
   {
       std::cout << "obtuse";
   }
   else if (a*a + b*b > c*c || a*a + c*c > b*b || b*b + c*c > a*a)
   {
       std::cout << "acute";
   }
   else std::cout << "right"; */
}