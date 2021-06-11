# Bitwise Operator
1. & Bitwise AND -> ADDING A=0001 (1) B=0010 (B) A&B 0000
2. | Bitwise OR -> MULTIPLICATION A|B 0011 3
3. ^ Bitwise XOR -> 3^5 0011^0101 0110 6
4. ~ Bitwise NOR -> inverse all bit 5=00000101 ~ 11111010 -6
5. << Left Shift -> shift left and fils empty space with 0
   eg 5<<1 :- 5=0101<<1 1010=10 aslo used for multiplicaton a=3 b=a<<1 only wokrs multiply by 2
6. Right Shift >> shfits right side bits and fils empty space with 0 eg 12>>2 100>>2 0011=3 also for divided by like a=5 b=a>>1 only wokrs divide by 2

# Using Bitwise AND operator: 
1. The idea is to check whether the last bit of the number is set or not. If last bit is  set then the number is odd, otherwise even.
As we know bitwise AND Operation of the Number by 1 will be 1, If it is odd because the last bit will be already set. Otherwise it will give 0 as output

<p align="center"> 
<a href="#"><img width="50%" height="auto" src="https://media.geeksforgeeks.org/wp-content/uploads/20200227234707/Untitled-Diagram521.jpg" height="175px"/></a>
</p>

# Using Bitwise XOR No any third variable
1. The bitwise XOR operator can be used to swap two variables. The XOR of two numbers x and y returns a number that has all the bits as 1 wherever bits of x and y differ. For example, XOR of 10 (In Binary 1010) and 5 (In Binary 0101) is 1111 and XOR of 7 (0111) and 5 (0101) is (0010). 

# Check whether K-th bit is set or not 
1.) Check the specific bit set or not we can leftshift operaters as well
* number=14 in binary 1110 so we want to check any bit by bit-1 cuase start from zero
* so we want to chcek 4 bit which will be 4-1 3 so here is the algorithm
* number&(1<<k-1)>0 : Bit Set? Not set
*   1110<<5-1 so
* & 1000
* --------
*   1000
*   1>0 set 

# Set the K-th bit of a given number
* Input : n = 10, k = 2
* n = n | (1 << k);
* Output : 14
* (10)10 = (1010)2
* Now, set the 2nd bit from right.
 (14)10 = (1110)2
 2nd bit has been set.

* Input : n = 15, k = 3
  Output : 15
  3rd bit of 15 is already set.

# Program to clear K-th bit of a number N
* Given a number N, the task is to clear the K-th bit of this number N. If K-th bit is 1, then clear it to 0 and if it is 0 then leave it unchanged.
* Input: N = 5, K = 1
  Output: 4
  5 is represented as 101 in binary
  and has its first bit 1, so clearing
  it will result in 100 i.e. 4.

* Input: N = 5, K = 2
  Output: 5
  5 is represented as 101 in binary
  and has its second bit is already 0,
  so clearing it will result in 101 i.e. 5.

  # Count number of bits to be flipped to convert A to B
  * Input : a = 10, b = 20
    Output : 4
    Binary representation of a is 00001010
    Binary representation of b is 00010100
    We need to flip highlighted four bits in a
    to make it b.

  * Input : a = 7, b = 10
    Output : 3
    Binary representation of a is 00000111
    Binary representation of b is 00001010
    We need to flip highlighted three bits in a
    to make it b.

  1. Calculate XOR of A and B.      
        a_xor_b = A ^ B
        
  2. Count the set bits in the above 
     calculated XOR result.
      countSetBits(a_xor_b)
        count = 0
        while a_xor_b ==0 
        count ++
        n=&n-1 used for LSB set bit to zero
      return count
