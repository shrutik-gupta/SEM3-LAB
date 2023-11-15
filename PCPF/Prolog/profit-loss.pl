%Sell price, Cost price & profit
profit(CP,SP):- X is SP-CP,
    Y is (X*100)/CP,
    write(Y),
    write('%').

sellprice(Percent,CP):-  X is (CP*Percent)/100,
    SP is X+CP,
    write(SP).
