https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/builtin-types/struct
### Structure types

## What I know
- Struct is a value type, so it lives on the stack
- It is similar to a class in that it contains multiple properties, but that is where the similarities end
- Since struct is a value type, its properties contain either references or values

## What there is to know
- It is a value type that encapsulates data and related functionality
 - This is different from my understanding so far.
 - I thought it could only hold properties, but it would seem that it can also hold functions
- Here is how to declare a struct

public struct Coords
{
    public Coords(double x, double y)
    {
        X = x;
        Y = y;
    }

    public double X { get; }
    public double Y { get; }

    public override string ToString() => $"({X}, {Y})";
}

- Structure types have value semantics
- A variable of a structure type contains an instance of the type, not a reference to it

// When you create a new instance of a struct using another struct, IE
Coords a = new Coords { X = 1, Y = 2 };
// then copy it over
Coords b = a;
// b is not just a reference to the struct created with a, it is a whole new copy of the values in a

- This also applies to parameters in a function
  when you pass a struct into a function as a parameter, then it is copied and another block of memory
  is allocated onto the stack, and the values held in a are preserved

- 
