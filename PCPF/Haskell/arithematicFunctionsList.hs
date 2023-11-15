squareOfList :: [Double] -> [Double]
squareOfList [] = []
squareOfList (x:xs) = x*x : (squareOfList xs)

cubeOfList :: [Double] -> [Double]
cubeOfList [] = []
cubeOfList (x:xs) = x*x*x : (cubeOfList xs)

sqRootOfList :: [Double] -> [Double]
sqRootOfList [] = []
sqRootOfList (x:xs) = x**0.5 : (sqRootOfList xs)

main = do
    putStrLn "Enter first number of list: "
    aIn <- getLine
    let a = read aIn :: Double
    putStrLn "Enter second number of list: "
    bIn <- getLine
    let b = read bIn :: Double
    putStrLn "Enter third number of list: "
    cIn <- getLine
    let c = read cIn :: Double
    let list = [a, b, c]
    putStrLn "New list is: "
    print (squareOfList list)
    print (cubeOfList list)
    print (sqRootOfList list)