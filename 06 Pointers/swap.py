a = 4 
print(f"Value of a is : {a}\nLocation of a : {id(a)}")
b = 5
print(f"Value of b is : {b}\nLocation of b : {id(b)}")

temp = a
a = b
b = temp
print(f"After swap\n")
print(f"Value of a is : {a}\nLocation of a : {id(a)}")
print(f"Value of b is : {b}\nLocation of b : {id(b)}")

print(a,b)