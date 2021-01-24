# University-Semester-Result-Processing-System-CPP
## Assignment 

```
Class Student

Data Members
Name
ID
TGP
GPA
LG
TCP /* input as a constant default value*/
ECP
Result /Value will be “Promoted”, “Conditionally Promoted” or “Not Promoted”/

Member Functions
CalculateTGP()
/* Calculated as the summation of all the subjects (credit point * grade point) */

CalculateGPA()
/*Calculated as (TGP / TCP) */

CalculateLG()
/* Will be calculated from the static function LetterGrade() */

CalculateECP()
/* Calculated as the summation of all the passed subjects credit point */

CalculateResult()
/*
If GPA < 2.0 then “Not Promoted”
Else If GPA >= 2.0 with filed in subjects then “Conditionally Promoted”
Else “Promoted”
*/

DisplayResult()
/*Display the processed result based on the given input of a student */

Class Course
Data Members
CourseID
Credit
Marks

Member Function
ClaculateGrade()
ClaculateGP()

Static LetterGrade(input GradePoint)
/* Calculated as
80>= -> A+ (4.0)
75~79 -> A (3.75)
70~74 -> A- (3.5)
65~69 -> B+ (3.25)
60~64 -> B (3.0)
55~59 -> B- (2.75)
50~54 -> C+ (2.5)
45~49 -> C (2.25)
40~44 -> D (2.0)
<40 -> F (0.0)
*/

List of Courses
CSE1101 (3.0)
CSE1102 (1.5)
CSE1103 (3.0)
CSE1105 (3.0)
CSE1107 (3.0)
CSE1108 (1.0)
CSE1109 (3.0)
CSE1111 (3.0)
```
