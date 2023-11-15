fact::Int -> Int
fact 0 = 1
fact n
    |n<0 = fact(-n)
    |n>0 = n*(fact(n-1))
main = do
       putStrLn("Enter a number")
       nin <- getLine
       let n = (read nin :: Int)
       putStrLn("Factorial of the number is ")
       print(fact n)