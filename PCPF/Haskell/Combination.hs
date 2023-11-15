fact::Int -> Int
fact 0 = 1
fact n
    |n<0 = fact(-n)
    |n>0 = n*(fact(n-1))

combination:: Int -> Int -> Int
combination n r= (fact n) `div` (fact(n-r) * fact r)

main = do
      putStrLn("Enter n")
      nin <- getLine
      let n = (read nin :: Int)
      putStrLn("Enter r")
      rin <- getLine
      let r = (read rin :: Int)
      putStrLn("combination of the number is ")
      print(combination n r)