# Lab: Introduction to Testing with `_ASSERTE`

## 🎯 Learning Objectives
- Understand the purpose of unit testing in C++.  
- Learn how to use `_ASSERTE` to automatically check if functions behave correctly.  
- Practice writing and testing simple functions.  
- Apply testing to **game‑related examples**.  

---

## 📝 Starter Code

You are given starter code in Lab_Intro_to_testing_with_ASSERT.cpp, run the program and observe what happens.

---

## 📝 Part 1: Fix the Broken Assertion

- The line `_ASSERTE(7 * 6 == 41);` is **deliberately wrong**.  
- Fix it so the assertion is correct.  
- Hint: `7 * 6` should equal `42`.  

---

## 📝 Part 2: Implement `isEven`

- The function `isEven(int number)` currently always returns `true`.  
- Fix it so it correctly returns `true` if the number is even, and `false` otherwise.  


- Add at least **5 more test cases** in `main()`.  
- Test even numbers, odd numbers, and negative numbers.  

---

## 📝 Part 3: Distance Between Two Points

In games, we often need to calculate the distance between two points (e.g., player and enemy).  

1. Define a `Point` struct:  

```cpp
struct Point {
    float x, y;
};
```

2. Implement a function to compute the distance:  

```cpp
float distance(Point a, Point b) {
  //calculate and return the distance
}
```

3. Write tests with `_ASSERTE`:  

```cpp
Point p1 = {0, 0};
Point p2 = {3, 4};
_ASSERTE(distance(p1, p2) == 5.0f);   // 3-4-5 triangle

_ASSERTE(distance({0,0}, {0,0}) == 0.0f);
```

Add 4 more tests with different points

---

## 📝 Part 4: Point in Box

Another common game function is checking if a point lies inside a rectangular box.  

1. Define a `Box` struct:  

```cpp
struct Box {
    float xMin, yMin; 
    float xMax, yMax;
};
```

2. Implement the function:  

```cpp
bool isPointInBox(Point p, Box b) {
   // return true oif point is in box, false other wise
}
```

3. Write tests with `_ASSERTE`:  

```cpp
Box box = {0, 0, 10, 10};

_ASSERTE(isPointInBox({5, 5}, box) == true);   // inside
_ASSERTE(isPointInBox({0, 0}, box) == true);   // corner
_ASSERTE(isPointInBox({10, 10}, box) == true); // opposite corner
_ASSERTE(isPointInBox({-1, 5}, box) == false); // left of box
_ASSERTE(isPointInBox({5, 11}, box) == false); // above box
```

---

## 📝 Part 5: Reflection

Answer these questions in comments at the bottom of your code:

1. How did you test your functions in the past (e.g in 1st year)?
1. What happens if an assertion fails?  
2. Why is it useful to have the program stop immediately when a test fails?
4. What would happen if you removed all the assertions and only relied on manual testing?


---
