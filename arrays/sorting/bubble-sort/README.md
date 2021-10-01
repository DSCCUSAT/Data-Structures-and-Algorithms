# Implementing bubble sort 
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.

suppose you have an array of numbers -> [6,4,9,1,5,3]

                                                      The final result should be -> [1,3,4,5,6,9] which is in ascending order. 
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                               PHASE 1
                                                      
1) first we are going to check if the first 2 digits 6 and 4 are in the right order. 

           since 6 > 4     we swap          -> [4,6,9,1,5,3]
           
2) then we check the other 2 digits 

           since 6 < 9     we dont swap     -> [4,6,9,1,5,3]
           
3) again the next 2 digits
           
           since 9 > 1     we swap          -> [4,6,1,9,5,3]
           
4) we go on continuing this till the last digit
           
           since 9 > 1     we swap          -> [4,6,1,9,5,3]
           
           since 9 > 5     we swap          -> [4,6,1,5,9,3]
           
           since 9 > 3     we swap          -> [4,6,1,5,3,9]

5) after we finish checking the last digit we have finished phase 1. and if we check the last digit which is 9 is the largest among all the digits.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------

6) Now proceeding to                                                          PHASE 2 

8) In here we are going to compare the 2 adjacent digits of -> [4,6,1,5,3,9]
      
      ( in this phase you don't need to check the last digit ( 9 ) since it is the greatest digit )
      
      starting by the first 2 digits
      
           since 4 < 6     we dont swap     -> [4,6,1,5,3,9]
           
           since 6 > 1     we swap          -> [4,1,6,5,3,9]
           
           since 6 > 5     we swap          -> [4,1,5,6,3,9]
           
           since 6 > 3     we swap          -> [4,1,5,3,6,9]
           
9) after we finish checking up to 9 we have finished phase 2. and we have 6 as the second-largest digit.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------

10) Now proceeding to                                                          PHASE 3

11) In here we are going to compare the 2 adjacent digits of -> [4,1,5,3,6,9]
      
      ( in this phase you don't need to check the last 2 digits ( 6 , 9 ) since they are in the order )
      
      starting by the first 2 digits
      
           since 4 > 1     we swap          -> [1,4,5,3,6,9]
           
           since 4 < 5     we dont swap     -> [1,4,5,3,6,9]
           
           since 5 > 3     we swap          -> [1,4,3,5,6,9]
           
12) after we finish checking up to 6 we have finished phase 3. and we have 5 as the third-largest digit.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------

13) Now proceeding to                                                          PHASE 4

14) In here we are going to compare the 2 adjacent digits of -> [1,4,3,5,6,9]
      
      ( in this phase you don't need to check the last 3 digits ( 5 , 6 , 9 ) since they are in the order )
      
      starting by the first 2 digits
      
           since 1 < 4     we dont swap     -> [1,4,3,5,6,9]
           
           since 4 > 3     we swap          -> [1,3,4,5,6,9]
         
15) after we finish checking up to 5 we have finished phase 4. and we have 4 as the fourth largest digit.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------           

16) Now proceeding to                                                          PHASE 5

17) In here we are going to compare the 2 adjacent digits till the last digit of -> [1,3,4,5,6,9]
      
      ( in this phase you don't need to check the last 4 digits ( 4 , 5 , 6 , 9 ) since they are in the order )
      
      starting by the first 2 digits
      
           since 1 < 3     we dont swap     -> [1,3,4,5,6,9]
         
18) after we finish checking up to 4 we have finished phase 5. and we have 3 as the fifth largest digit.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------  

Now if we check the array it is sorted in ascending order -> [1,3,4,5,6,9].
