#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
int main(){

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 01:)----------  
// => Check whether a number is even or odd
/*
int num1;
cout<< " Please enter Your number : ";
cin>> num1;
if(num1 % 2 == 0){
    cout<< num1 << " is an even Number\n";
}
else{
    cout<< num1 << " is odd Number\n";
}

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 02:)----------  
// => Compare two numbers and print the larger one

int num2,num3;
cout<< " PLease enter 1st Number : \n";
cin>>num2;
cout<< " Please enter 2ND Number : \n";
cin>>num3;
if(num2 > num3 ){
    cout<< num2 << " is Greater Number\n";
}
else{
    cout<< num3 << " is  Greater Number \n";
}
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 03:)----------  
// => Check whether a character is vowel or consonant

/*char vowel;
cout<< " Enter your Alphabet : \n";
cin>>vowel;
switch(vowel){
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'o':
    case 'O':
    case 'U':
    case 'u':
    cout<< vowel << " is an Vowel Alphabet\n";
    break;
    default:
    cout<< vowel << " is a Consonant Alphabet\n";
    break;
}
*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 04:)---------  
// => Determine if a student has passed or failed on their Marks
/*
float num4;
cout<<"Enter Your obtained Marks out of 505 : \n";
cin>>num4;
if(num4>=454.5){
   cout<<"Your current percentage is : "<< num4/505*100<<"\n";
    cout<<"Congratulations You have Passed\n";
} 
else if(num4>=404){
    cout<<"Your current percentage is : "<< num4/505*100<<"\n";
    cout<<"Congratulations You have Passed\n";
    
}
else if(num4>=353.5){
    cout<<"Your current percentage is : "<< num4/505*100<<"\n";
    cout<<"Congratulations You have Passed\n";
    
}
else if(num4>=303){
    cout<<"Your current percentage is : "<< num4/505*100<<"\n";
    cout<<"Congratulations You have Passed\n";
    
}
else if(num4>=252.5){
    cout<<"Your current percentage is : "<< num4/505*100<<"\n";
    cout<<"Congratulations You have Passed\n";
    
}
else if(num4>=202){
    cout<<"Your current percentage is : "<< num4/505*100<<"\n";
    cout<<"Congratulations You have Passed\n";
    
}
else if(num4>=166.65){
    cout<<"Your current percentage is : "<< num4/505*100<<"\n";
    cout<<"Congratulations You have Passed\n";
    
}
else {
    cout<<"Your current percentage is : "<< num4/505*100<<"\n";
    cout<<"Sorry You Failed,Better Luck Next Time\n";
    
}
*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 05:)---------  
// => Check if a given year is a leap year or not
/*
int num5;
cout<<"Enter the Year to Check leap or not : \n";
cin>>num5;
if(num5 % 4 == 0){
    cout<< num5 << " is a leap Year\n";
}
else{
    cout<< num5 << " is not a leap year\n";
}

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 06:)---------  
// => Determine the biggest among three numbers
/*
int num6,num7,num8;
cout<< " Enter 1st number : ";
cin>>num6;
cout<< " Enter 2nd number : ";
cin>>num7;
cout<< " Enter 3rd number : ";
cin>>num8;
if(num6>=num7 && num6>=num8){
    cout<<num6<< " is Greater number\n";
}
else if(num7>=num6 && num7>=num8){
    cout<<num7<< " is Greater number\n";

}
else{
    cout<<num8<< " is greater number\n";
}  

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 07:)---------
// Check if anumber is positive, negative or zero
/*
int num9;
cout<< "Enter your number : ";
cin>>num9;
if(num9>0){
    cout<<num9<< " is positive number\n";
}
else if(num9<0){
    cout<<num9<<" is Negative number\n";

}
else{
    cout<<num9<< " is Zero";
}
*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 08:)---------
// => Calculate the discount based on purchase amount using if else
/*
float num10;
cout<< " 2 perc  diccount upto Rs:199 item\n '5' perc dicount upto Rs:499 items\n '10' perc discount above Rs:500 items \n  ";
cout<< " Enter your purchase : ";
cin>>num10;
if(num10<=199){
    cout<< " total Amount : "<<num10<<"\n";
    cout<<" Discount : 2%\n";
    cout<< "Actual Amount : "<<num10-(0.02*num10)<<"\n";
}
else if(num10<=499){
    cout<< " total Amount : "<<num10<<"\n";
    cout<<" Discount : 5%\n";
    cout<< "Actual Amount : "<<num10-(0.05*num10)<<"\n";
}
else if(num10>=500){
    cout<< " total Amount : "<<num10<<"\n";
    cout<<" Discount : 10%\n";
    cout<< "Actual Amount : "<<num10-(0.1*num10)<<"\n";
}
else{
    cout<< " You enterd Invalid Amount\n";
}
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 09:)---------
// => check if a number is perfect number or not
/*
int num11;
int sum = 0;
cout<<" Enter the number : ";
cin>>num11;
for(int i = 1;i<num11;i++){
    if(num11%i==0){
        sum = sum + i;
    }
}
    if(num11==sum){
        cout<< num11<< " is a perfect number\n";
    }
    else{
        cout<<num11<< " is not a perfect Square\n"; 
    }
*/

    //_____________________________________________________________________________________________________________________________

//                                        --------(Q => 010:)---------
// => Check if a character is an Alphabet
/*

char alph;
    cout << "Enter a character\n";
    cin >> alph;
  
    if((alph >= 'a'&& alph <= 'z') || (alph >= 'A' && alph <= 'Z')) {
        cout << alph << " is an Alphabet.\n";
    } else {
        cout << alph << " is not an Alphabet.\n";
    }
*/

    //_____________________________________________________________________________________________________________________________

//                                        --------(Q => 011:)---------
// => find the largest among four Numbers
/*

int num12,num13,num14,num15;
cout<< " Enter 1st number : ";
cin>>num12;
cout<< " Enter 2nd number : ";
cin>>num13;
cout<< " Enter 3rd number : ";
cin>>num14;
cout<< " Enter 4th number : ";
cin>>num15;
if(num12>=num13 && num12>=num14 && num12>=num15){
    cout<<num12<< " is Greater number\n";
}
else if(num13>=num12 && num13>=num14 && num13>=num15){
    cout<<num13<< " is Greater number\n";

}
else if(num14>=num12 && num14>=num13 && num14>=num15){
    cout<<num14<< " is Greater number\n";
}
else{
    cout<<num15<< " is greater number\n";
}  

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 012:)---------
// =>  Determine the grade of a student based on their Marks

/*
float num16;
cout<<"Enter Your obtained Marks out of 505 : \n";
cin>>num16;
if(num16>=454.5){
   cout<<"Your current percentage is : "<< num16/505*100<<"\n";
    cout<<"Congratulations You have A+ grade\n";
}
else if(num16>=404){
    cout<<"Your current percentage is : "<< num16/505*100<<"\n";
    cout<<"Congratulations You have 'A' grade\n";
    
}
else if(num16>=353.5){
    cout<<"Your current percentage is : "<< num16/505*100<<"\n";
    cout<<"Congratulations You have 'B+' grade \n";
    
}
else if(num16>=303){
    cout<<"Your current percentage is : "<< num16/505*100<<"\n";
    cout<<"Congratulations You have 'B' grade \n";
    
}
else if(num16>=252.5){
    cout<<"Your current percentage is : "<< num16/505*100<<"\n";
    cout<<"Congratulations You have 'C+' grade \n";
    
}
else if(num16>=202){
    cout<<"Your current percentage is : "<< num16/505*100<<"\n";
    cout<<"Congratulations You have 'C' grade \n";
    
}
else if(num16>=166.65){
    cout<<"Your current percentage is : "<< num16/505*100<<"\n";
    cout<<"Congratulations You have 'E' grade \n";
    
}
else {
    cout<<"Your current percentage is : "<< num16/505*100<<"\n";
    cout<<"Sorry You have 'F' grade , Better Luck Next Time\n";
    
}

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 013:)---------
// check whether a triangle is is Equilateral,Isosceles or Scalene
/*
int num17,num18,num19;
cout<< "Please enter the one side of triangle : ";
cin>>num17;
cout<< "Please enter the 2nd side of triangle : ";
cin>>num18;
cout<< "Please enter the 3rd side of triangle : ";
cin>>num19;
if(num17==num18 && num17== num19){
    cout << "\nThis is an Equilateral Triangle";
}
else if(num17==num18||num18==num19||num17==num19 ){
    cout << "\nThis is an Isosceles Triangle";
}
else{
    cout << "\nThis is a Scalene Triangle";
}

*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 14:)---------
// => Identify the Quadrant in which a given point lies
/*
int num20,num21;
cout<<"Enter your X-axis point : ";
cin>>num20;
cout<<"Enter your Y-axis point : ";
cin>>num21;

if(num20>0 && num21>0){
    cout<<"("<<num20<<","<<num21<<")"<< " point lies in 1st Quadrant\n";
}
else if(num20<0 && num21>0 ){
    cout<<"("<<num20<<","<<num21<<")"<< " point lies in 2nd Quadrant\n";
}
else if(num20<0 && num21<0){
    cout<<"("<<num20<<","<<num21<<")"<< " point lies in 3rd Quadrant\n";
}
else if(num20>0 && num21<0){
    cout<<"("<<num20<<","<<num21<<")"<< " point lies in 4th Quadrant\n";
}
else{
    cout<<"your entered Invalid points\n";
}

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 15:)---------
// =>  check the type of a given year ( leap,common or both )
/*
int num22;
cout<<"Enter the Year to Check leap or not : \n";
cin>>num22;
if((num22 % 4 == 0) && (num22 % 100 !=0)) {
    cout<< num22 << " is a leap Year\n";
}
else if(num22 % 400 == 0){
    cout<< num22 << " is a leap Year\n";

}
else{
    cout<< num22 << " is not a leap year\n";
}

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 16:)---------
// => Create a simple menu-based program using goto statement
/*
int num23 = 1;
int num24;


tabish:
cout<<"1: Zinger-Burger "<<"         "<<"Rs:350\n";
cout<<"2: Zinger-Shawrma"<<"         "<<"Rs:250\n";
cout<<"3: Coffee        "<<"         "<<"Rs:350\n";
cout<<"4: Tea           "<<"         "<<"Rs:150\n";
cout<<"5: Lemon Soda    "<<"         "<<"Rs:100\n";
cout<<"please enter 1 for continue and 2 for confirmation of your order\n";
cin>>num24;
if(num23==num24){
    goto tabish;
}
else{
    cout<< "Thanks! your order has confirmed\n";
}
*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 17:)---------
// => Implement a program to print a message using goto for repetitive sections


/*
    int x = 0;

repeat_section:  
    cout << "This is a repetitive section. Count: \n"; 
    x++;  
    if (x < 5) {
        goto repeat_section;
    }
*/
    //_____________________________________________________________________________________________________________________________

//                                        --------(Q => 18:)---------
// => Use goto to handle an Error in program
/*
int num25,num26;
cout<<"enter your password\n";
 cin>>num25;
 cout<<"your password is saved\n";
tabish:
cout<<"enter your saved password again\n";
 cin>>num26;

 if(num25!=num26){
cout<<"Error!! "<<" your password is wrong\n";
 goto tabish;
  }
 else{
            cout<<"Welcome to dashboard\n";
}
*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 19:)---------
 // =>  Demonstrate the loop using goto statement
/*
 int j = 1,m;

 cout<<"Enter the limit : ";
 cin>>m;
 loop:
 if(j<=m){
    cout<<j<<"\n";
    j++;
    goto loop;
 }
 cout<<"Numbering printed same as in for loop\n";

*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 20:)---------
// => Create a program using goto to break out of nested loops
/*
for(int l=1;l<=4;l++){        
for(int p=1;p<=4;p++){        
    if(l==2&&p!=4){        
    goto terminate;        
    }        
    cout<<l<<" "<<p<<"\n";                  
}   
}
 terminate:
 cout<< "Loop is breaked\n";
*/

 //_____________________________________________________________________________________________________________________________

//                                        --------(Q => 21:)---------
// => Write a program to calculate the sum of natural numbers upto N
/*
int num27;
int sum1 = 0;
cout<<"Enter the end limit  : ";
cin>>num27;
for(int k =1;k<=num27;k++){
    sum1 = sum1+k;

}
cout<<"The sum of given 'N' numbers is = "<<sum1<<" \n";
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 22:)---------
// => Generate the Multiplication table of given number using for loop
/*
int b;
cout<<"Enter the number to print table :  ";
cin>>b;
for(int l=1;l<=10;l++){        
   

    cout<<b<<" x "<<l<<" = "<<b*l<< "\n"; 

                     
                     
} 

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 23:)---------
// => Print the Fibonacii series upto certain limit

/*
int num28=0;
int num29=1;
int num30 , q ,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<num28<<" "<<num29<<" "; 
 for(q=2;q<number;++q)     
 {    
  num30=num28+num29;    
  cout<<num30<<" ";   
  num28=num29;    
  num29=num30;    
 }

*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 25:)---------
// => Calculate the power of a number using for loop
/*
int power = 1;
int num31,num32;
cout<<"Enter the base : ";
cin>>num31;
cout<<"Enter the exponent : ";
cin>>num32;
for(int i =1;i<=num32;i++){
    power=power*num31;
}
cout<<num31<<" ^ "<<num32<<" = "<<power<<"\n";

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 26:)---------
// => Print prime numbers wihtin a given range

/*int prime;
cout<<"Enter Number : ";
cin>>prime;
for (int i=2; i<prime; i++) 
for (int j=2; j<=i; j++)
{
    if (i % j == 0) 
        break;
     else if (i == j+1)
        cout << i << " ";
    }*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 27:)--------- 
// => Display Numbers from N to 1 in Reverse using a for loop
/*
int num32;
cout<<"Enter Last number to print Reverse order : ";
cin>>num32;
for(int i =num32;i>=1;i--){
    cout<<i<<" ";
}

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 28:)---------
// => Genrate series of odd numbers using a for loop
/*
int num33;
cout<<"Enter number to print odd numbers upto this No# : ";
cin>>num33;
for(int i =1;i<=num33;i++){
    if(i%2 != 0){
        cout<<i<<" ";
    }
}
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 29:)---------
// => Implemwnt a program to print a pyramid pattern using nested loops and for loop
/*
int num34;
cout<<"Enter Number of Rows : ";
cin>>num34;
for(int i =1;i<=num34;i++){
    for(int j=1;j<=num34-i;j++){
        cout<<" ";
    }
    for(int j =1;j<=i;j++){
        cout<<"* ";
    }
    cout<<"\n";
}

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 30:)---------
// => 
/*
int num35, rev=0, rem, temp;
    cout<<"Enter the Number: ";
    cin>>num35;
    temp = num35;
    for(int num35;temp>0;)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev==num35)
        cout<<"\nIt is a Palindrome Number";
    else
        cout<<"\nIt is not a Palindrome Number";
    cout<<endl;
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 31:)---------
// => Create a basic Calculator using Switch case
/*
char oper;
 float num36,num37;
 cout<<"Please select one operator(+,-,*,/)\n";
 cin>>oper; // jo input lena hai wohi case mn likhna hai wrna program run nhi ho ga
 cout<<"Please enter two numbers\n";
 cin>>num36>>num37;
 switch(oper){
  case '+':
 cout<<num36<<"+"<<num37 <<" = " << num36+num37;
  break;
  case '-':
  cout<<num36<< "-" << num37 <<" = " << num36-num37;
  break;
  case '*':
  cout<<num36<< "*" << num37 << " = " << num36*num37;
  break;
  case '/':
  cout<<num36<< "/" << num37 << " = " << num36/num37;
  break;
  default:
  cout<<"Sorry I can't this operation\n";
      break;
  }
  */


 //_____________________________________________________________________________________________________________________________

//                                        --------(Q => 32:)---------
// => Display the day of the week using switch case with number 1-7
/*
char num38;
cout<<"PLease select one number [1,2,3,4,5,6,7] : ";
cin>>num38;
switch(num38){
    case '1':
    cout<<num38<<" => "<<" Monday\n";
    break;
    case '2':
    cout<<num38<<" => "<<" Tueday\n";
    break;
    case '3':
    cout<<num38<<" => "<<" Wednesday\n";
    break;
    case '4':
    cout<<num38<<" => "<<" Thursday\n";
    break;
    case '5':
    cout<<num38<<" => "<<" Friday\n";
    break;
    case '6':
    cout<<num38<<" => "<<" Saturday\n";
    break;
    case '7':
    cout<<num38<<" => "<<" Sunday\n";
    break;
    default:
    cout<<"Invalid Input\n";
    break;
    
}

 */

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 33:)---------
// => Check and display the name of a month based on its number using switch case
/*
int num39;
cout<<"Please select one number from 0-12 : ";
cin>>num39;
switch(num39){
    case 1:
    cout<<num39<<" =>"<<"January\n";
    break;
    case 2:
    cout<<num39<<" =>"<<"February\n";
    break;
    case 3:
    cout<<num39<<" =>"<<"March\n";
    break;
    case 4:
    cout<<num39<<" =>"<<"April\n";
    break;
    case 5:
    cout<<num39<<" =>"<<"May\n";
    break;
    case 6:
    cout<<num39<<" =>"<<"June\n";
    break;
    case 7:
    cout<<num39<<" =>"<<"July\n";
    break;
    case 8:
    cout<<num39<<" =>"<<"August\n";
    break;
    case 9:
    cout<<num39<<" =>"<<"September\n";
    break;
    case 10:
    cout<<num39<<" =>"<<"October\n";
    break;
    case 11:
    cout<<num39<<" =>"<<"November\n";
    break;
    case 12:
    cout<<num39<<" =>"<<"December\n";
    break;
    default:
    cout<<"Invalid Input\n";
    break;
}
*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 34:)---------
// => convert a number into words using switch case

/*
int num40,sum,r;
cout<<"Enter the number : ";
cin>>num40;

switch(num40){
    case 1:
    cout<<"One ";
    break;
    case 2:
    cout<<"Two ";
    break;
    case 3:
    cout<<"Three ";
    break;
    case 4:
    cout<<"Four ";
    break;
    case 5:
    cout<<"Five ";
    break;
    case 6:
    cout<<"Six ";
    break;
    case 7:
    cout<<"Seven ";
    break;
    case 8:
    cout<<"Eight ";
    break;
    case 9:
    cout<<"Nine ";
    break;
    default:
    cout<<"Invalid Input\n";
}

*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 35:)---------
// => Implement a simple game menu using switch case 

/*
int num41,num42,num43;
cout<<"1=> Start the game\n";
cout<<"2=> Settings\n";
cout<<"3=> Notifications\n";
cout<<"4=> Sound\n";
cin>>num41;

switch(num41){
    case 1:
    newgame:
    cout<<"1=> New Game\n";
    cout<<"2=> Load Game\n";
    cin>>num42;
    if(num42==1){
        cout<<"Welcome! to the New Game\n";
    }
    else if(num42==2){
        loadgame:
        cout<<"1:load  => 13/11/23\n";
        cout<<"2:load  => 14/11/23\n";
        cin>>num43;
        if(num43==1){
            cout<<"Welcome to the load game 13/11/23\n";
        }
        else if(num43==2){
            cout<<"Welcome to the load game 14/11/23\n";
            
        }
        else{
            cout<<"Invalid Entery\n";
            goto loadgame;
        }
    }
    else{
        cout<<"Invalid Command'n";
        goto newgame;
    }
    break;

    case 2:
    cout<<"camera setting\n";
    cout<<"Sensitivity setting\n";
    break;

    case 3:
    cout<<"Game updates Notification\n";
    cout<<"Network Setting\n";
    cout<<"Game Alert Notification\n";
    break;

    case 4:
    cout<<"game sound\n";
    cout<<"Microphone\n";
    break;
    default:
    cout<<"Invalid Input\n";
    break;

}
*/


//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 36:)---------
// => Display a shape using switch case(square,Triangle)
/*
int num44;
cout<<"1=> Square\n";
cout<<"2=> Triangle\n";
cin>>num44;
switch(num44){
    case 1:
    cout<<"This is the shape of Square\n";
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    case 2:
    cout<<"This is the shape of triangle\n";
    for(int i =1;i<=6;i++){
        for(int j =1;j<=6-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 37:)---------
// => Create a program to convert temperature units (Celcius to FAhrenheit)
/*
float num45;
 char button3;

 cout<<"\nPress F,C for conversion\n";
 cin>>button3;
    
switch(button3){
  case 'f':
 case 'F':
  cout<<"please enter your temperature in celcius\n";
  cin>>num45;
  cout<<"The given temperature is "<<num45<<"*9/5+32 = "<<num45 *9/5+32 <<" Fahrenheit\n";
  break;
   case 'C':
  case 'c':
  cout<<"please enter your temperature in farhenheit\n";
  cin>>num45;
  cout<<"The given temperature is "<<num45<<"*5/9-32 = "<<(num45-32) *5/9 <<" celcius\n";
  break;
  default:
  cout<<"ERROR! your selected program is not correct\n";
   break;
}
*/


//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 38:)---------
//  => Implement a program to check weekdays and weekends using switch case
/*
char check ;
cout<<"Enter the day check : ";
cin>>check;
switch(check){
    case '1':
    cout<<check<<" => "<<" Monday is weekday is weekday\n";
    break;
    case '2':
    cout<<check<<" => "<<" Tueday is weekday\n";
    break;
    case '3':
    cout<<check<<" => "<<" Wednesday is weekday\n";
    break;
    case '4':
    cout<<check<<" => "<<" Thursday is weekday\n";
    break;
    case '5':
    cout<<check<<" => "<<" Friday is weekday\n";
    break;
    case '6':
    cout<<check<<" => "<<" Saturday is a weekend\n";
    break;
    case '7':
    cout<<check<<" => "<<" Sunday is a weekend\n";
    break;
    default:
    cout<<"Invalid Input\n";
    break;
    
}
*/


//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 39:)---------
// => check and display the type of vehical based on registration number using switch case

/*
char num46;
cout<<"'01','02','03','04'";
cout<<"Enter car Registeration No : ";
cin>>num46;
switch(num46){
    
    case '1':
    cout<<"Car Registration No# 01\n";
    cout<<" Car         => Toyota Corolla Xli\n";
    cout<<" Modle       => 2013\n";
    cout<<" Car Owner   => Ranjha\n";
    break;
   
    case '2':
    cout<<"Car Registration No# 01\n";
    cout<<" Car         => Audi E-tron GT\n";
    cout<<" Modle       => 2023\n";
    cout<<" Car Owner   => Tabish Almas\n";
    break;
    
    case '3':
    cout<<"Car Registration No# 01\n";
    cout<<" Car         => SUV Bentley Bentayga\n";
    cout<<" Modle       => 2023\n";
    cout<<" Car Owner   => Danish Almas\n";
    break;
     
    case '4':
    cout<<"Car Registration No# 01\n";
    cout<<" Car         => Rolls-Royace Boat-Tail\n";
    cout<<" Modle       => 2022\n";
    cout<<" Car Owner   => Muazzam Ali\n";
    break;
    default:
    cout<<"Invalid Registration No#\n";
    break;
}
    
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 40:)---------
// => Calculate the total cost of a shopping cart using switch case for different items
/*
int num47,num48,num49;
cart:
cout<<"Shopping Cart items.......\n";
cout<<"1:pant  "<<"      "<<" Rs 1500\n";
cout<<"2:shirt "<<"      "<<" Rs 1000\n";
cout<<"3:Jacket"<<"      "<<" Rs 2500\n";
cout<<"4:Suit  "<<"      "<<" Rs 3000\n";
cout<<"PLease press one button to select your item\n";
cin>>num47;
switch(num47){
    case 1:
    cout<<num47<<"=> You Selected pant\n";
    cout<<"Enter Quantity : ";
    cin>>num48;
   
    cout<<"Press 1: Continue to shopping cart\n";
     cout<<"Press 2: Bill\n";
    cin>>num49;
    if(num49==1){
        goto cart;
    }
    else if(num49==2){
        cout<<"Total pants = "<<num48<<"\n";
        cout<<"Total Amount = "<<" Rs "<<num48*1500<<"\n"; 
    }
    break;
    case 2:
    cout<<num47<<"=> You Selected Shirt\n";
    cout<<"Enter Quantity : ";
    cin>>num48;
   
    cout<<"Press 1: Continue to shopping cart\n";
     cout<<"Press 2: Bill\n";
    cin>>num49;
    if(num49==1){
        goto cart;
    }
    else if(num49==2){
        cout<<"Total Shirts = "<<num48<<"\n";
        cout<<"Total Amount = "<<" Rs "<<num48*1000<<"\n"; 
    }
    break;
    case 3:
    cout<<num47<<"=> You Selected Jacket\n";
    cout<<"Enter Quantity : ";
    cin>>num48;
   
    cout<<"Press 1: Continue to shopping cart\n";
     cout<<"Press 2: Bill\n";
    cin>>num49;
    if(num49==1){
        goto cart;
    }
    else if(num49==2){
        cout<<"Total Jackets = "<<num48<<"\n";
        cout<<"Total Amount = "<<" Rs "<<num48*2500<<"\n"; 
    }
    break;
    case 4:
    cout<<num47<<"=> You Selected Suit\n";
    cout<<"Enter Quantity : ";
    cin>>num48;
   
    cout<<"Press 1: Continue to shopping cart\n";
     cout<<"Press 2: Bill\n";
    cin>>num49;
    if(num49==1){
        goto cart;
    }
    else if(num49==2){
        cout<<"Total pants = "<<num48<<"\n";
        cout<<"Total Amount = "<<" Rs "<<num48*3000<<"\n"; 
    }
    break;
    default:
    cout<<"Invalid Item Selected\n";
    break;
   
   
}
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 41:)---------
// => Dertmine the Eligibilty for vote based on Age
/*
int num50;
cout<<"Enter the age of candidate : ";
cin>>num50;
if(num50>=18){
    cout<<"Yes candidate is able to cast Vote\n";
}
else{
    cout<<"Sorry this candidate is not able to cast Vote\n";
}

*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 42:)---------
// => Calculate the area of a shape(Circle,Rectangle,Tringle) based on user using if else
/*
float num51;
 float length,width,height,base,radius;
 cout<<"\nplease select one to show the solution \n";
 cout<<"1:Triangle\n";
 cout<<"2:Circle\n";
 cout<<"3:Rectangle\n";
 cout<<"Press 1,2,3 to continue\n";
 cin>>num51;
 if(num51==3){
 
  
  cout<<"enter the length of Rectangle\n";
  cin>>length;
  cout<<"enter the width of Rectangle\n";
  cin>>width;
  cout<<"Area of Rectangle is "<<length<< "*"<<width<< " = " <<length*width;
 }
  else if(num51==1){
  cout<<"enter the base of triangle\n";
  cin>>base;
  cout<<"enter the height of triangle\n";
  cin>>height;
  cout<<"Area of triangle is 1/2"<<base << "*" << height <<" = "<<1/2*base*height;
  }
  else if(num51==2){
  cout<<"enter the radius of circle\n";
  cin>>radius;
  
  cout<<"Area of circle is (3.14)"<<radius << "*" << radius <<" = "<<3.14*radius*radius;
  }
  else{
    cout<<"Invalid Entery\n";
  }
  */

 //_____________________________________________________________________________________________________________________________

//                                        --------(Q => 44:)--------
// => Determine the type of a triangle based on its sides
/*
int num52,num53,num54;
cout<< "Please enter the one side of triangle : ";
cin>>num52;
cout<< "Please enter the 2nd side of triangle : ";
cin>>num53;
cout<< "Please enter the 3rd side of triangle : ";
cin>>num54;
if(num52==num53 && num52== num54){
    cout << "\nThis is an Equilateral Triangle";
}
else if(num52==num53||num53==num54||num52==num54 ){
    cout << "\nThis is an Isosceles Triangle";
}
else{
    cout << "\nThis is a Scalene Triangle";
}
*/


//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 45:)--------
// => Find the Largest and smaller number Among three number using if else
/*
int num55,num56,num57;
cout<<"Enter 1st number : ";
cin>>num55;
cout<<"Enter 2nd number : ";
cin>>num56;
cout<<"Enter 3rd number : ";
cin>>num57;
if(num55>num56&&num55>num57){
    cout<<num55<<" Largest\n";
}
else if(num56>num55&&num56>num57){
    cout<<num56<<" Largest\n";
}
else if(num57>num55&&num57>num56){
    cout<<num57<<" Largest\n";
}
 if(num55<num56&&num55<num57){
    cout<<num55<<" smallest\n";
}
else if(num56<num55&&num56<num57){
    cout<<num56<<" Smallest\n";
}
else if(num57<num55&&num57<num56){
    cout<<num57<<" Smallest\n";
}
*/


//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 46:)--------
// => Check if a given year is a leap year or not
/*
int num58;
cout<<"Enter the Year to Check leap or not : \n";
cin>>num58;
if(num58 % 4 == 0){
    cout<< num58 << " is a leap Year\n";
}
else{
    cout<< num58 << " is not a leap year\n";
}

*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 47:)--------
// => Calculate the Electricity bill based on units consumed
/*
int num59;
cout<<"Enter your consumed units of Electicity : ";
cin>>num59;
if(num59>1){
    cout<<"Consumed units:     "<<num59<<"\n";
    cout<<"price of One unit:   Rs:159\n";
    cout<<"Total Amount = 159*"<<num59<<" =>"<<159*num59<<"\n";

}
else{
    cout<<"No units consumed\n";
}
*/


//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 48:)--------
/// => Determine if a number is a multiple of both 3 and 5
/*
int num60;
cout<<"Please enter the number: ";
cin>>num60;
for(int i=1;i<=num60;i++){
    if(i % 3 == 0){
        cout<<i<<"\n";
        
    }
    else if(i % 5 == 0){
        cout<<i<<"\n";
    }
   
    
}
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 49:)--------
// => Check if a number is a perfect square or not
/*
int num61;
cout<<"Enter number to check perfect square: ";
cin>>num61;
for(int i=1;i<=num61;i++){
    if(i*i==num61){
        cout<<num61<<" is a perfect square\n";
        break;
    }
          
}
*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 51:)-------
// => Display a message depending on the time of day
/*
string mor1,aft1,nig1,eve1;
string mor = "morning";
string aft = "afternoon";
string nig = "night";
string eve ="evening";
cout<<"Enter day time like (morning,evening,night,afternoon):   ";
cin>>mor1;
if(mor1==mor){
    cout<<"Good Morning Dear!\n";
}
else if(mor1==aft){
    cout<<"Good Afternoon Dear!\n";

}
else if(mor1==nig){
    cout<<"Good Night Dear!\n";
}
else if(mor1==eve){
    cout<<"Good Eveninh Dear!\n";
} 
else{
    cout<<"Error! some invalid entery\n";
}
*/
//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 51:)-------
// => identify the type of character entered(upper case ,lowercase)
/*
char button3;
 cout<<"please put your alphabet\n";
     if(button3>='a' && button3 <='z'){
  cout<<button3<<"  is lower case\n";
 }
 else if(button3>='A' && button3 <='Z'){
  cout<<button3<<" is a upper case\n";
 }

    */

 //_____________________________________________________________________________________________________________________________

//                                        --------(Q => 52:)-------
// =>  check given number is perfect cube or not
/*
int num62;
cout<<"Enter number to check perfect square: ";
cin>>num62;
for(int i=1;i<=num62;i++){
    if(i*i*i==num62){
        cout<<num62<<" is a perfect Cube\n";
        break;
    }
          
}
*/

 //_____________________________________________________________________________________________________________________________

//                                        --------(Q => 54:)-------
// => Find the largest number among five numbers using nested if
/*
int num63,num64,num65,num66,num67;
cout<< " Enter 1st number : ";
cin>>num63;
cout<< " Enter 2nd number : ";
cin>>num64;
cout<< " Enter 3rd number : ";
cin>>num65;
cout<< " Enter 4th number : ";
cin>>num66;
cout<< " Enter 5th number : ";
cin>>num67;
if(num63>=num64 && num63>=num65 && num63>=num66 &&num63>=num67){
    cout<<num63<< " is Greater number\n";
}
else if(num64>=num63 && num64>=num65 && num64>=num66 &&num64>=num67){
    cout<<num64<< " is Greater number\n";

}
else if(num65>=num63 && num65>=num64 && num65>=num66 &&num65>=num67){
    cout<<num65<< " is Greater number\n";
}
else if(num66>=num63 && num66>=num64 && num66>=num65 &&num66>=num67){
    cout<<num66<< " is Greater number\n";
}
else{
    cout<<num67<< " is greater number\n";
}  
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 55:)-------
// => Detrmine if a year is aleap year and century year
/*
int num68;
cout<<"Enter the Year to Check leap or not : \n";
cin>>num68;
if(num68 % 4 == 0){
    cout<< num68 << " is a leap Year\n";
}
else{
    cout<< num68 << " is not a leap year\n";
}

*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 56:)-------
// => check if a given character is an alphabet or digitt

/*
char alpha;
cout<<"Enter your digit or alphabet : ";
cin>>alpha;
if(alpha>='a'&& alpha<='z'){
    cout<<alpha<< " is an Alphabet\n";
}
else if(alpha>='A'&& alpha<='Z'){
    cout<<alpha<< " is an Alphabet\n";
}
else{
    cout<<alpha<<" is a digit\n";
}
*/


//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 57:)-------
// => Identify the Quadrant in which a given point lies
/*
int num69,num70;
cout<<"Enter your X-axis point : ";
cin>>num69;
cout<<"Enter your Y-axis point : ";
cin>>num70;

if(num69>0 && num70>0){
    cout<<"("<<num69<<","<<num70<<")"<< " point lies in 1st Quadrant\n";
}
else if(num69<0 && num70>0 ){
    cout<<"("<<num69<<","<<num70<<")"<< " point lies in 2nd Quadrant\n";
}
else if(num69<0 && num70<0){
    cout<<"("<<num69<<","<<num70<<")"<< " point lies in 3rd Quadrant\n";
}
else if(num69>0 && num70<0){
    cout<<"("<<num69<<","<<num70<<")"<< " point lies in 4th Quadrant\n";
}
else{
    cout<<"your entered Invalid points\n";
}

*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 58:)-------
// => Calculate the discount based on purchase amount using if else
/*
float num71;
cout<< " 2 perc  diccount upto Rs:199 item\n '5' perc dicount upto Rs:499 items\n '10' perc discount above Rs:500 items \n  ";
cout<< " Enter your purchase : ";
cin>>num71;
if(num71<=199){
    cout<< " total Amount : "<<num71<<"\n";
    cout<<" Discount : 2%\n";
    cout<< "Actual Amount : "<<num71-(0.02*num71)<<"\n";
}
else if(num71<=499){
    cout<< " total Amount : "<<num71<<"\n";
    cout<<" Discount : 5%\n";
    cout<< "Actual Amount : "<<num71-(0.05*num71)<<"\n";
}
else if(num71>=500){
    cout<< " total Amount : "<<num71<<"\n";
    cout<<" Discount : 10%\n";
    cout<< "Actual Amount : "<<num71-(0.1*num71)<<"\n";
}
else{
    cout<< " You enterd Invalid Amount\n";
}
*/

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 59:)-------

//_____________________________________________________________________________________________________________________________

//                                        --------(Q => 60:)-------
// Check if anumber is positive, negative or zero and even or odd
/*
int num72;
cout<< "Enter your number : ";
cin>>num72;
if(num72>0){
    cout<<num72<< " is positive number\n";
    if(num72%2==0){
        cout<<num72<<" is an even number\n";
    }
    else{
        cout<<num72<<" is odd number\n";
    }
}
else if(num72<0){
    cout<<num72<<" is Negative number\n";

}

else{
    cout<<num72<< " is Zero";
}


*/


















      
      

     







      
    








    
 








    








          






    return 0 ;
}