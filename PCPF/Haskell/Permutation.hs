fact::Int -> Int
fact 0 = 1
fact n
    |n<0 = fact(-n)
    |n>0 = n*(fact(n-1))

permutation:: Int -> Int -> Int
permutation n r= (fact n) `div` (fact(n-r))

main = do
      putStrLn("Enter n")
      nin <- getLine
      let n = (read nin :: Int)
      putStrLn("Enter r")
      rin <- getLine
      let r = (read rin :: Int)
      putStrLn("permutation of the number is ")
      print(permutation n r)
