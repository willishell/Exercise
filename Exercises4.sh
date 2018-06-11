# Before I organized the photos by year, what command would have listed all of the photos of type .png?
find . -name "*.png"

# Before I organized the photos by year, what command would have deleted all of my hiking photos?
find . -name "*hiking*"

# What series of commands would you use in order to put my figures for a data science course and the pictures I took in the lab into their own folders

# Supposed that we have a file including all pngs and txts, we are going to move them seperately.
mv *.txt data
mv *.jpg photo
