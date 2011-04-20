i x = x
k x y = x
s x y z = x z (y z)
b x y z = x (y z)
c x y z = x z y
w x y = x y y

p x = x + 1
u x y = x + y

main = print $ k i 6 7

