def isLandscape(width,height):
    if width>height:
        return"Landscape"
    else:
        return"Portrait"
   
print(isLandscape(5,6))