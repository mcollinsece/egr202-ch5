# egr202-ch5-solutions-


# Lab 5-3 Modify

1. **In this lab, you will modify the Heaton Boutique program from Lab 5-2 (code included) to give a 10% discount to members of the store’s Premier Club, and a 5% discount to all other customers. Modify the program instructions appropriately. Use the sample data from Figure 5-28 to test the program.**

![Figure 5-28](images/figure5_28.png)

You can run you can compile and run your code with the following commands:

```
make clean
make lab5-3
./lab5-3
```


2. **Test the program using the data in Figure 5-28. You can test your code against my unit test with the following commands:**

``` 
make test_lab5-3
./test_files/test_lab5-3
```

# Lab 5-6 Debug

1. **Read the comments entered at the beginning of the program. Test the program using codes of 1, 2, and 3. Use 100 as the purchase price. Debug the program.**

2. **Test the program using the same data used to desk-check the program. You can compile and run your code with the following commands:**
```
make clean
make lab5-6
./lab5-6
```
**You can also use the unit test for testing your code by running the following:** 
``` 
make test_lab5-6
./test_files/test_lab5-6
```

# Homework 5-12

**A local department store is having a BoGoHo (Buy One, Get One Half Off) sale. The store manager wants a program that allows the salesclerk to enter the prices of two items. The program should calculate and display the total amount the customer owes. The half-off should always be taken on the item having the lowest price. For example, if the items cost $24.99 and $10, the half-off would be taken on the $10 item. If both prices are the same, take the half-off on the second item.**

1. **Create an IPO chart for the problem, and then desk-check the algorithm twice. For the first desk-check, use 24.99 and 10 as the prices. For the second desk-check, use 11.50 and 30.99.**

2. **List the input, processing, and output items, as well as the algorithm, in a chart similar to the one shown earlier in Figure 5-27. Then code the algorithm into a program.**

3. **Desk-check the program using the same data used to desk-check the algorithm.**

4. **Write the C++ instructions necessary in Replit to display the total amount owed in fixed-point notation with two decimal places. Test the program using the same data used to desk-check the program. You can compile and run your code with the following commands:**

```
make clean
make hw5-12
./hw5-12
```
**You can also use the unit test for testing your code by running the following:** 
``` 
make test_hw5-12
./test_files/test_hw5-12
```
![Figure 5-27](images/figure5_27.png)

# Homework 5-15

**A third-grade teacher at Potter Elementary School wants a program that allows a student to enter the amount of money a customer owes and the amount of money the customer paid. The program should calculate and display the amount of change, as well as how many dollars, quarters, dimes, nickels, and pennies to return to the customer. Display an appropriate message when the amount paid is less than the amount owed.**

1. **Create an IPO chart for the problem, and then desk-check the algorithm three times. For the first desk-check, use 75.34 and 80 as the amount owed and paid, respectively. For the second desk-check, use 39.67 and 50. For the third desk-check, use 10.55 and 9.75.**

2. **List the input, processing, and output items, as well as the algorithm, in a chart similar to the one shown earlier in Figure 5-27. Then code the algorithm into a program.**

3. **Desk-check the program using the same data used to desk-check the algorithm.**

4. **Write the C++ instructions necessary in Replit to display the change in fixed-point notation with two decimal places. Display the remaining output in fixed-point notation with no decimal places. Test the program using the same data used to desk-check the program. You can compile and run your code with the following commands:**

```
make clean
make hw5-15
./hw5-15
```
**You can also use the unit test for testing your code by running the following:** 
``` 
make test_hw5-15
./test_files/test_hw5-15
```