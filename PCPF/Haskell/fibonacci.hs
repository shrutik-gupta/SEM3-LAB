fibo:: Int -> Int
fibo 0= 0
fibo 1= 1
fibo n
    | n>0 = fibo(n-1)+fibo(n-2)
    | otherwise = fibo(-n)

main = do
    putStrLn("Enter a number: ")
    nin <- getLine
    let n= (read nin :: Int)
    putStrLn("Fibonacci is: ")
    print(fibo n)