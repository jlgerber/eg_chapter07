# chapter 07 Exercise   
 
This repo contains a working example of our exercise from class. There are a couple of things to note:

1) I finished the exercise.
2) I changed the CMakeLists.txt files a bit. Have a look
3) I updated the #includes to remote the full pathing.
 
## Details
 
### 1)
I added meaningful tests. At least a couple of them. Take a look.
 
### 2)

##### CMakeLists.txt 

I fixed up the CMakeLists file to include the tests directory after building the main executable. I also added comments

### 3)
I fixed up the include paths to remove the relative paths, as the include_directory() function in cmake takes care of locating the include files.