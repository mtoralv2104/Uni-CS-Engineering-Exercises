// 01questions.cpp
// Marcos Torres 05.10.2025

/*

a) For what values of a and b does P4 run?

P4 runs when a <= 0, b == 0, and a != b.

b) Boolean expression that is true when neither a nor b is greater than 10

(a <= 10) && (b <= 10);

c) Simplify the following code fragment:

Simplified:

T;
if (cond) {
    S;
} else {
    U;
}

d) Simplify the following code fragment:

Simplified:

x = cond;

e) Simplify the nested age-state logic using minimal expressions and reserved words:

Simplified:

if (age >= 65) 
{
    state = RETIRED;
} 
else if (age < 18) 
{
    state = MINOR;
} 
else 
{
    state = ACTIVE;
}

f) Determine if the following Boolean expressions are equivalent:

1) not (a == b) == (a != b) // true
2) not ((a==b) or (a==c)) == (a!=b) and (a!=c) // true 
3) not ((a==b) and (c>d)) == (a!=b) or (c<=d)  // true
4) not (a and b) == a or b                    // false 
5) a and b or c == a and (b or c)             // false 
6) a and b or c == not (a or b and c)         // false

*/