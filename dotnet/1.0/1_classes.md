### Introduction to classes

# Table of contents
- Reference types
- Declaring classes
- Creating objects
- Constructors and initialization
- Class inheritance
- C# language specification



## Reference types

# What do I know before I start reading?
- There are two types in the C# language
 - Value and a reference
- A value type represents data that is of a fixed size of bytes and can live on the stack
  this means that it can be accessed very quickly and has little cost in terms of performance.
  When we want to use a variable that is a value type, we are referring to the full value of the type.
- A reference type is allocated on the heap, as opposed to the stack. It has a variable size.
  A string is an example of a reference type. When we declare a string, what we are actually doing is
  creating an array and allocating heap memory to store it. Then we allocate stack memory to store the
  reference into a variable. When we want to get the value of the string, we use its reference to 'point'
  to its actual value in the heap allocated memory

# What is the actual definition?
- Seems to be a more conceptual explanation
- A type that is defined as a class is a reference type
- When a reference type is declared at run time, it holds the value of null
- It will remain null until it is explicitly instantiated with the new constructor
- It is allocated onto the heap, called the managed heap, and the reference is stored on the stack
- It is called the managed heap because the CLR (Garbage Collector) is managing it and will clear
  up the allocated space when it deems it necessary
- This is called Automatic memory management


## Declaring classes

# What do I know before I start reading?
- A class has a constructor that determines its initial values
- The constructor can take any number of variables
- The class can also forgo a constructor and have access-er and setter methods per property

# What is the actual definition?
- Classes are declared using the class keyword followed by a unique identifier

public class SomeObject

- The access modifier is optional
- The default access modifier is internal
- Everything contained in the class is called the class members

## Creating objects

- An object is not a class, an object is an instance of a class
- We use the new keyword to create an object
- You can create an object reference without creating the object itself

Customer object2;

- You can create multiple references to the same object

Customer object1 = new Customer();
Customer object2 = object1;

- This means that if you modify anything under object2 then the underlying object1 and object2 will change
  because it is only a reference to the same object data on the managed heap

## Constructors and initialization

# What I know
- A constructor is a method that is run when you create an object based on the class
- It can accept 0 to any number of parameters, usually to give the class properties their initial values

# What there is to know
- When creating an object, we need to initialize the property values
- There are several ways to do this
 - Accept default values
 - Field initializers
 - Constructor parameters
 - Object initializers

- You can set the default value of a field itself
private in _capacity = 10;

- From within a constructor
public Container( int capacity ) => _capacity = capacity;

- From a primary constructor
public Container( int capacity )
{
    private int _capacity = capacity;
}

- You can also use the required keyword
public required string LastName { get; set; }
- Then you set the values in the object initialization
var p1 = new Person() { FirstName = "Grace", LastName = "Hopper" };

## Class inheritance

# What I know
- You can have a class inherit from another existing class and based on the access modifiers in the base class
  you can access the class fields within the child class
- There are different types of base classes, such as an abstract class
 - Abstract class
  - Specifies some base functionality, but the inheriting class can override the class functionality

# What there is to know
- A class can inherit from any other class, provided that it is not marked as sealed
- A class can inherit as many interfaces as you like
- Since a class can only inherit from one base class, then to achieve multiple inheritance, then you
  would need to have a hierarchy of class inheritance where there is a stack of base classes

- An abstract class contains abstract methods that have no implementation (Like an interface)
  But the field properties include a mix of properties and functions that contain implementation

- Sealed
 - A class can also be marked as 'sealed' which means that it cannot be used as a base class in inheritance
