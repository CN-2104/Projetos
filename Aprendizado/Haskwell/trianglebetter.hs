{-
Faça um programa em Haskell que leia três inteiros não negativos, um em cada linha,
e se forem correspondentes aos lados de um triângulo, imprima a área utilizando a fórmula de Heron.
Caso não seja, imprima "-"

semi-perímetro = (a + b + c) / 2
área = sqrt[s(s-a)(s-b)(s-c)]

is triangle?
a b c = a, b, c ∈ ℝ  (a, b, c > 0) ∧
a + b > c  ∧  a + c > b  ∧  b + c > a
-}

triangleArea :: Int -> Int -> Int -> Maybe Float
triangleArea a b c
  | all (>= 0) [a, b, c] && all (\(x, y, z) -> x + y >= z) [(a,b,c), (a,c,b), (b,c,a)] = -- checks is a,b,c > 0 && any pair of sides is greater than the third
      let s = fromIntegral (a + b + c) / 2 -- from integral here is used to convert to Float
      in Just (sqrt (s * (s - fromIntegral a) * (s - fromIntegral b) * (s - fromIntegral c)))
  | otherwise = Nothing

main :: IO ()
main = do
  number_1 <- readLn
  number_2 <- readLn
  number_3 <- readLn

  print $ maybe "-" show (triangleArea number_1 number_2 number_3)
