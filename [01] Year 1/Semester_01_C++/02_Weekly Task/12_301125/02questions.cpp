/*
a) INCORRECT.
"TCatalRec" is the name of the type (the blueprint), not the variable.
You can't check the "itemType" of a blueprint. You need a specific variable
like "aCatal.itemType".

b) INCORRECT.
Type Mismatch.
Left side: "catal[1].subcatal.list[2]" is a single String.
Right side: "aCatal" is a whole TCatalRec struct.
You can't squeeze a whole struct into a string variable.

c) INCORRECT.
"TRecList" is the name of the type definition.
The actual field name inside the struct is "subcatal".
It should be: catal[5].subcatal = aList;

d) INCORRECT.
Type Mismatch.
Left side: "aCatal.itemName[2]" is a single char (one letter).
Right side: "aList.list[2]" is a whole string.
You can't shove a whole string into a single character slot.

e) INCORRECT.
Wrong Path.
"catal[1]" is a TCatalRec. It doesn't have a field named ".list".
You forgot the middle step! It needs to go through ".subcatal".
(e.g., catal[1].subcatal.list...)

f) INCORRECT.
Wrong Path (same as above).
"catal[19]" does not have a direct field called ".list".
It is hidden inside ".subcatal".

g) INCORRECT.
The "if" part is fine, but the assignment inside fail for the same reason as (c).
"catal[10]" uses ".TRecList" (the type name) instead of ".subcatal" (the field name).

h) CORRECT!
"aCatal" is a TCatalRec.
"catal[5]" is also a TCatalRec.
They are the exact same type, so you can copy one to the other.

i) CORRECT!
"aCatal.subcatal" is a TRecList.
"aList" is also a TRecList.
Types match perfectly.
*/