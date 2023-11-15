sumOfList :: [Int] -> Int
sumOfList [] = 0
sumOfList (x:xs) = x + sumOfList xs

main :: IO ()
main = do
    putStrLn "Enter first number: "
    aIn <- getLine
    let a = read aIn :: Int
    putStrLn "Enter second number: "
    bIn <- getLine
    let b = read bIn :: Int
    putStrLn "Enter third number: "
    cIn <- getLine
    let c = read cIn :: Int
    let list = [a, b, c]
    putStrLn "Sum of members of list is: "
    print (sumOfList list)