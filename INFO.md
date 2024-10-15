- Everything is extracted from https://www.w3schools.com/cpp/default.asp

# WHAT IS C++?

1. C++ is a cross-platform language that can be used to create high-performance applications.
2. C++ was developed by Bjarne Stroustrup, as an extension to the C language.
3. C++ gives programmers a high level of control over system resources and memory.
4. The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.

# WHY USE C++?

1. C++ is one of the world's most popular programming languages.
2. C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.
3. C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.
4. C++ is portable and can be used to develop applications that can be adapted to multiple platforms.
5. C++ is fun and easy to learn!
6. As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.

# DIFFERENCE BETWEEN C AND C++

1. C++ was developed as an extension of C, and both languages have almost the same syntax.
2. The main difference between C and C++ is that C++ support classes and objects, while C does not.

# NOTES

## SYNTAX

- "#include ..." kind of imports a library
- "using ..." is also a kind of library but from the actual language, i think
- you can ommit the "using ..." and put it in the code like this

  - Example

    ```cpp
    using namespace std

    std::cout >> ...
    ```

## OUTPUT

### PRINT LINES

- To output (print text) we use "cout" toghether with <<
- As many as we want can be used
- "cout" doesn't create a new line at the end of the output

### NEW LINES

- To insert a new line we use "\n" at the end of the output

  - cout << "Hello world \n";

- Two "\n" characters after each other will create a blank line

- Another way to insert a new line is with the "endl" manipulator
  - cout << "Hello world" << endl;

## COMMENTS

### SINGLE-LINE COMMENTS

- To insert a comment we use "//"

### MULTI-LINE COMMENTS

- To insert a comment we use "/_" and "_/"
- Any text between /_ and _/ will be ommited by the compiler

## VARIABLES

- int --> stores integers
- double --> stores floating point numbers
- char --> stores single characters, between single quotes --> ex. 'B'
- string --> stores text, between double quotes --> ex. "Hello World"
- bool --> stores values with two states, true or false

### DECLARE VARIABLES

#### Syntax

type variableName = value;

### DISPLAY VARIABLES

- We can display (print) variables using "cout"

#### Example

int myAge = 18;
cout << "I am " << myAge << " years old.";

### ADD VARIABLES TOGHETHER

- To add variables toghether we can use the "+" operator

#### Example

int x = 5;
int y = 6;
int sum = x + y;
cout << sum;

### DECLARE MULTIPLE VARIABLES

- To declare more than one variable at the same time, use a comma-separated list

#### Example

int x = 5, y = 6, z = 50;
cout << x + y + z;

### ONE VALUE TO MULTIPLE VARIABLES

#### Example

int x, y, z;
x = y = z = 50;
cout << x + y + z;

### INDENTIFIERS

- All C++ variables must be identified with unique names
- These unique names are called identifiers

#### General Rules

1. Names can contain letters, digits and underscores
2. Names must begin with a letter or an underscore
3. Names are case-sensitive (myVar and myvar are different variables)
4. Names cannot contain whitespaces or special characters like !, #, %, etc
5. Reserved words (like C++ keywords, such as int) cannot be used as names

### CONSTANTS

- When we don't want others, or ourselves, to change existing variables values we use the "const" keyword.

#### Example

const int myNum = 15; // myNum will always be 15
myNum = 10; // error: assignment of read-only variable 'myNum'

#### Notes on constants

- When we declare a constant variable, it must be assigned with a value

##### Example

const int minutesPerHour;
minutesPerHour = 60; // error

## USER INPUT

- "cin" is used to get user input
- cin is a predefined variable that reads data from the keyboard with the extraction operator (>>)

#### Example

int x;
cout << "Type a number: "; //Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value

#### Good to know

- cout is pronounced "see-out", for output
- cin is pronounced "see-in", for input

## DATA TYPES

### BASIC DATA TYPES

- boolean --> 1 byte --> Stores true or false values
- char --> 1 byte --> Stores a single character / letter / number, or ASCII values
- int --> 2 or 4 bytes --> Stores whole numbers
- float --> 4 bytes --> Stores fractional numbers. Sufficient for storing 6 - 7 decimal digits
- double --> 8 bytes --> Stores fractional numbers. Sufficient for storing 15 decimal digits

#### Scientific Numbers

- A floating point number can also be a scientific number with an "e" to indicate the power of 10

##### Example

float f1 = 35e3;
double d1 = 12E4;

#### Strings

- To use strings, we must include an additional header file in the source code, the <string> library

##### Example

"# include <string>
string greeting = "hello";
cout << greeting;

## OPERATORS

### ARITHMETIC OPERATORS

| Operator | Name           | Description                            | Example |
| -------- | -------------- | -------------------------------------- | ------- |
| +        | Addition       | Adds together two values               | x + y   |
| -        | Substraction   | Substracts one value from another      | x - y   |
| \*       | Multiplication | Multiplies two values                  | x \* y  |
| /        | Division       | Divides one value by another           | x / y   |
| %        | Modulus        | Returns the division remainder         | x % y   |
| ++       | Increment      | Increases the value of a variable by 1 | ++ x    |
| --       | Decrement      | Decreases the value of a variable by 1 | -- y    |

### ASSIGNMENT OPERATORS

- They are used to assign values to variables

#### Assignment operatror

- It adds a value to a variable
- It's the traditional `cpp=`

#### Addition assignment operator

- It adds a value to a variable

```cpp
    int x = 10;
    x += 5;
```

| Operator | Example |
| -------- | ------- | --- | --- |
| =        | x = 3   |
| +=       | x += 3  |
| -=       | x -= 3  |
| \*=      | x \*= 3 |
| /=       | x /= 3  |
| %=       | x %= 3  |
| &=       | x &= 3  |
|          | =       | x   | = 3 |
| ^=       | x ^= 3  |
| >>=      | x >> 3  |
| <<=      | x << 3  |

### COMPARISON OPERATORS

- They are used to compare two values
- The return value of a comparison is either `1` or `0`, true or false
- A list of all comparison operators

| Operator | Name                     | Example |
| -------- | ------------------------ | ------- |
| ==       | Equal to                 | x == y  |
| !=       | Not equal to             | x != y  |
| >        | Greater than             | x > y   |
| <        | Less than                | x < y   |
| >=       | Greater than or equal to | x >= y  |
| <=       | Less than or equal to    | x<= y   |

### LOGICAL OPERATORS

- You can also test for true or false values with logical operators

| Operator | Name        | Description                                             | Example            |
| -------- | ----------- | ------------------------------------------------------- | ------------------ | --------------------------------------------- | ----- | --- | ----- |
| &&       | Logical and | Returns true if both statements are true                | x < 5 && x < 10    |
|          |             |                                                         | Logical or         | Returns true if one of the statements is true | x < 5 |     | x < 4 |
| !        | Logical not | Reverse the result, returns false if the result is true | !(x < 5 && x < 10) |

## STRINGS

- Strings are used for storing text or characters
- A STRING variable contains a collection of characters surrounded by double quotes:

```cpp
    string greeting = "Hello";
```

- To use strings, you must include an additional header file in the source code, the <string> library:

```cpp
    # include <string>

    string greeting = "Hello";
```

### CONCATENATION

- The + operator can be used between strings to add them together and make a new string. This is called CONCATENATION

```cpp
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;
```

#### Append

- A string in C++ is usually an object, which contains functions that can perform certain operations on strings. For example, you could also concatenate strings with the append() function:

```cpp
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
```

- A list of other useful string functions can be found in https://www.w3schools.com/cpp/cpp_ref_string.asp

### NUMBERS AND STRINGS

- C++ uses the "+" operator for both addition and concatenation
- Numbers are added. Strings are concatenated

```cpp
    // If you add two numbers, the result will be a number
    int x = 10;
    int y = 20;
    int z = x + y; // z will be 30 (and integer)
```

```cpp
    // If you add two strings, the result will be a string concatenation
    string x = "10";
    string y = "20";
    string z = x + y; // z will be 1020 (a string)
```

```cpp
    // If you try to add a number to a string, an error occurs
    string x = "10";
    int y = 20;
    string z = x + y; // You can't add this (error)
```

### STRING LENGTH

- To get the length of a string, we use the length() function:

```cpp
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The lenght of the txt string is: " << txt.length();
```

- There's also the size() function to get the length of a string, it's just an alias to the length() function:

```cpp
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The lenght of the txt string is: " << txt.size();
```

### ACCESS STRINGS

- You can access the characters in a string by referring to its index number inside square brackets []:

```cpp
    string myString = "Hello";
    cout << myString[0];
    // Outputs H
```

- To print the last character of a string, you can use the following code:

```cpp
    string myString = "Hello";
    cout << myString[myString.length() - 1];
    // Outputs "o"
```

#### Change string characters

- To change the value of a specific character in a string, refer to the index number, and use single quotes:

```cpp
    string myString = "Hello";
    myString[0] = 'J';
    cout myString;
    // Outputs Jello instead of Hello
```

#### The at() function

- The <string> library also has an at() function that can be used to access characters in a string:

```cpp
    string myString = "Hello";
    cout << myString; // Outputs Hello

    cout << myString.at(0); // First character
    cout << myString.at(1); // Second character
    cout << myString.at(myString.length() - 1); // Last character

    myString.at(0) = 'J';
    cout << myString; // Outputs Jello
```

### SPECIAL CHARACTERS

- Because strings must be written within quotes, C++ will missunderstand this string, and generate an error:

```cpp
    string txt = "We are the so-called "Vikings" from the north.";
```

- The solution to avoid this problem, is to use the backslash escape character.
- The backlash (\) escape character turns special characters into string characters:

| Escape character | Result | Description  |
| ---------------- | ------ | ------------ |
| \'               | '      | Single quote |
| \"               | "      | Double quote |
| \\               | \      | Backslash    |

```cpp
    string txt = "We are the so-called \"Vikings\" from the north.";
```

```cpp
    string txt = "It\'s alright.";
```

```cpp
    string txt = "The character \\ is called backslash.";
```

- Other popular escape characters in C++ are:

| Escape Character | Result   |
| ---------------- | -------- |
| \n               | New Line |
| \t               | Tab      |

### USER INPUT STRINGS

- It's possible to use the extraction operator >> on cin to store a string entered by a user:

```cpp
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    cout << "Your name is: " << firstName;

    // Type your fist name: John
    // Your name is: John
```

- However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single word (even if you type many words):

```cpp
    string fullName;
    cout << "Type your full name: ";
    cin >> fullName;
    cout << "Your full name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John
```

- For the example below, you would expect the program to print "John Doe", but it only prints "John".
- That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as the second:

```cpp
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John Doe
```

### OMITTING NAMESPACE

- You might see some C++ programs that run without the standard namespace library. The "using namespace std" line can be omitted and replaced with the "std" keyword, followed by the "::" operator for "string" (and "cout") objects:

```cpp
    # include <iostream>
    # include <string>
    // using namespace std;

    int main() {
        std::string greeting = "Hello";
        std::cout << greeting;
        return 0;
    }
```

### C-STYLE STRINGS

- C-Style strigns are created with the "char" type instead of "string".

- The name comes from the C language, which, unlike many other programming languages, does not have a "string" type for easily creating string variables. Instead, you must use the "char" type and create an array of characters to make a "string" in C.

- As C++ was developed as an extension of C, it continued to support this way of creating strings in C++:

```cpp
    string greeting1 = "Hello"; // Regular string
    string greeting2 = "Hello"; // C-Style string (an array of characters)
```

- It's more convinient to use the standard "string" type. However, one reason some users continue to use C-Style strings is that they have access to functions from the C standard library.
- A list of all C-Style string functions can be found here: https://www.w3schools.com/cpp/cpp_ref_cstring.asp

## MATH

- C++ has many functions to perform mathematical tasks on numbers.

### Max and Min

- The "max(x,y)" function can be used to find the highest value of x and y.

```cpp
    cout << max(5, 10);
```

- And the "min(x,y)" function can be used to find the lowest value of x and y:

```cpp
    cout << min(5,10);
```

### <cmath> HEADER

- Other functions, such as "sqrt" (square root), "round" (rounds a number) and "log" (natural logarithm), can be found in the <cmath> header file:

```cpp
    // Include the cmath library
    #include <cmath>

    cout << sqrt(64);
    cout << round(2.6);
    cout << log(2);
```

- For a complete reference of Math functions, go to this page: https://www.w3schools.com/cpp/cpp_ref_math.asp

## BOOLEANS

- C++ has a data type (bool) which can take the values "true" (1) or "false" (0).

### BOOLEAN VALUES

- A boolean variable is declared with the "bool" keyword and can only take the values "true" or "false":

```cpp
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun; // Outputs 1 (true)
    cout << isFishTasty; // Outputs 0 (false)
```

### BOOLEAN EXPRESSION

- A Boolean Expression returns a boolean value that is either 1 (true) or 0 (false).
- This is useful to build logic, and find answers.
- You can use a comparison operator, such as the greater than (>) operator, to find out if an expression (or variable) is true or false:

```cpp
    int x = 10;
    int y = 9;
    cout << (x > y); // Returns 1 (true), because 10 is higher than 9
```

- We can also check if an expression is equal to something, with the equal to (==) operator:

```cpp
    int x = 10;
    cout << (x == 10); // Returns 1 (true), because the value of x is equal to 10
```

#### Real life example

```cpp
    int myAge = 25;
    int votingAge = 18;

    cout << (myAge >= votingAge); // Returns 1 (true)
```

- We can also do that with an if...else statement, so we can perform differend actions depending on the result:

```cpp
    # include <iostream>
    using namespace std;

    int main() {
        int myAge = 25;
        int votingAge = 18;

        if (myAge >= votingAge) {
            cout << "Old enough to vote!";
        } else {
            cout << "Not old enough to vote.";
        }
        return 0;
    }

    // Outputs: Old enough to vote!
```

## CONDITIONS

- C++ supports the usual logical conditions from mathematics:
  - Less than: a < b
  - Less than or equal to: a <= b
  - Greater than: a > b
  - Greater than or equal to: a >= b
  - Equal to a == b
  - Not Equal to: a != b
- You can use these conditions to perform different actions for different decisions.

- C++ has the following conditional statements:
  - Use if to specify a block of code to be executed, if a specified condition is true
  - Use else to specify a block of code to be executed, if the same condition is false
  - Use else if to specify a new condition to test, if the first condition is false
  - Use switch to specify many alternative blocks of code to be executed

### THE IF STATEMENT

- Use the if statement to specify a block of C++ code to be executed if a condition is true.

#### Syntax

```cpp
if (condition) {
    // block of code to be executed if the condition is true
}
```

#### Examples

```cpp
# include <iostream>
using namespace std;

int main() {
    if (20 > 18) {
        cout << "20 is greater than 18";
    }
    return 0;
}
```

```cpp
# include <iostream>
using namespace std;

int main() {
    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x is greater than y";
    }
}
```

### THE ELSE STATEMENT

- Use the else statement to specify a block of code to be executed if the condition is false

#### Syntax

```cpp
if (condition) {
    // block of code to be executed if the condition is true
} else {
    // block of code to be executed if the condition is false
}
```

#### Example

```cpp
# include <iostream>
using namespace std;

int main() {
    int time = 20;
    if (time < 18) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
    return 0;
}

// Outputs "Good evening."
```

### THE ELSE IF STATEMENT

- Use the else if statement to specify a new condition if the first condition is false.

#### Syntax

```cpp
if (condition1) {
    // block of code to be executed if the condition1 is true
} else if (condition2) {
    // block of code to be executed if the condition1 is false and condition2 is true
} else {
    // block of code to be executed if the condition1 is false and condition2 is false
}
```

#### Example

```cpp
# include <iostream>
using namespace std;

int main() {
    int time = 22;
    if (time < 10) {
        cout << "Good morning.";
    } else if (time < 20) {
        cout << "Good day.";
    } else {
        cout << "Good evening";
    }
    return 0;
}

// Outputs "Good evening."
```

### SHORT HAND IF...ELSE (TERNARY OPERATOR)

- There is also a short-hand if else, which is known as the "ternary operator" because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

#### Syntax

```cpp
variable = (condition) ? expressionTrue : expressionFalse;
```

- Instead of writing:

```cpp
int time = 20;
if (time < 18) {
    cout << "Good day.";
} else {
    cout << "Good evening.";
}
```

- You can simply write:

```cpp
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening";
cout << result;
```

## SWITCH STATEMENTS

- Use switch statement to select one of many code blocks to be executed.

#### Syntax

```cpp
switch(expression) {
    case x:
        // code block
        break;
    case y:
        // code block
        break;
    default:
        // code block
}
```

- How it works:

  - The switch expression is evaluated one
  - The value of the expression is compared with the values of each case
  - If there is a match, the associated block of code is executed
  - The break and default keywords are optional, and will be described later on.

- The example below uses the weekday number to calculate the weekday name:

```cpp
# include <iostream>
using namespace std;

int main() {
    int day = 4;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
             break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    return 0;
    }
}
// Outputs "Thursday" (day 4)
```

### THE BREAK KEYWORD

- When C++ reacher a "break" keyword, it breaks out of the switch block.
- This will stop the execution of more code and case testing inside the block.
- When a match is found, and the job is done, it's time for a break. There is no need for more testing.

### THE DEFAULT KEYWORD

- The "default" keyword specifies some code to run if there is no case match:

```cpp
int day = 4;
switch (day) {
    case 6:
        cout << "Today is Saturday";
        break;
    case 7:
        cout << "Today is Sunday";
        break;
    default:
        cout << "Looking forward to the Weekend";
}
// Outputs "Looking forward to the Weekend"
```

## WHILE LOOP

- The "while" loop loopts through a block of code as long as a specified condition is true

#### Syntax

```cpp
while (condition) {
    // code block to be executed
}
```

#### Example

- In this example, the code in the loop will run as long as the variable "i" is less than 5

```cpp
include <iostream>
using namespace std;

int i = 0;
while (i < 0) {
    cout << i << "\n";
    i ++;
}
```

### DO / WHILE LOOP

- The do / while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

#### Syntax

```cpp
do {
    // code block to be executed
}
while (condition);
```

#### Example

- The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:

```cpp
include <iostream>
using namespace std;

int i = 0;
do {
    cout << i << "\n";
    i ++;
}
while (i < 5);
```

## FOR LOOP

- When you know exactly how many times you want to loop thorugh a block of code, use the for loop instead of a while loop

#### Syntax

```cpp
for (statement 1; statement 2; statement 3) {
    // code block to be executed
}
```

1. Statement 1 is executed (one time) before the execution of the code block
2. Statement 2 defines the condition for executing the code block
3. Statement 3 is executed (every time) after the code block has been executed

#### Example

- This example will print the numbers from 0 to 4:

```cpp
include <iostream>
using namespace std;

for (int i = 0; i < 5; i ++) {
    cout << i << "\n";
}
```

```cpp
include <iostream>
using namespace std;

for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
}
```

### Nested Loops

- It is also possible to place a loop inside another loop. This is called a nested loop.
- The "inner loop" will be executed one time for each iteration of the "outer loop":

#### Example

```cpp
include <iostream>
using namespace std;

// Outer loop
for (int i = 1; i <= 2; i ++) {
    cout << "Outer: " << i << "\n"; // Executes 2 times

    // Inner loop
    for (int j = 1; j <= 3; j ++) {
        cout << "Inner: " << j << "\n"; // Executes 6 times (2 * 3)
    }
}
```

### The Foreach Loop

- There is also a for-each loop, which is used exclusively to loop through elements in an array (or other data sets):

#### Syntax

```cpp
for (type variableName : arrayName) {
    // code block to be executed
}
```

#### Example

```cpp
include <iostream>
using namespace std;

int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
    cout << i << "\n";
}
```

## BREAK AND CONTINUE

### BREAK

- The break statement can be used to jump out of a loop.

#### Example

- This example jumps out of the loop when i is equal to 4:

```cpp
include <iostream>
using namespace std;

for (int i = 0; i < 10; i ++) {
    if (i == 4) {
        break;
    }
    cout << i << "\n";
}
```

### CONTINUE

- The continue operator breaks one iteration (in the loop), if a specific condition occurs, and continues with the next iteration in the loop.

#### Example

- This example skips the value of 4:

```cpp
include <iostream>
using namespace std;

for (int i = 0; i < 10; i ++) {
    if (i == 4) {
        continue;
    }
    cout << i << "\n";
}
```

### BREAK AND CONTINUE IN WHILE LOOP

- You can also use break and continue in while loops

#### Break example

```cpp
include <iostream>
using namespace std;

int i = 0;
while (i < 10) {
    cout << i << "\n";
    i ++;
    if (i == 4) {
        break;
    }
}
```

#### Continue example

```cpp
include <iostream>
using namespace std;

int i = 0;
while (i < 10) {
    cout << i << "\n";
    i ++;
    if (i == 4) {
        continue;
    }
}
```

## ARRAYS

- Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

- To declare an array:
  1. Define de variable type
  2. Specify the name of the array followed by square brackets
  3. Specify the number of elements it should store.

```cpp
string cars[4];
```

- We have now declared a variable that holds an array of four strings. To insert values to it, we can use the array literal:
  - Place the values in a comma-separated list, inside curly braces:

```cpp
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
```

- To create an array of 3 integers, you could write:

```cpp
int myNum[2] = {10, 20, 30};
```

### ACCESS THE ELEMENTS OF AN ARRAY

- You can access an array by referring to the index number inside square brackets [];
- This example accesses the value of the first element in cars:

```cpp
include <iostream>
using namespace std;

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
// Outputs Volvo
```

### CHANGE AN ARRAY ELEMENT

- To change the value of a specific element, refer to the index number:

```cpp
cars[0] = "Opel";
```

#### Example

```cpp
include <iostream>
using namespace std;

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];
// Now outputs Opel instead of Volvo
```

### LOOP THROUGH AN ARRAY

- You can loop through an array with the for loop
- The following example outputs all the element in the cars array:

```cpp
# include <iostream>
using namespace std;

int main() {
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n";
    }
    return 0;
}
```

```cpp
# include <iostream>
using namespace std;

int main() {
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (int i = 0; i < 5; i++) {
        cout << i << "=" << cars[i] << "\n";
    }
    return 0;
}
```

#### Foreach Loop

```cpp
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
```

### OMMIT ARRAY SIZE

- In C++ you don't have to specify the size of the array. The compiler can determine the size of the array based on the number of inserted values:

```cpp
string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements
```

- However, indicating the size of the array is considered "good practice", because it will reduce the chance of errors in your program.

### OMMIT ELEMENTS IN DECLARATION

- It is also possible to declare an array without specifying the elements on declaration, and add them later:

```cpp
string cars[5];
cars[0] = "Volvo";
cars[1] = "BMW";
...
```

### GET THE SIZE OF AN ARRAY

- To get the size of an array, you can use the sizeof() operator:

```cpp
int myNumbers[5] = {10,20,30,40,50};
cout << sizeof(myNumbers);
```

- RESULT --> 20

- Why is the result 20 instead of 5?

  - It's because the sizeof() operator returns the size of a type in bytes.

- An int type is usually 4 bytes, so from the example, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
- To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:

```cpp
# include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10,20,30,40,50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;

    return 0;
}
```

- RESULT --> 5

### LOOP THROUGH AN ARRAY WITH sizeof()

- In the Arrays and Loops Chapter, we wrote the size of the array in the loop condition (i < 5). This is not ideal, since it will only work for arrays of a specified size.
- However, by using the sizeof() approach from the example above, we can now make loops that work for arrays of any size, which is more sustainable.

- Instead of writing:

```cpp
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
}
```

- It is better to write:

```cpp
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
    cout << myNumbers[i] << "\n";
}
```

### MULTI-DIMENSIONAL ARRAYS

- A multidimensional array is an array of arrays.
- To declare a multidimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have.

```cpp
#include <iostream>
using namespace std;

int main() {
    string letters[2][4];

    return 0;
}
```

- As with ordinary arrays, you can insert values with an array literal - a comma-separated list inside curly braces. In a multidimensional array, each element in an array literal is another array literal.

```cpp
#include <iostream>
using namespace std;

int main() {
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    return 0;
}
```

- Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions.
- Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes. The following array has three dimensions:

```cpp
#include <iostream>
using namespace std;

int main() {
    string letters[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };

    return 0;
}
```

#### ACCESS THE ELEMENTS OF A MULTI-DIMENSIONAL ARRAYS

- To access the elements of a multidimensional array, specify an index number in each of the array's dimensions.
- This statement accesses the value of the first element in the first row (0) and third column (2) of the letters array.

```cpp
#include <iostream>
using namespace std;

int main() {
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    cout << letters[0][2]; // Outputs "C"

    return 0;
}
```

#### CHANGE ELEMENTS IN A MULTI-DIMENSIONAL ARRAY

- To change the value of a multidimensional array, refer to the index number of the element in each of the dimensions:

```cpp
#include <iostream>
using namespace std;

int main() {
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    letters[0][0] = "Z";

    cout << letters[0][0]; // Now outputs "Z" instead of "A"

    return 0;
}
```

#### LOOP THROUGH A MULTI-DIMENSIONAL ARRAY

- To loop through a muti-dimensional array, you need one loop for each of the array's dimensions.
- The following example outputs all elements in the letters array:

```cpp
#include <iostream>
using namespace std;

int main() {
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    for (int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {
            cout  << letters[i][j] << "\n";
        }
    }

    return 0;
}
```

#### WHY MULTI-DIMENSIONAL ARRAYS?

- Multi-dimensional arrays are good at representing grids. This example shows a practical use for them. In the following example we use a multidimensional array to represent a small game of battleship.

```cpp
# include <iostream>
using namespace std;

int main() {
    // we put 1 to indicate there is a ship
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}
    };

    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
        int row, column;

        // Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in these coordinates
        if (ships[row][column]) {
            // If the player hit a ship, remove it by setting value to zero
            ships[row][column] = 0;

            // Increase the counter
            hits++;

            // Tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4-hits) << " left.\n\n";
        } else {
            // Tell the player that they have missed
            cout << "Miss\n\n";
        }
        // Count how many turns the player has taken
        numberOfTurns++;
    }
    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
}

```

## STRUCTURES

- Structures (also called structs) are a way to group several variables into one place. Each variable in the structure is known as a member of the structure
- Unlike an array, a structure can contain many different data types (int, string, bool, etc.)

### CREATE A STRUCTURE

- To create a structure, use the `struct` keyword and declare each of its members inside curly braces
- After the declaration, specify the name of the structure variable (myStructure in the example below)

```cpp
struct {                // Structure declaration
    int myNum;          // Member (int variable)
    string myString;    // Member (string variable)
} myStructure;          // Structure variable
```

### ACCESS STRUCTURE VARIABLES

- To access members of a structure, use the dot syntax(.):

```cpp
// Create a structure variable called myStructure
struct {
    int myNum;
    string myString;
} myStructure;

// Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";
```

### ONE STRUCTURE IN MULTIPLE VARIABLES

- You can use a comma (,) to use one structure in two different variables
- One structure to represent two cars:

```cpp
# include <iostream>
using namespace std;

struct {
    string brand;
    string model;
    int year;
} myCar1, myCar2;
// We can add variables by separating them with a comma

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Audi";
myCar2.model = "A1";
myCar2.year = 2015;

// Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
```

### NAMED STRUCTURES

- By giving a name to the structure, you can treat it as a data type. This means you can create variables with this structure anywhere in the program at any time.
- To create a named structure, put the name of the structure right after the `struct` keyword

```cpp
struct myDataType { // This structure is named "myDataType"
    int myNum;
    string myString;
};
```

- To declare a variable that uses the structure, use the name of the structure as the data type of the variable

```cpp
myDataType myVar;
```

- Use one structure to represent two cars

```cpp
#include <iostream>
using namespace std;

// Declare a structure called car
struct car {
    string brand;
    string model;
    int year;
}

int main() {
    // Create a car structure and store it in myCar1
    car myCar1;
    myCar1.brand = "Ford"
    myCar1.model = "Puma"
    myCar1.year = 2021

    // Create another car structure and store it in myCar2
    car myCar2;
    myCar2.brand = "Peugeot"
    myCar2.model = "206"
    myCar2.year = 1998

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}
```

## ENUMS
- An **enum** is a special type that represents a group of constants (unchangable values).
- To create an enum, use the ```enum``` keyword, followed by the name of the enum, and separate the enum items with a comma.
```cpp
enum Level {
    LOW,
    MEDIUM,
    HIGH
};

// The last item does not need a comma
// It is considered a good practice to use uppercase, but it is not recommended
// Enum is short for "enumerations", which means "specifically listed"
```

- To access the enum, you must create a variable of it.
- Inside the ```main()``` method, specify the ```enum``` keyword, followd by the name of the enum (```Level```) and then the name of the enum variable (```myVar``` in this example)
```cpp
enum Level myVar;
```
- Now that you have created an enum variable (```myVar```), you can assign a value to it.
- The assigned value must be one of the items (```LOW```,```MEDIUM``` OR ```HIGH```)
```cpp
enum Level myVar = MEDIUM;
```
- By default, the first item (```LOW```) has the value ```0```, the second (```MEDIUM```) has the value ```1```, etc.
- If you now try to print myVar, it will output ```1```. which represents ```MEDIUM```
```cpp
#include <iostream>
using namespace std;

int main() {
    // Create an enum variable and assign a value to it
    enum Level myVar =  MEDIUM;

    // Print the enum variable
    cout << myVar;

    return 0;
}
```
### CHANGE VALUES
- As yoy know, the first item of an enum has the value 0. The second has the value 1, and so on.
- To make more sense of the values, you can easily change them
```cpp
enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};
```
```cpp
int main() {
    enum Level myVar = MEDIUM;
    cout << myVar; // Now outputs 50
    
    return 0;
}
```
- Note that if you assign a value to one specific item, the next item will update their numbers accordingly
```cpp
enum Level {
    LOW = 5;
    MEDIUM, // Now 6
    HIGH // Now 7
};
```
### ENUM IN A SWITCH STATEMENT
- Enums are often used in switch statements to check for corresponding values
```cpp
#include <iostream>
using namespace std;

enum Level {
    LOW = 1;
    MEDIUM;
    HIGH
};

int main() {
    enum Level myVar = MEDIUM;

    switch (myVar) {
        case 1:
        cout << "Low Level";
        break;
        case 2:
        cout << "Medium Level";
        break;
        case 3:
        cout << "High Level";
        break;
    }
    return 0;
}
```
#### WHEN TO USE ENUMS?
- Enums are used to give names to constants, which makes the code easier to read and maintain
- Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.

## C++ REFERENCES
### CREATING REFERENCES
