## C++ Bank 

Simple OOP bank system in C++. It demonstrates some OOP concepts in C++ like inheritance, abstraction, encapsulation, and polymorphism.

You can read the tutorial here: https://gist.github.com/wilsnd/708f6b99c1a623a47621aa6e0071b383

## Project Structure

```angular2html
bank/
├── include/
│   ├── Account.h         
│   ├── SavingsAccount.h 
│   └── Bank.h          
├── src/
│   ├── Account.cpp      
│   ├── SavingsAccount.cpp 
│   ├── Bank.cpp         
│   └── main.cpp         
├── test/
│   ├── AccountTest.cpp  
│   ├── SavingsTest.cpp 
│   └── test_main.cpp   
└── Makefile  
```

## Usage 

Make sure you have the `.cmake` file. 

Compiling:
```
mkdir build
cd build
cmake ..
make
```

Run the app: 
``` 
./bank_app
```

Run the test:
```
./bank_tests
```

## Learning Outcomes 

This project shows OOP concepts such as:
- Inheritance 
- Polymorphism 
- Encapsulation 
- Operator Overloading 
- Smart Pointers
