# CGPA Rank List System in C

C program to calculate **CGPA** and generate a **rank list** for students based on subject credits and marks.

---

## Features

* Supports multiple subjects and students
* Credit-based CGPA calculation
* Automatic rank list generation
* Uses structures, functions, arrays, and sorting

---

## Concepts Used

* Structures
* Functions
* Arrays
* Loops and conditional statements
* Sorting logic

---

## How the Program Works

1. User enters the total number of subjects
2. Subject names and credits are entered
3. User enters the total number of students
4. For each student:

   * Name is entered
   * Marks for each subject are entered
   * CGPA is calculated using credits
5. Students are sorted based on CGPA
6. Rank list is displayed

---

## Sample Input

```
Total subjects: 3

Enter the Detailes of Each subjects
Subject 1 : Math
Credits : 4
Subject 2 : Physics
Credits : 3
Subject 3 : Chemistry
Credits : 3

Total no of students : 2

Enter the detailes of a student
Student 1
Name : Alan
Enter the mark of student(out of 100)
Math : 90
Physics : 85
Chemistry : 80

Student 2
Name : Akhil
Enter the mark of student(out of 100)
Math : 75
Physics : 60
Chemistry : 70
```

---

## Sample Output

```
Rank List
Rank        Name           CGPA
1           Alan           8.80
2           Akhil          7.10
```


