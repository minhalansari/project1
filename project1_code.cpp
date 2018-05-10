#include <iostream>
using std::cout; using std::endl; using std::fixed;
#include <iomanip>
using std::setprecision;
#include<cmath>
using std::pow;

int main(){
    int p; //price of car
    std::cin>> p;
    double str; //sales tax rate
    std::cin>> str; 
    int dp; //downpayment of car
    std::cin>> dp;
    int tf; //title and fees
    std::cin>> tf;
    double ir; //interest rate
    std::cin>> ir;
    int m; //months
    std::cin>> m;
    int tpd = (p+(p*str)+tf-dp); //calculation of total price with sales tax, titles and fees, and without downpayment
    double mr = ir/12.0; //calculation of month interest rate
    double p1 = (mr * pow((1+mr),m)); //part one of monthly payment calculation
    double p2 = (pow((1+mr),m)-1); //part two of month payment calculation
    double p3= p1/p2; //part three of monthly payment calculation, divide part 1 and 2
    double p4 = tpd * p3; //part 4 of monthly payment calculation multiple car price by part 3 calculation
    cout<<fixed << setprecision(2)<< p4 <<endl; //print final calculated monthly price
}
