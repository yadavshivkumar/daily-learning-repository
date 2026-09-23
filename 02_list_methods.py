friends = ["Apple", "Orange","5", "34.65", "False", "Aakash", "Rohan"]

print(friends)

friends.append("Harry") # Adding a new element to the list
print(friends)

l1 = [1, 34, 63, 3, 4, 5, 6, 7, 8, 9]
l1.sort() # Sorting the list in ascending order
l1.reverse() # Reversing the list
l1.insert(3, 333333) # Inserting an element at index 3 
print(l1.pop(3)) # Removing and returning the element at index 3
print(l1.index(34)) # Finding the index of the element 34
print(friends.count("Aakash")) # Counting occurrences of "Aakash"
print(l1)

