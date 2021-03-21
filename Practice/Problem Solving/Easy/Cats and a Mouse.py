def catAndMouse(x, y, z):

    while(True):
        if x < z:
            x += 1
        else:
            x -= 1
        
        if y < z:
            y += 1
        else:
            y -= 1
        
        if x == z and y == z:
            return("Mouse C")
            break

        if x == z:
            return("Cat A")
            break
        
        if y == z:
            return("Cat B")
            break

