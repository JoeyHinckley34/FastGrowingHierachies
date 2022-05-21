# Fast Growing Heirachies
This is the output of the code which explains what the code is doing ! <br />

This code calculates the Fast Growing Hierarchy <br />
Which is a set of functions used to aproximate massive numbers <br />

F0(n) is equal to n+1 <br />

VALS:0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 <br />
F0:  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 <br />


F1(n) is equal to F0(n) applied to n n times <br />
For example: F1(3) = F0(F0(F0(3))) = F0(F0(4)) = F0(5) = 6 <br />

VALS:0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 <br />
F1:  0  2  4  6  8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 <br />
F1(n)=2n <br />


F2(n) is equal to F1(n) applied to n n times <br />
For example: F2(3) = F1(F1(F1(3))) = F1(F1(6)) = F1(12) = 24 <br />

VALS:0 1 2  3  4   5   6   7    8    9    10    11    12     13     14     15      16      17      18      19       20 <br />
F2:  0 2 8 24 64 160 384 896 2048 4608 10240 22528 49152 106496 229376 491520 1048576 2228224 4718592 9961472 20971520 <br />
F2(n)=n*2^n <br />


F3(n) is equal to F2(n) applied to n n times <br />
For example: F3(3) = F2(F2(F2(3))) = F2(F2(24)) = F2(402653184) = over 121 million digits <br />

VALS:0 1    2 <br />
F3:  0 2 2048 <br />
F4:  0 2  <br />
F4(2) = F3(F3(2)) = F3(2048) Which is riduclous <br />
Quickly reached the limit of my computing power using only addition <br />
Since I am using recusion writing F5 and so on is rather simple <br />
Just the numbers get too big for my computer to handle <br />
Loading f2(29):  <br />
15569256448 <br />
