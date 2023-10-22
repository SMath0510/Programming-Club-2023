# Competitive Programming in Short

**Competitive Programming** is a sport where participants solve well-defined algorithmic and computational problems within a specified time limit. The goal is to write efficient code that produces correct results for given inputs. It's a mentally engaging activity that sharpens problem-solving skills and algorithmic thinking.

---

## Problem Statement 1: VectorLand

Welcome to VectorLand, where all operations and computations are done using a data structure called vectors, which is essentially just an array. Imagine you own a big shop called "VectorMart." One day, VectorMan comes to your shop and asks a simple question: "How many 'distinct' items are there in your shop?" The challenge is to determine the count of distinct items based on the given format.

### Example:
If you have 5 items A, A, A, B, B, your vector would be [A, A, A, B, B]. Here, there are 2 distinct items but 5 entries.

### Approach:

---

## Additional Exercise

Now, let's imagine we're on vacation in SetLand. Here, all computations and operations are done using sets. Consider the shopkeeper problem:

**How does the problem become simpler/tougher on using sets instead of vectors for the shopkeeper problem?**

### Explanation:
Using sets simplifies the shopkeeper problem as sets inherently store only unique elements. So, in SetLand, the shopkeeper can easily determine the count of distinct items by using a set to store the entries. This eliminates the need for manual counting and makes the solution more straightforward.


# Problem Statement 2: The Range Checker

## Context
Welcome to the world of ZooLas, magical creatures that can create their own pearls. ZooLas aren't great at remembering details but excel at simple math. Your task is to oversee the security of a set of lockers, each containing pearls, assigned with unique numbers.

## Problem Description
As the chief in charge of locker security, you receive questions from Mr. PooLa, the owner. These questions involve specifying a range of lockers by providing the starting and ending indices. Your goal is to compute the sum of pearls in the specified locker range [begin, end]. However, there's a twist—every time you open a locker, you spend one penny.

Here's the catch: ZooLas, the creatures at your disposal, do not remember any information. For instance, if asked about the pearls in range [0, 1] in a vector [1, 2, 3, 4], ZooLa starts adding from 0 to 1. If another question is asked, say the sum of pearls from 0 to 3, ZooLa will restart the calculations from scratch. Consequently, you end up spending pennies for each operation.

### Flaws in the Problem Statement
1. The cost of one penny per locker opening might lead to inefficient solutions, as repeated calculations can result in excessive spending.
2. Lack of memory in ZooLas might lead to redundant calculations and increased costs.

## Additional Question
Impressed by your correct answers, the creator of ZooLand grants ZooLas the ability to maintain a vector called "Prefix-Sum." Explore this concept and suggest how incorporating such a data structure/algorithm can enhance the performance of your code.

---

### Additional Information:
- ZooLa spends one penny each time it calculates the sum for a given range.
- ZooLas do not remember previous calculations, leading to potential inefficiencies.
- Consider how the concept of "Prefix-Sum" can address the challenges posed in the initial problem.



