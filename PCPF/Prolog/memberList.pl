%Search in a list
member(X,[X|_]).
member(X,[_|T]):-member(X,T).
