isMember :: Int ->[Int] -> Bool
isMember x [] = False
isMember x (y:ys)
    | x == y = True
    | otherwise = isMember x ys
    
main = do
    putStrLn("Enter first number of list")
    aIn <- getLine
    let a= read aIn:: Int
    putStrLn("Enter second number of list")
    bIn <- getLine
    let b= read bIn:: Int
    putStrLn("Enter third number of list")
    cIn <- getLine
    let c= read cIn:: Int
    let list= [a,b,c]
    putStrLn("Enter number to search in list")
    dIn <- getLine
    let d= read dIn:: Int
    print(isMember d list)