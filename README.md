# CIS 165 - Lab 3: Output and Time Calculations

## How to Compile and Run
To compile and run these programs from the terminal, use the following commands:

**Diamond Program:**
`g++ -std=c++17 -Wall -Wextra diamond.cpp -o diamond`
`./diamond`

**Game Time Program:**
`g++ -std=c++17 -Wall -Wextra game_time.cpp -o game_time`
`./game_time`

* Note: I use a Mac, and so my terminal compiles slightly differently than a Windows machine. More specifically, I use `clang++` instead of `g++`*

## Program Plans

**diamond.cpp Plan:**
1. I will write seven `cout` statements, one for each line of the diamond.
2. I will manually type out the spaces and asterisks inside the string quotes.
3. Line 1 needs 3 spaces, Line 2 needs 2 spaces, Line 3 needs 1 space, Line 4 needs 0 spaces, and then the pattern reverses to close the bottom of the diamond.

**game_time.cpp Plan:**
1. Store the values 78 and 144 into integer variables for Level 1 and Level 2.
2. Create variables to hold the hours and minutes for each level, and for the difference between them.
3. Use integer division (`/ 60`) to get the total hours for each level.
4. Use the remainder operator (`% 60`) to get the leftover minutes for each level.
5. Subtract Level 1's total minutes from Level 2's total minutes to find the difference, then use `/ 60` and `% 60` on that result.
6. Print out the calculations using descriptive text.

## Test Tables

| Program and test | Values or pattern checked | Expected result before running | Actual output | Match or correction |
| :--- | :--- | :--- | :--- | :--- |
| **diamond.cpp** | Seven required lines | A symmetric diamond matching the lab prompt. | Output correctly matched the exact spacing. | ✅ Match |
| **game_time.cpp**<br>*(assigned values)* | `78` and `144` minutes | L1: 1h 18m<br>L2: 2h 24m<br>Diff: 1h 6m | L1: 1h 18m<br>L2: 2h 24m<br>Diff: 1h 6m | ✅ Match |
| **game_time.cpp**<br>*(changed values)* | `85` and `200` minutes | L1: 1h 25m<br>L2: 3h 20m<br>Diff: 1h 55m | L1: 1h 25m<br>L2: 3h 20m<br>Diff: 1h 55m | ✅ Match |

*Note: I temporarily changed the values to 85 and 200 for the second game time test, but have restored the originally assigned values (78 and 144) to the code before the final upload and rerun.*

## Code Explanations

**Explain how your output statements create the required shape. How did you check spaces that are difficult to see?**
The `cout` statements create the shape because I hardcoded the exact number of space characters before the asterisks on each line. Since spaces are invisible in the terminal, I checked my work by highlighting the text with my mouse cursor; this forced the console to draw a blue block over every character, making the invisible spaces visually countable.

**Explain how integer division and the remainder operator convert total minutes into hours and remaining minutes.**
Because the total minutes are stored in an `int`, dividing by 60 (`/ 60`) performs integer division, which drops the decimal. For example, 78 / 60 is mathematically 1.3, but the program just keeps the `1` for the hour. The remainder operator (`% 60`) then calculates what was left over after pulling out that full hour (78 - 60), leaving the `18` remaining minutes.

**Trace the assigned Level 1 and Level 2 values through your variables, including the calculation of the difference.**
Level 1 starts as 78. Dividing it by 60 stores 1 into `level_one_hours`, and doing 78 modulo 60 stores 18 into `level_one_mins`. Level 2 starts at 144. Dividing it by 60 stores 2 in `level_two_hours`, and doing 144 modulo 60 stores 24 into `level_two_mins`. To find the difference, the program subtracts 78 from 144 to get 66 total minutes. It then divides 66 by 60 to store 1 in `difference_hours`, and applies 66 modulo 60 to store 6 in `difference_mins`.

**Explain why the assignment asks you to store calculations in variables before using cout.**
Storing calculations in variables separates the mathematical processing logic from the output display logic. If I were to put the math directly into the `cout` statement, the code would become cluttered and difficult to read. Furthermore, storing the data allows me to reuse the exact same calculations later in the program without making the computer do the math twice.
