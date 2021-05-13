n = int(input("n="))
k = int(input("k="))
print("8.1.1. n*8 = ",n*8)
print("8.1.2. n/4 = ",n/4)
print("8.1.3. n*10 (biti)= ",n*((1<<k)+2))
if ((n & 1) == 0)
print("8.2. Nr par")
else
print("8.2. Nr impar ")

x = int(input("x="))
y = int(input("y="))
print("8.3. Afisare bit y din x: ",x >> y & 1)
print("8.4.1. Setare la valoarea 0: ", x & (255 ^ (1 << y)))
print("8.4.2. Setare la valoarea 1: ",x | (1 << y)
print("8.4.3. Se sterge bitul y: ",x &~ (1 << y))
print("8.4.4. Se complementeaza bitul y: ", x ^ 1 << y)

a = int(input("a="))
b = int(input("b="))
print("8.5.1")
a = a + b
b = a - b
a = a - b
print(a,b)
print("8.5.2")
a = a ^ b
b = a ^ b
a = a ^ b
print(a,b)
print("8.6")
if (n == (1 << k))
print("este ")
else
print("nu este ")

print("8.7")
m = int(input("m="))
p = int(input("p="))
a = int(input("a="))
q = int(input("r="))
m = m % (int)pow(2, r)
p = p % (int)pow(2, q)
p = p << r
m = m | p
print(p)