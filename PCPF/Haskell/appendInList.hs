append :: Int -> [Int] -> [Int]
append x [] = [x]
append y (x:xs) = x : (append y xs)

main :: IO ()
main = do
    putStrLn "Enter first number of list: "
    aIn <- getLine
    let a = read aIn :: Int
    putStrLn "Enter second number of list: "
    bIn <- getLine
    let b = read bIn :: Int
    putStrLn "Enter third number of list: "
    cIn <- getLine
    let c = read cIn :: Int
    putStrLn "Enter number to append in list: "
    dIn <- getLine
    let d = read dIn :: Int
    let list = [a, b, c]
    putStrLn "New list is: "
    print (append d list)