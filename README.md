# gitExerciseG4

o	Instructions (General): Trainees will be divided into groups (4 members). Each group will be given a Git repo. The group's objective is to debug and fix the functions in the main branch.
o	Guide:
1.	Each group will debug a simple program which calculates the area of 4 shapes (circle, triangle, square, and rectangle.) 
2.	Each member will be assigned a function from the main program that they need to debug.
3.	Each function has 2 bugs that need to be fixed.
4.	Members of the group will create their own feature-branch from their given git repository.
5.	Initially there will be a Main branch (Master branch) in the repository which contains the main file of the program.
6.	Members will branch out their feature-branch from Main branch (Master branch).
7.	Note: Ensure that members push any significant changes from their Feature branch before merging it with the Production branch.
  a.	Commit Message
    i.	Summary - [Code] Feature Name (ex. [AC-01] Square area calculation). Supposing the name of the project is Area Calculation, abbreviated as "AC".
    ii.	Message - <detailed description of changes made for the version> (ex. Add calculateAreaOfSquare() function / Update input validation)
8.	Once the member fixes the bug in their respective Feature branch, members will merge their Feature-branch into the Production branch. 
9.	Then the group leader will validate the functionality of each function from the Production branch.
10.	After the group leader has completed his or her validation, the group leader will give the member heads up when to merge their Production branch back to the Main branch (Master branch).
11.	Each member will submit a report that includes (name of the function assigned to them, any changes made, code versions (release branch).)
12.	Group leader will consolidate each member’s reports.

Deliverables:
1)	Release branch (Main branch).
2)	Report.
Expected sample report
Function Name	              Changes	                                          Code version
areaOfCircle	              Add '&' before the radius variable on the scanf.	0c2f46c95dc81912cb2487087c44c40c62224f49
