letter = ''' Dear <|Name|>,
             You are selected!
             <|Date|> '''
print(letter.replace("<|Name|>", "shiv").replace("<|Date|>", "1st January 2050"))