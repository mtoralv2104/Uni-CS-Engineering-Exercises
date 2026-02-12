/*
--- Legal ---

a) if ( one(a, b) ) { ... }

     Legal. `one` takes two ints (a, b) and returns a bool,
     which is the correct type for an if-statement condition.


 c) theEnd = one(c, 5)
 
     Legal. `one` returns a `bool`, which is being assigned
     to `theEnd`, a `bool` variable. The types match.

 e) two(a, three(a))
 
     Legal.  `three(a)` returns an `int`.
     This `int` result is passed as the second argument to `two`.
     The call is `two(int&, int)`, which matches the prototype.
     `a` is a valid l-value for the first parameter.

 g) if ( three(a) ) { ... }
  
      Legal. `three(a)` returns an `int`. An `int` value can be
      implicitly converted to a `bool` in a conditional
     (0 is false, non-zero is true).


 --- Illegal  ---

 d) theEnd = two(c, 5)
  
      Illegal. The function `two` has a `void` return type,
     meaning it returns no value. You cannot assign `void`
     to a variable.

 f) two(three(b), c)
  
      Illegal. The first parameter of `two` is `int& x`, which
      requires an l-value (a variable with an address).
      The function call `three(b)` returns a temporary value
     (an r-value), not a variable. You can't pass an r-value
     to a non-const l-value reference.

 h) b = three(two(a, 5))
    Illegal. The inner function `two(a, 5)` returns `void`.
    The outer function `three` expects an `int` parameter.
    You cannot pass `void` as an argument to a function
    that expects an `int`.

 i) two(4, c)

    Illegal. Same reason as (f). The first parameter `int& x`
    requires an l-value. The literal `4` is an r-value.
    You cannot pass a literal to a non-const reference.
    */