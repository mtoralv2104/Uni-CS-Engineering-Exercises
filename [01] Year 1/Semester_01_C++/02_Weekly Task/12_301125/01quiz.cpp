/*
  a) Two differences between structs and arrays:
     1. Arrays have to hold the exact same type of data (like all ints). Structs can hold a mix of different types.
     2. With arrays, you have to use numbers [0] to get data. With structs, you get to use actual names (like .age), which makes more sense.

  b) Why use a struct for TComplex instead of an array?
     It's way easier to read. If you use a struct, you can name the variables .real and .imaginary. If you use an array, you have to memorize that [0] is the real part and [1] is the imaginary part, which is confusing and easy to mess up.

  c) The big drawback of arrays that structs don't have:
     You can't just copy arrays with an equals sign. Writing "arrayA = arrayB" breaks the code. But with structs, you can just do "structA = structB" and it copies everything over perfectly.

  d) Inspiration for dot notation and the order:
     It was probably inspired by file folders or how objects hold data. The order is actually opposite, though. In C++, we go "General.Specific" (Object.Field). On the web (like uma.es), it goes "Specific.General" (Host.Domain).

  e) Why can't we usually compare structs directly?
     Because of "padding." The computer often sticks invisible, empty spaces between the variables in a struct to make it fit memory better. These spaces have random junk data in them, so if you try to compare two structs directly, the junk data might be different even if the real data is the same.
*/