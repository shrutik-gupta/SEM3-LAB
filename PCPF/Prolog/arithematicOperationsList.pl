%Square of numbers of a list
square([]):- write(0).
square([H]):- X is H*H, write(X).
square([H|T]):- X is H*H,
    write(X),
    write(','),
    square(T).

%Cube of numbers of a list
cube([]):- write(0).
cube([H]):- X is H*H*H, write(X).
cube([H|T]):- X is H*H*H,
    write(X),
    write(','),
    cube(T).

%SquareRoot of numbers of a list
sqroot([]):- write(0).
sqroot([H]):- X is H^0.5, write(X).
sqroot([H|T]):- X is H^0.5,
    write(X),
    write(','),
    sqroot(T).
