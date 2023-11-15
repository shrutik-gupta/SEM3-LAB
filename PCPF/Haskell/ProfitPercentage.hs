profit:: Double -> Double -> Double
profit c s = s-c

profitPercentage:: Double -> Double -> Double
profitPercentage p c= (p*100)/c

main = do
    putStrLn("Enter cost price: ")
    ain <- getLine
    let a= (read ain :: Double)
    putStrLn("Enter sell price: ")
    bin <- getLine
    let b= (read bin :: Double)
    putStrLn("Profit is: ")
    print(profit a b)
    putStrLn("Profit percentage is: ")
    print(profitPercentage (profit a b) a )