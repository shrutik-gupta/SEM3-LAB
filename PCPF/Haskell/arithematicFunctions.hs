square:: Int -> Int
square n= n*n

cube:: Int -> Int
cube n= n*n*n

sqroot :: Int -> Float
sqroot n = sqrt (fromIntegral n)

main= do
    putStrLn("Enter a number: ")
    nin <- getLine
    let n= (read nin :: Int)
    putStr("Square is: ")
    print(square n)
    putStr("Cube is: ")
    print(cube n)
    putStr("Square root is: ")
    print(sqroot n)