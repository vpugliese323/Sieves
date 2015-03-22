//Created by Vincent Pugliese in 2015
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//Command to compile on linux: g++ main.cpp -std=c++11 -o sieve.sh
//Note: 0 is prime, 1 is not prime

int sieve()
{
    while(1)
    {
        int n;
        cout << "N:";
        cin >> n;
        cout << "\n";
        bool numline [(n+1)];
        memset(numline, 0, sizeof(numline));//init all elements of array to 0
        int p = 2;
        int j = 0;
        while (p <= n)
        {
            for (int i = 2; (i*p) <= n; i++)//i < n, (i*p) < n
            {
                numline[(p*i)] = 1;
            }
            p++;
        }
        int iterable = 0;
        int element = 0;
        for (bool i: numline)
        {
            if (!numline[element])//numline[i] == 0; !numline[i]
            {
                iterable++;
            }
            element++;
            cout << i << " ";
        }
        cout << "Number of Primes: " << iterable - 2 << "\nFINISHED\n";
    }
}
int main()
{
    sieve();
}
