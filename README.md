# Collatz Conjecture

The Collatz conjecture is a conjecture in mathematics that concerns sequences defined as follows: start with any positive integer n. Then each term is obtained from the previous term as follows: if the previous term is even, the next term is one half of the previous term. If the previous term is odd, the next term is 3 times the previous term plus 1. The conjecture is that no matter what value of n, the sequence will always reach 1.The conjecture is named after Lothar Collatz, who introduced the idea in 1937, two years after receiving his doctorate. It is also known as the 3n + 1 problem.

# Collatz

The Collatz Conjecture is very simply stated and easy to understand. Take any arbitrary positive integer.
If the number is even, divide it by 2 and if the number is odd, multiply the number by 3 and add 1. Perform the same operation on the number obtained and on the numbers obtained successively. The Collatz conjecture states that all such sequences will end in the number 1. For example:

**3, 10, 5, 16, 8, 4, 2, 1** (Stepwise explanation below)

3   --> arbitrary positive integer

10  = 3 x 3 + 1

5   = 10 / 2

16  = 5 x 3 + 1

8   = 16 / 2

4   = 8 / 2

2   = 4 / 2

1   = 2 / 1

## Stoptime:

The stoptime of any natural number (positive integer) with regards to the Collatz conjecture is defined as the number of steps that it takes for a given sequence to end. For example in the above sequence:

3, 10, 5, 16, 8, 4, 2, 1

The number of steps required = 7. Thus, the **stoptime of 3 is 7**.

One may notice that the stoptime of any given number is one less than the number of numbers in the sequence (stoptime of 3 = 8  - 1)

More information can be viewed at the wikipedia page https://en.wikipedia.org/wiki/Collatz_conjecture

**starting with n = 12, one gets the sequence**
```
12, 6, 3, 10, 5, 16, 8, 4, 2, 1
```
**The number n = 19 takes longer to reach 1:**
```
19, 58, 29, 88, 44, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
```
Every time it falls in a loop of ```4 2 1 ```

To find out the relation between the iteration I used [This website][id/name] for creating scatter graph. To biend (x,y) axis I use 2 array likd this to easyly find out the scatter graph from following link. I saved (x,y) values in ``` .txt ``` file in axises floder. **Raw datas of x and y values are given in .txt files.**

    myfile << "(x,y) asis: \n";
        for(long i = 1; i < 10000;i++)
        {
            myfile << axisX[i]<<" "<<axisY[i]<<" ";
        }
    

[id/name]: https://www.rapidtables.com/tools/scatter-plot.html?__cf_chl_tk=SrRmLbvZ4T1b5xX.RoVKWA56NHhKaGklu.DK10GWIU8-1636740926-0-gaNycGzNB6U

**After binding x and y values together (x,y) values should look like this.** 

Here is 1st 50 (x,y) values. [x represent a value] [Y represent number of iteration]

    
     1 3 2 1 3 7 4 2 5 5 6 8 7 16 8 3 9 19 10 6 11 14 12 9 13 9 14 17 15 17 16 4 17 12 18 20 19 20 20 7 21 7 22 15 23 15 24 10 25 23 26 10 27 111 28 18 29 18 30 18 31 106 32 5 33 26 34 13 35 13 36 21 37 21 38 21 39 34 40 8 41 109 42 8 43 29 44 16 45 16 46 16 47 104 48 11 49 24 50 24
    
    
 ## Scatter graph for 1-100 values:
 
 <img width="824" alt="Dnd_1-100" src="https://github.com/neeerob/CollatzConjecture/blob/main/scatter%20graph/scatter-plot-6.png">
 
 ## Scatter graph for 1-1000 values:
 
 <img width="824" alt="Dnd_1-1000" src="https://github.com/neeerob/CollatzConjecture/blob/main/scatter%20graph/scatter-plot-7.png">
 
 ## Scatter graph for 1-15000 values:
 
 <img width="824" alt="Dnd_1-1500" src="https://github.com/neeerob/CollatzConjecture/blob/main/scatter%20graph/scatter-plot-8.png">
 
 **After itterating selecting highest values of y from 1 to 100000 values should look like this.** 

Here is all Y values from only taking highest values. 


    
     3 7 8 16 19 20 23 111 112 115 118 121 124 127 130 143 144 170 178 181 182 208 216 237 261 267 275 278 281 307 310 323 339 350
    
    
  ## Bar graph for consistently highest values of Y:
  
  Current hight itteration to next highest itteration. 
 
 <img width="824" alt="Dnd_1-1500" src="https://github.com/neeerob/CollatzConjecture/blob/main/Consistence%20Graph/bar-graph-2.png">
 
  ## Scatter graph for consistently highest values of (X,Y):
  
  Current hight itteration to next highest itteration for X and Y values.
 
 <img width="824" alt="Dnd_1-1500" src="https://github.com/neeerob/CollatzConjecture/blob/main/Consistence%20Graph/scatter-plot-9.png">
 
 **Thus graphs are created using [This][id/name] website.**
 
 I didn't find any pattern/function for one highest itteration to next highest itteration. 
