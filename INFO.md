- Everything is extracted from https://www.w3schools.com/cpp/cpp_operators.asp

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
* "#include ..." kind of imports a library
* "using ..." is also a kind of library but from the actual language, i think
* you can ommit the "using ..." and put it in the code like this
    * Example
        using namespace std

        std::cout>> ...

## OUTPUT
### PRINT LINES
* To output (print text) we use "cout" toghether with <<
* As many as we want can be used
* "cout" doesn't create a new line at the end of the output

### NEW LINES
* To insert a new line we use "\n" at the end of the output
  - cout << "Hello world \n";

* Two "\n" characters after each other will create a blank line

* Another way to insert a new line is with the "endl" manipulator
  - cout << "Hello world" << endl;

## COMMENTS
### SINGLE-LINE COMMENTS
* To insert a comment we use "//"

### MULTI-LINE COMMENTS
* To insert a comment we use "/*" and "*/"
* Any text between /* and */ will be ommited by the compiler

## VARIABLES
* int --> stores integers
* double --> stores floating point numbers
* char --> stores single characters, between single quotes --> ex. 'B'
* string --> stores text, between double quotes --> ex. "Hello World"
* bool --> stores values with two states, true or false

### DECLARE VARIABLES
#### Syntax
type variableName = value;

### DISPLAY VARIABLES
* We can display (print) variables using "cout"
#### Example
int myAge = 18;
cout << "I am " << myAge << " years old.";

### ADD VARIABLES TOGHETHER
* To add variables toghether we can use the "+" operator
#### Example
int x = 5;
int y = 6;
int sum = x + y;
cout << sum;

### DECLARE MULTIPLE VARIABLES
* To declare more than one variable at the same time, use a comma-separated list
#### Example
int x = 5, y = 6, z = 50;
cout << x + y + z;

### ONE VALUE TO MULTIPLE VARIABLES
#### Example
int x, y, z;
x = y = z = 50;
cout << x + y + z;

### INDENTIFIERS
* All C++ variables must be identified with unique names
* These unique names are called identifiers
#### General Rules
1. Names can contain letters, digits and underscores
2. Names must begin with a letter or an underscore
3. Names are case-sensitive (myVar and myvar are different variables)
4. Names cannot contain whitespaces or special characters like !, #, %, etc
5. Reserved words (like C++ keywords, such as int) cannot be used as names

### CONSTANTS
* When we don't want others, or ourselves, to change existing variables values we use the "const" keyword.
#### Example
const int myNum = 15; // myNum will always be 15
myNum = 10; // error: assignment of read-only variable 'myNum'

#### Notes on constants
* When we declare a constant variable, it must be assigned with a value
##### Example
const int minutesPerHour;
minutesPerHour = 60; // error

## USER INPUT
* "cin" is used to get user input
* cin is a predefined variable that reads data from the keyboard with the extraction operator (>>)
#### Example
int x;
cout << "Type a number: "; //Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value

#### Good to know
* cout is pronounced "see-out", for output
* cin is pronounced "see-in", for input

## DATA TYPES
### BASIC DATA TYPES
- boolean --> 1 byte --> Stores true or false values
- char --> 1 byte --> Stores a single character / letter / number, or ASCII values
- int --> 2 or 4 bytes --> Stores whole numbers
- float --> 4 bytes --> Stores fractional numbers. Sufficient for storing 6 - 7 decimal digits
- double --> 8 bytes --> Stores fractional numbers. Sufficient for storing 15 decimal digits

#### Scientific Numbers
* A floating point number can also be a scientific number with an "e" to indicate the power of 10
##### Example
float f1 = 35e3;
double d1 = 12E4;

#### Strings
* To use strings, we must include an additional header file in the source code, the <string> library
##### Example
"# include <string>
string greeting = "hello";
cout << greeting;

## OPERATORS
