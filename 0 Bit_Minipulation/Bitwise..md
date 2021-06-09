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