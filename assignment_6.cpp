/*
Name: Austin
Date: 12 Nov 2021
A particular talent competition has 4 judges, each of whom awards a score 
between 0 and 20 to each performer, such as 8.3, 10... A performer’s final
 score is determined by dropping the highest, and lowest score received, 
 then averaging the 2 remaining scores.
*/
#include<iostream>
#include<iomanip>


using namespace std;

void getJudgeData(double &judgeScore){
    bool judgeValidation = 0;
    while (judgeValidation == 0)
    {
        cout << "Enter the judge's score: ";
        cin >> judgeScore; // inputs judge's score

        if (judgeScore >= 0 && judgeScore <= 20){
            judgeValidation = 1; 
        }
        else{
            cout << "That is an invalid score. Please try again \n
            The score must be from 0 to 20. \n" ; 
        }
    }    
}
// findHighest calculates the highest score
double findHighest(double score1,double score2,double score3,double score4)
{
    double highest = 0;

    if (highest <= score1){
        highest = score1;
    }
    if (highest <= score2){
        highest = score2;
    }
    if (highest <= score3){
        highest = score3;
    }
    if (highest <= score4){
        highest = score4;
    }

    return highest;
}
// findLowest calculates lowest score
double findLowest(double score1,double score2,double score3,double score4)
{
    double lowest = 20;

    if (lowest >= score1){
        lowest = score1;
    }
    if (lowest >= score2){
        lowest = score2;
    }
    if (lowest >= score3){
    lowest = score3;
    }
    if (lowest >= score4){
    lowest = score4;
    }

    return lowest;
}
// calcScore computes final score by averging middle two scores
void calcScore(double score1,double score2,double score3,double score4)
{
    double total, finalScore, lowest, highest;

    lowest = findLowest( score1, score2, score3, score4);
    highest = findHighest( score1, score2, score3, score4);

    total = score1 + score2 + score3 + score4 - lowest - highest;
    finalScore = total/2.0;

    cout << fixed << setprecision(1)<< "The performer's final score is "; 
    cout << finalScore << "." << endl;


}

int main(){

    double judge1, judge2, judge3, judge4;

    // getJudgeData is called four times to compute and input scores
    getJudgeData(judge1); 
    getJudgeData(judge2);
    getJudgeData(judge3);
    getJudgeData(judge4);

    //calcScore calculates the required output
    calcScore(judge1, judge2, judge3, judge4);

    return 0;
}
/*
Sample Run:
Enter the judge's score: 5
Enter the judge's score: 9
Enter the judge's score: 11
Enter the judge's score: 12
The performer's final score is 10.0.
Process returned 0 (0x0)   execution time : 532.385 s
Press any key to continue.
*/