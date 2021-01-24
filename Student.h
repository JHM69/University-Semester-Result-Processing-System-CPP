//
// Created by Jahangir Hossain on 24-Jan-21.
//

#ifndef SEMESTER_RESULT_PROCESSING_SYSTEM_B190305009_STUDENT_H
#define SEMESTER_RESULT_PROCESSING_SYSTEM_B190305009_STUDENT_H

#include <istream>

using namespace std;
#include <bits/stdc++.h>
#include "Course.h"

class Student {
    string Name;
    int ID;
    Course courseList[8] = {};
    double TGP=0;
    double GPA=0;
    string LG;
    double TCP=0; //input as a constant default value
    double ECP=0;
    bool failedAtLeastOneSubject = false;
    string Result; //Value will be “Promoted”, “Conditionally Promoted” or “Not Promoted”

public:
    Student() {

    }

    void set() {
        cout << "Enter student's name:- " << endl;
        cin >> Name;
        cout << "Enter student's Id:- " << endl;
        cin >> ID;
        for (int i = 0; i < 8; i++) {
            cout << "Enter Marks for Course:- " << i + 1 << endl;
            int m;
            cin >> m;
            Course c = Course(m);
            c.Marks = m;
            courseList[i] = c;
            initializeCreditPoint();
        }
    }

    void initializeCreditPoint() {
        courseList[0].Credit = 3;
        courseList[1].Credit = 1.5;
        courseList[2].Credit = 3;
        courseList[3].Credit = 3;
        courseList[4].Credit = 3;
        courseList[5].Credit = 1;
        courseList[6].Credit = 3;
        courseList[7].Credit = 3;
    }

    void DisplayResult() {
        cout << "Student's name:- " << Name << endl;
        cout << "Student's ID:- " << ID << endl;
        for(int i = 0; i < 8; i++) {
            cout << courseList[i].Marks << endl;
            cout << courseList[i].getGradePoint() << endl;
            cout << courseList[i].getLetterGrade() << endl;
            cout << courseList[i].passed << endl;
            cout << "--------------------" << endl;
        }
        cout << "Total Grade Point: "<< CalculateTGP() << endl;
        cout << "Total Grade Point Average: "<< CalculateGPA() << endl;
        cout << "Letter Grade: "<< CalculateLG() << endl;
        cout << "Total Credit Point: "<< CalculateTCP() << endl;
        cout << "Total Earned Credit Point: "<< CalculateECP() << endl;
        cout << "Comment: "<< CalculateResult() << endl;
    }

    double CalculateTGP() {
        TGP = 0;
        for (int i = 0; i < 8; i++) {
            TGP += (courseList[i].Credit * courseList[i].getGradePoint());
        }
        return TGP;
        /* Calculated as the summation of all the subjects (credit point * grade point) */
    }

    double CalculateGPA() {
        GPA = 0;
        GPA = CalculateTGP() / CalculateTCP();
        return GPA;
/*Calculated as (TGP / TCP) */
    }

    double CalculateTCP() {
        TCP=0;
        for(int i = 0; i < 8; i++) {
            TCP += courseList[i].Credit;
        }
        return TCP;
    }

    double CalculateECP() {
        ECP=0;
        for (int i = 0; i<8; i++) {
            if(courseList[i].passed){
                ECP+=courseList[i].Credit;
            }
        }
        return ECP;
/* Calculated as the summation of all the passed subjects credit point */
    }


    string CalculateResult() {
        if(GPA<2){
            Result = "Not Promoted";
        }else if(GPA >= 2.0 && failedAtLeastOneSubject){
            Result = "Conditionally Promoted";
        }else{
            Result = "Promoted";
        }
        return Result;
/*
If GPA < 2.0 then “Not Promoted”
Else If GPA >= 2.0 with filed in subjects then “Conditionally Promoted”
Else “Promoted”
*/
    }


    string CalculateLG() {
        if(GPA==4){
            LG = "A+";
        }else if(GPA>=3.75 && GPA <=3.99){
            LG = "A";
        }else if(GPA>=3.5 && GPA <=3.74){
            LG = "A-";
        }else if(GPA>=3.25 && GPA <=3.49){
            LG = "B+";
        }else if(GPA>=3 && GPA <=3.24){
            LG = "B";
        }else if(GPA>=2.75 && GPA <=2.99){
            LG = "B-";
        }else if(GPA>=2.5 && GPA <=2.74){
            LG = "C+";
        }else if(GPA>=2.25 && GPA <=2.49){
            LG = "C";
        }else if(GPA>=2 && GPA <=2.24){
            LG = "D";
        }else if(GPA < 2){
            LG = "F";
        }
        return LG;

    }
};

