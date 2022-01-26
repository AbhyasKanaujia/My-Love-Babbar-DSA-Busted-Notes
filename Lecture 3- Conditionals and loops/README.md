# Conditionals & Loops

## Conditionals

_Agar wali cheez_ is conditionals. In flow chart, it is shown with a conditional block that is made in diamond shape.

### Example

#### Given two numbers which is larger?

```C
IP -> a, b
OP -> a > b -> "Answer is A"
      b > A -> "Answer is B"
```

Use **if statement**

### If Statement

#### Syntax

```cpp
if(condition) {
  // true block
}
```

#### Solution of larger number using if

```cpp
if(a > b) {
  cout << "Answer is A;
}
```

```cpp
if(b > a) {
  cout << "Answer is B"
}
```

### If-Else Block

```cpp
if(condition) {
  // true block
} else {
  // false block
}
```

#### Given a number tell if its positive or not

```cpp
if(a > 0)
  cout << "Positive";
else
  cout << "Not Positive";
```

