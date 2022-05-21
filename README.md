# Fast Growing Heirachies
This is the output of the code which explains what the code is doing !

This code calculates the Fast Growing Hierarchy
Which is a set of functions used to aproximate massive numbers

F0(n) is equal to n+1

VALS:0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20
F0:  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21


F1(n) is equal to F0(n) applied to n n times
For example: F1(3) = F0(F0(F0(3))) = F0(F0(4)) = F0(5) = 6

VALS:0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20
F1:  0  2  4  6  8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40
F1(n)=2n


F2(n) is equal to F1(n) applied to n n times
For example: F2(3) = F1(F1(F1(3))) = F1(F1(6)) = F1(12) = 24

VALS:0 1 2  3  4   5   6   7    8    9    10    11    12     13     14     15      16      17      18      19       20
F2:  0 2 8 24 64 160 384 896 2048 4608 10240 22528 49152 106496 229376 491520 1048576 2228224 4718592 9961472 20971520 
F2(n)=n*2^n


F3(n) is equal to F2(n) applied to n n times
For example: F3(3) = F2(F2(F2(3))) = F2(F2(24)) = F2(402653184) = over 121 million digits

VALS:0 1    2
F3:  0 2 2048 
F4:  0 2 
F4(2) = F3(F3(2)) = F3(2048) Which is riduclous
Quickly reached the limit of my computing power using only addition
Since I am using recusion writing F5 and so on is rather simple
Just the numbers get too big for my computer to handle
Loading f2(29): 
15569256448
