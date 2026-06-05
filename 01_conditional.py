a = int(input("Enter your age: "))

 
if(a>=18):
    print("You are eligible.")
elif(a<0):
    print("Invalid age entered.")
elif(a==0):
    print("You are just born!")
elif(a<18):
    print("You are not eligible yet.")

else:
    print("Invalid input.")

print("End of program.  Thank you!") 

