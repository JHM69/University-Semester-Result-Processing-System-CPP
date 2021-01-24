//
// Created by Jahangir Hossain on 24-Jan-21.
//

#ifndef SEMESTER_RESULT_PROCESSING_SYSTEM_B190305009_COURSE_H
#define SEMESTER_RESULT_PROCESSING_SYSTEM_B190305009_COURSE_H
#include <istream>
using namespace std;
#include <bits/stdc++.h>


class Course {
    int CourseID;
    double CourseGP;


public:
    bool passed=true;
    long Marks;
    double Credit;
    Course(long Marks) {
        Marks = Marks;
    }

    void set() {
        cout << "Enter Course's ID:- ";
        cin >> CourseID;
    }

    long ClaculateGrade() {

    }

    long ClaculateGP() {

    }

    string getLetterGrade() {
        string lg;
        if (Marks >= 80 && Marks <= 100) {
            lg = "A+";
        } else if (Marks >= 75 && Marks <= 79) {
            lg = "A";
        } else if (Marks >= 70 && Marks <= 74) {
            lg = "A-";
        } else if (Marks >= 65 && Marks <= 69) {
            lg = "B+";
        } else if (Marks >= 60 && Marks <= 64) {
            lg = "B";
        } else if (Marks >= 55 && Marks <= 59) {
            lg = "B-";
        } else if (Marks >= 50 && Marks <= 54) {
            lg = "C+";
        } else if (Marks >= 45 && Marks <= 49) {
            lg = "C";
        } else if (Marks >= 40 && Marks <= 44) {
            lg = "D";
        } else if (Marks < 40) {
            lg = "F";
        }
        return lg;
    }
    double getGradePoint() {
        if (Marks >= 80 && Marks <= 100) {
            CourseGP = 4.0;
        } else if (Marks >= 75 && Marks <= 79) {
            CourseGP = 3.75;
        } else if (Marks >= 70 && Marks <= 74) {
            CourseGP = 3.5;
        } else if (Marks >= 65 && Marks <= 69) {
            CourseGP = 3.25;
        } else if (Marks >= 60 && Marks <= 64) {
            CourseGP = 3.0;
        } else if (Marks >= 55 && Marks <= 59) {
            CourseGP = 2.75;
        } else if (Marks >= 50 && Marks <= 54) {
            CourseGP = 2.5;
        } else if (Marks >= 45 && Marks <= 49) {
            CourseGP = 2.25;
        } else if (Marks >= 40 && Marks <= 44) {
            CourseGP = 2.0;
        } else if (Marks < 40) {
            passed = false;
            CourseGP = 0.0;
        }
        return CourseGP;
    }

    Course() {
    }
};

#endif //SEMESTER_RESULT_PROCESSING_SYSTEM_B190305009_COURSE_H
