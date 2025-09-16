#include <iostream>
int main() {
    // For loop example
    std::cout << "For loop from 0 to 4:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // While loop example
    std::cout << "While loop from 0 to 4:" << std::endl;
    int j = 0;
    while (j < 5) {
        std::cout << j << " ";
        j++;
    }
    std::cout << std::endl;

    // Do-while loop example
    std::cout << "Do-while loop from 0 to 4:" << std::endl;
    int k = 0;
    do {
        std::cout << k << " ";
        k++;
    } while (k < 5);
    std::cout << std::endl;
    for (int i=0;i<10;i++)
    { 
        if (i==5)
            continue; // skip the rest of the loop when i is 5
        if (i==8)
            break; // exit the loop when i is 8
        for (int j=0;j<i;j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
     for (int i=6;i>0;i--)
    { 
        for (int j=0;j<i;j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    k=1;
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=5;j++)
        {
            std::cout<<k << " ";
            k++;
        }
        std::cout<<std::endl;
    }   

    std::cout<<"Pyramid Pattern"<<std::endl ;
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5-i;j++)
        {
            std::cout<<" ";
        }
        for ( k=1;k<=2*i-1;k++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }  
        std::cout<<std::endl;
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            std::cout<<j;
        }
     std::cout<<std::endl;
    }  
     std::cout<<"Floyd's Triangle"<<std::endl ;
     k=1;
     for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            std::cout<<k<<" ";
            k++;
        }
     std::cout<<std::endl;
    } 
    std::cout<<"Number Pyramid"<<std::endl ;
    for (int i=1;i<=5;i++)
    {
        for (int l=1;j<=5-i;l++)
        {
            std::cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    }

    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
           if(i==1 || i==5 || j==1 || j==5)
               std::cout<<"*";
           else
               std::cout<<" ";  
        }
        std::cout<<std::endl;
    }
    std::cout<<"Pascal's Triangle"<<std::endl;
    for (int i=0;i<5;i++)
    {        
        for (int j=0;j<5-i;j++)
        {
            std::cout<<" ";
        }
    
        int coef=1;
        for (int j=0;j<=i;j++)
        {
            std::cout<<coef<<" ";
            coef=coef*(i-j)/(j+1);
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"Butterfly Pattern"<<std::endl;

    for (int i=1;i<=5;i++)
    { 
    
        for (int j=1;j<=i;j++)
        {
            std::cout<<"*";
        }
        for(int l=1;l<=2*(5-i);l++)
        {
            std::cout<<" ";
        }
        for (int j = 1; j <= i; j++) std::cout << "*";
        std::cout<<std::endl;
    }
    for (int i=4;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            std::cout<<"*";
        }
        for(int l=1;l<=2*(5-i);l++)
        {
            std::cout<<" ";
        }       
        for (int j = 1; j <= i; j++) std::cout << "*";
        std::cout<<std::endl;
    }
    return 0;
}