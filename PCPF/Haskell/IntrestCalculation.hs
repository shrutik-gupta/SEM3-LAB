simpleIntrest :: Double -> Double -> Double -> Double
simpleIntrest p r t = (p * r * t) / 100

compoundIntrest :: Double -> Double -> Double -> Double
compoundIntrest p r t = p * ((1 + r / 100) ** t) - p

main = do
    putStrLn ("Enter principal amount: ")
    pin <- getLine
    let p = read pin :: Double
    putStrLn ("Enter rate of interest: ")
    rin <- getLine
    let r = read rin :: Double
    putStrLn ("Enter time duration: ")
    tin <- getLine
    let t = read tin :: Double
    putStrLn ("Simple interest is: ")
    print (simpleIntrest p r t)
    putStrLn ("Compound interest is: ")
    print (compoundIntrest p r t))