# Rational Numbers
[![Points badge](../../blob/badges/.github/badges/points.svg)](../../actions)

## Project Outcomes:
Develop a C++ program that uses:
- Branch
- Loop
- Basic input/output
- Makefile/make
- Multiple files
- Modular development

## Preparatory Readings:
- Zybook "Primer" sections

## Background Information:
### Project overview:
In preparation for the first project, you will develop a simple C++ class that
allows us to represent rational numbers without the rounding errors that are
inherent in floating point numbers.

Rational numbers are made up of an integer numerator and an integer
denominator. Rational numbers can be positive or negative and when displayed
shall always show the minus sign before the fraction, e.g. **-1/2**.

### Project Requirements:
Your application must function as described below:
1. You must create a Makefile with a rule called **main**.

    1. The **main** rule must create an executable file, also called **main**.
    1. Running the executable shall be accomplished by typing `./main` at the
       command prompt.

1. Your main program should be very simple. It should read two integers in from
   the user (first the numerator, then the denominator) and output the
   simplified fraction for those values.

    1. For example if the input is `3` followed by `-6`, then your program
       would output `-1/2`.

1. If the denominator, after simplifying the fraction is 1, simply output the
   numerator, e.g. `5/1` should output as `5`.
1. If the denominator is zero, output `NaN`. This is a common symbol that means
   "not a number" since dividing by zero is not allowed in mathematics.
1. The formatting of the output is important! Do not add any space in-between
   characters.

## Code organizations

This project should be organized as one ``Rational`` class in rational.hpp and
rational.cpp and a ``main.cpp`` driver.

You should follow the instruction to decide the implementation of
the classes.

### Rational class
You must use this class to hold all of the logic about the rational class. Some
hints:

- This class should take two integer to start; simplify it and provide
  formatted output representing the rational number as demonstrated in the
  instruction.
- This class can memorize the sign in a instance variable; Determining the sign
  first so you do not need to work with negative integers after;
- Make a method to calculate the greatest common denominator (GCD); Try to
  limit it to work with non-negative values only;

### Driver main.cpp
This program will handle the user input/output and delegate rational number
logic to the ``Rational`` class.

+ You should not handle anything related to the rational number here.

## Sample run
- run 1
```
Please input a numerator and a denominator separated by a space:
35 10
7/2
```

- run 2
```
Please input a numerator and a denominator separated by a space:
1 0
NaN
```

- run 3
```
Please input a numerator and a denominator separated by a space:
1 -2
-1/2
```

- run 4
```
Please input a numerator and a denominator separated by a space:
-1 -2
1/2
```

## Important Notes:
- Projects will be graded on whether they correctly solve the problem, and
  whether they adhere to good programming practices.
- Projects must be received by the time specified on the due date. Projects
  received after that time will get a penalty or zero.
- Never change the test files! The results you get will be pointless as they
  will not align with our grading.
- Never change the makefile unless you are asked to do so
- Please review the academic honesty policy.
  - Note that viewing another student's solution, whether in whole or in part,
    is considered academic dishonesty.
  - Also note that submitting code obtained through the Internet or other
    sources, whether in whole or in part, is considered academic dishonesty.
    **All programs submitted will be reviewed for evidence of academic
    dishonesty, and all violations will be handled accordingly**.

### Submission Requirements:
1. All code must be added and committed to your local git repository.
2. All code must be pushed to the GitHub repository created when you "accepted"
   the assignment.
   1. After pushing, with `git push origin main`, visit the web URL of your
   repository to verify that your code is there. If you don't see the code
   there, then we can't see it either.
3. Your code must compile and run. The auto-grading tests will indicate your
   score for your submission.
   1. The auto-grading build should begin automatically when you push your code
      to GitHub.
   2. If your program will not compile, the graders will not be responsible for
      trying to test it.
   3. You should get an email regarding the status of your build, if it does
      not pass, keep trying.
   4. We have limited quota to run autograding. Try to make your tests to pass
      locally before pushing it to the server. **Do not abuse the
      autograding!**
4. **Never remove provided files!** Some data file and input files are
   essential in testing and autograding.

## Grading
- Breakdown of Grades:
    - 50 pts GitHub auto-grading
- Auto-grading results can be checked at the top of this document like as a
  badge ***40/50***.
- View details:
    1. On your GitHub repo page, Click the :arrow_forward: **Actions** tab to
       see your graded results.
    1. If it isn't a green check mark (:heavy_check_mark:) then at least part of
       the testing failed.
    1. Click the commit message for the failing version then click "Autograding"
       on the left side of the page.
    1. Follow the :x: path and expand things to see what errors exist.
    1. It is usually **education/autograding@v1** and you can expend this path to
       view the detail.
