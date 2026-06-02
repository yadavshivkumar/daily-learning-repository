d = {} # Empty dictionary

marks = {
    "Harry": 85,
    "Hermione": 95,
    "Ron": 75,
    0 : "Shivji",
}

print(marks.items()) # Display all items in the dictionary
print(marks.keys()) # Display all keys in the dictionary
print(marks.values()) # Display all values in the dictionary
print(marks.update()) # Update the dictionary (this will not change anything as no new key-value pair is provided)
print(marks.get("Harry")) # Get the value for the key "Harry
print(marks.get("Shivji")) # Get the value for a non-existent key "Shivji"
print(type(marks))  # Display the type of the dictionary