%Fibonacci series
fibonacci(0,0).
fibonacci(1,1).
fibonacci(N,F):-
    X is N-1,
    Y is N-2,
    fibonacci(X,A),
    fibonacci(Y,B),
    F is A+B.
