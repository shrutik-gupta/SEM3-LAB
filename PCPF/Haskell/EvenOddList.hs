evenSquare:: [Double] -> [Double]
evenSquare [] = []
evenSquare list= [x*x | x<-list, even (round x)] 

oddSqRoot:: [Double] -> [Double]
oddSqRoot [] = []
oddSqRoot list= [sqrt x | x<-list, odd (round x)]

main:: IO()
main= do
    let list = [1, 2, 0, 4, 5, 6, 7, 8, 9, 10]
    print(evenSquare list)
    print(oddSqRoot list)