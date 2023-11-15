%Simple intrest, Compound intrest
simpleIntrest(Principal, Rate, Time):-
    ROI is Rate/100,
    SI is (Principal*ROI*Time),
    write(SI).

compoundIntrest(Principal, Rate, Time):-
    ROI is Rate/100,
    CI is (Principal*(1+ROI)^Time)-Principal,
    write(CI).
