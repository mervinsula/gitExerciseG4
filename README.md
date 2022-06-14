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
  

Function Name	              Changes	                                                                                          Code version
calAreaOfSquare	       from: Int side, area; | to: int side, area;                                                           45560eb5b9f957a591a031b2dcb4b48ac11f2faf 
calAreaOfSquare	       from: line 109, areas | to: line 109, area                                                            4998d0f420d70bce466a3e128d23ed0b324b94a4
ca2AreaofTriangle      from: line 87, r 4 | to line 87, r_4                                                                  82c8b9ed0215e17b371f9f0e8916b0ba7201068b
ca2AreaofTriangle      from: line 92, side | to line 92, side;                                                               82c8b9ed0215e17b371f9f0e8916b0ba7201068b
calAreaOfRectangle     from: line 119, scanf("%", &length); | scanf("%d", &length);                                          987232896602bd103df07afeaba72ccc25eb376c
calAreaOfRectangle     from: line 125, printf("\nArea of Rectangle : %d", AREA); | printf("\nArea of Rectangle : %d", area); 987232896602bd103df07afeaba72ccc25eb376c
