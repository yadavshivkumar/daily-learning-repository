import os

'''Specify the directory you want to list (use '.' for current directory)'''
directory_path = '.'

'''Get list of files and directories'''
contents = os.listdir(directory_path)

print("Directory contents:")
for item in contents:
    print(item)




import os

# Specify the directory you want to list (use '.' for current directory)
directory_path = '.'

# Get list of files and directories
contents = os.listdir(directory_path)

print("Directory contents:")
for item in contents:
    print(item)
