%Permutation and combination
permutation(N,R):-
    factorial(N,X),
    A is N-R,
    factorial(A,Y),
    Ans is X/Y,
    write(Ans).

combination(N,R):-
    factorial(N,X),
    A is N-R,
    factorial(A,Y),
    factorial(R,Z),
    Ans is X/(Y*Z),
    write(Ans).
