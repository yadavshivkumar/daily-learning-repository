a = (23 ,343, "Shiv")

a[2] = "Shiva" # This will raise a TypeError because tuples are immutable.
# To modify the tuple, you need to create a new one.    
a = (23, 343, "Shiva")  # Create a new tuple with the desired change

print(a)  # Output: (23, 343, 'Shiva')      
