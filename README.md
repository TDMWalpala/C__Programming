# C__Programming
The C programming language is a computer programming language that was developed to do system programming for the operating system UNIX and is an imperative programming language. C was developed in the early 1970s by Ken Thompson and Dennis Ritchie at Bell Labs. ... C is a compiled language.

Labsheet 01


   (Q1)  Write a C program to display your name, index number, address and date of birth as follows.
   
                        Name : <First Name> <Last Name>
                        Index Number: <Index Number>
                        Address : <Your Home Address>
                        Date of Birth: <DD.MM.YYYY>
                        
   (Q2)  Write a C program to display following output
   
                        “ Hello “
                        what are you doing ?
                        ' my first day'   
                        
   (Q3)  Declare following variables in a C program
   
                Variable Name     Variable Data type     Initialization value
                 First              Char                       A
                 second             Char                       C
                 Third              Char                       T
                 Age                Integer                    3
 
   Using the above variables and display the following message
   how old is your CAT?
   3 years                     


Labsheet 02

(Q1)  If a = 1, b = 2, c = 3, d = 4 get the answers for the following equations using your C programming knowledge. (Note: The answers should be in 2 decimal points.) 
                                
          a. (a+b)/(c+d)
          b. a+b/(c+d) 
          c. (a+b)/c+d 
          d. a*b/c*d 
          
   Provide your answers in the program as a comment.
          
(Q2) If a = 1, write a C program to do the following evaluations; 
         
          a. a 
          b. a++ 
          c. ++a 
          d. a— 
          e. --a 
  Explain why “a” obtains those different values and provide your answers in the program as a comment.      


(Q3) Write a C program for the following pseudo code using your logical operator knowledge and provide your answers in the program as a comment.
          
          int m = 40; 
          int n = 20;
          int o = 20;
          int p = 30;
   If the result is TRUE print 1 or FALSE print 0 
         
          I. (m>n and m !=0)
          II. (o>p or p!=20)
          III. (not (m>n and m !=0)) 
     
     
(Q4) If the following declarations and assignments are made, 
         
          I. char C = ‘B’; 
          II. int i = 3, j = 3, k = 3;
          III. double x = 0.0, y = 2.3;
   Evaluate the following expressions.
       
          a. i && j && k 
          b. x || i && j - 3 
          c. i < j && x < y 
          d. i < j || x < y 
          e. ‘A’ <= C && C <= ‘Z’
          f. C - 1 == ‘A’ || C + 1 == ‘Z’ 
   (Hint: Use printf((x,y) ? "true" : "false") format to print a boolean value) 
     
     
(Q5) Write a program that computes X^N.
        
          X^N = X * X * X * ... * X 
          X= 1.3 
          N=5
          
          
(Q6) Calculate the area of a disk which has a radius of 5.4 using the formula, 3.14*r2.


(Q7) Calculate the surface area of the following disk with the outer radius 7 and the inner radius 5. 


(Q8) Calculate the volume of a cylinder which has a base radius of 3.2 and a height of 10.1.


(Q9) Calculate the surface area of the same cylinder. (Without the bases). 


(Q10) Calculate the amount of minutes when given the number of years and days as user input. 


(Q11) Calculate the height of a person in centimeters when given the height in feet and inches. 

          1 inch = 2.54 cm 
          1 foot = 12 in 

(Q12) Fahrenheit to Celsius temperature conversion can be done using the formula, 

          F = C * 9/5 + 32 
   Write a C program to calculate the Fahrenheit temperature for a given temperature in Celsius. .
      
      
      
Labsheet 03

(Q1) Write C programs to display the following outputs.
       
       a. * * * * * * *  b.           *   c. * * * * * *  d.* * * * * *  e.* * * * * *  f. *
          * * * * * * *             * *      * *       *    *         *    * * * * *       * *
          * * * * * * *           * * *      *   *     *    *         *    * * * *         * * *
          * * * * * * *         * * * *      *     *   *    *         *    * * *           * * * *
          * * * * * * *       * * * * *      *       * *    *         *    * *             * * * * *
          * * * * * * *     * * * * * *      * * * * * *    * * * * * *    *               * * * * * *
    
    
(Q2)  Write a function which checks whether page of a book is in left side or right side when page number is given. Note that numbering starts from the very first page.

(Q3)  Write a program to check if a number is even or odd.

(Q4)  Write a program called PrintNumberInWord which prints "ONE", "TWO", ... , "NINE", "OTHER" if the int variable "number" is 1, 2,... , 9, or other, respectively. Use a             "nested-if" statement. 

(Q5)  Given the float variables x1, x2, y1, y2 write a code segment to find the slope of a line through the two points (x1, y1) and (x2, y2). Note that you have to check whether       slope is undefined.

(Q6)  Write a C program to calculate the revenue from a sale based on the unit price and quantity of a product input by the user.
      
      The discount rate is 15% for the quantity purchased between 120 and 160 units, and 20% for the quantity purchased greater than 160 units. If the quantity purchased is less       than 120 units, the discount rate is 0%.

(Q7)  Print "Uppercase", "Lowercase", or "Not a letter" depending on whether the character input by the user is an uppercase alphabetic character, a lowercase alphabetic        
      character, or not an alphabetic character at all.
      
(Q8)  Create a program to print a list of all the divisors of a given number.

(Q9)  Find the maximum consecutive 1's in a string of 0's and 1's. 

      Eg: 00110001001110 - Output :3 [Max number of consecutive 1's is 3]
      
      
(Q10)  Write C program to check whether a given year is a leap year. 

       (Hint: Every year that is exactly divisible by four is a leap year, except for years that are exactly  
       divisible by 100, but these centurial years are leap years if they are exactly divisible by 400. ... The years 1600, 2000 and 2400 are leap years, while 1700, 1800, 1900,
       2100, 2200 and 2300 are not leap years)
       
(Q11)  Body constitution is measured using BMI (Body Mass Index) which depends only on the height and weight of a person. It can be defined by,
       
       BMI = weight / height2  
       Where weight is taken in kilograms and height in meters. Four general grades are proposed such that, 
       Underweight : BMI < 18.5
       Normal weight : 18.5 <= BMI < 25.03
       Overweight : 25.0 <= BMI < 30.0 Obesity : 30.0 <= BMI
      
   Write a C program to output user’s body constitution grade when he/she inputs body weight (kg) and the height (m).
       
(Q12)   Write a method to count the number of 2s in given range of integers.
       
        Eg: 10,11,12 ,13,14,15,16,17,18,19, 20
        
(Q13)  Implement the following game using while loop. 

       User will have a number between 0 and 100 in his or her head. Write a C program to guess that number. Program will guess a 
       number and users will say whether it is too high, too low, or that’s the number. At the end, print how many guesses it took to get right number. Note: You will have to   
       choose how your program will strategically guess. A naïve strategy can be to simply start the guessing at 1, and keep going (2, 3, 4, etc.) until you hit the number. But 
       that’s not an optimal guessing strategy. You need to provide an optimized solution.
       
Labsheet 04

(Q1) Write a C program to adding two numbers according to the user input. You should declare a separate function called “addition ()” to add two given user inputs.

(Q2) Write a function (without parameters) that increments count by 1 and set it back to 0 when it reaches multiples of 9.

(Q3) Write functions to compute the surface area and volume of a cube for a given length of a side.

(Q4) Write a simple T20 cricket prediction program as follows. When you are given the current run rate(runs per over) and number of overs played, predict the projected score for current run rate and higher run rates of whole inning.(e.g. Current RR: 6.4 per over, Higher RR: 7 per over, 8 per over, 9 per over).

(Q5) Write a C program to implement a game application that plays the children’s game of rock, paper, and scissors. The user enters a letter, indicating a choice. Write a method to pick a value in the range of 1 through 3, with 1 corresponding to rock, 2 corresponding to paper, and 3 corresponding to scissors. The computer’s choice is compared to the user’s choice according to the rules: rock breaks scissors, scissors cut paper, paper covers rock. Choices that match are ties. Display whether user won, lost or match was tie. The application should end when the user enters an invalid choice.


(Q6) Write a function to calculate nCr when n and r are given using following binomial coefficient rules.

(Q7) Write a program to calculate the date of birth from a given NIC number

(Q8) Write a C function to compute the greatest common divisor (GCD) of two given numbers

(Q9) Write a function in C to sum the powers 2n of all integers n between two given numbers a and b.

       E.g: If a = 5 and b = 8 Then sum = 52 + 62 + 72 + 82
       
(Q10) Write a recursive C function to get the following output regarding factorial.
