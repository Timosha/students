-- signum :: Integer -> Integer
signum x = if x > 0 
	then 1
        else if x < 0 
		then -1
                else 0

main = print $ Prelude.signum 1   

