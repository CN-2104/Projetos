{-
Faça um programa em Haskell que leia três inteiros não negativos, um em cada linha,
e se forem correspondentes aos lados de um triângulo, imprima a área utilizando a fórmula de Heron.
Caso não seja, imprima “-”

semi-perímetro = (a + b + c) / 2
área = sqrt[s(s-a)(s-b)(s-c)]

is triangle?
a b c = a, b, c ∈ ℝ  (a, b, c > 0) ∧
a + b > c  ∧  a + c > b  ∧  b + c > a
-}


isTriangle :: Int -> Int -> Int -> Bool
isTriangle a b c = a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a

semi :: Int -> Int -> Int -> Float
semi a b c = fromIntegral (a + b + c) / 2

area :: Float -> Int -> Int -> Int -> Float
area s a b c = sqrt (s * (s - fromIntegral a) * (s - fromIntegral b) * (s - fromIntegral c))

main = do
  number_1 <- readLn
  number_2 <- readLn
  number_3 <- readLn

  if isTriangle number_1 number_2 number_3
    then do
      print (area (semi number_1 number_2 number_3) number_1 number_2 number_3)
    else
      print "-"
