// #include<iostream>
// // using namespace std;

// int main(){
//     std::cout<<"Hello\tToppers! ";
//     std::cout<<"Hey Class!";
// }


// #include<iostream>
// // using namespace std;

// int main(){
//     std::cout<<"Hello Toppers!"<<std::endl;
//     std::cout<<"Hey Class!";
// }



// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Hello Toppers!"<<endl;
//     cout<<"Hey Class!";
// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    cout<<"Int size : "<<sizeof(int)<<endl;
//    cout<<"float : "<<sizeof(float)<<endl;
//    cout<<"Double : "<<sizeof(double)<<endl;
//    cout<<"Char : "<<sizeof(char)<<endl;
//    cout<<"String : "<<sizeof(string)<<endl;
//    cout<<"Bool : "<<sizeof(bool)<<endl;

// }



// #include<iostream>
// using namespace std;

// int main(){
   
// // Variable declaration

// // int number = 10;  // ok
// // int auto = 10;     // Not Ok

// // string first name = "Pawan";  // Not OK
// // string first_name = "Pawan";   // OK

// // int @num = 20;   // Not OK

// // string 123name = "Pawan";   // Not OK

// // string name132334 = "Pawan";

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int number;  // variable declaration

//     number = 20; // insilization

//     cout<<"Number : "<<number<<endl;   // output -> 20
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int number = 20;  // variable declaration

//     // number = 20; // insilization

//     cout<<"Number : "<<number<<endl;   // output -> 20
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int number = 20;  // variable declaration

// //    int number = 30; // Not ok

//     cout<<"Number : "<<number<<endl;   // output -> 20
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int number = 20;  

//     number = 50;

//     cout<<"Number : "<<number<<endl;   // output -> 50
// }



// #include<iostream>
// using namespace std;

// int main(){
//    const int number = 20;  

//     // number = 50; // Not Ok

//     cout<<"Number : "<<number<<endl;   // output -> 50
// }



// #include<iostream>
// using namespace std;

// int main(){
//    const int number;  

//     number = 50; // Not Ok

//     cout<<"Number : "<<number<<endl;   // output -> 50
// }


// #include<iostream>
// using namespace std;

// int main(){
//    const int number;  

//     cout<<"Please enter Number : ";
//     cin>>number;   // Not Ok

//     cout<<"Number : "<<number<<endl;   // output -> 50
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int number;
//     cout<<"Please enter number : "; // user ko pata chale kya enter krna isliye likha hai
//     cin>>number;   // user -> input-> number

//     cout<<"Output : "<<number;   // output
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int number;
//     cout<<"Please enter number : "; // User ko pata chale kya enter krna isliye likha hai
//     cin>>number;   // user -> input-> number

//     cout<<"Output : "<<number;   // output
// }



// #include<iostream>
// using namespace std;

// int main(){
//     float variable;
//     cout<<"Please enter variable : "; // User ko pata chale kya enter krna isliye likha hai
//     cin>>variable;   // user -> input-> number

//     cout<<"Output : "<<variable;   // output
// }





// #include<iostream>
// using namespace std;

// int main(){
//     double variable;
//     cout<<"Please enter variable : "; // User ko pata chale kya enter krna isliye likha hai
//     cin>>variable;   // user -> input-> number

//     cout<<"Output : "<<variable;   // output
// }



// #include<iostream>
// using namespace std;

// int main(){
//     char variable;
//     cout<<"Please enter variable : "; // User ko pata chale kya enter krna isliye likha hai
//     cin>>variable;   // user -> input-> number

//     cout<<"Output : "<<variable;   // output
// }

// #include<iostream>
// using namespace std;

// int main(){
//     char variable = "p";
//     cout<<"Output : "<<variable;   // output
// }




// #include<iostream>
// using namespace std;

// int main(){
//     string variable = "Pawan Maurya";
//     cout<<"Output : "<<variable;   // output
// }



// #include<iostream>
// using namespace std;

// int main(){
//     bool variable = false;
//     cout<<"Output : "<<variable;   // output
// }



//Type of Operators Operator Precedence Type Conversation



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a++;
//     cout<<"Value of a : "<<a<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     ++a;
//     cout<<"Value of a : "<<a<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a--;
//     cout<<"Value of a : "<<a<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     --a;
//     cout<<"Value of a : "<<a<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a--;

//     cout<<a<<endl;

//     int result = a++ + a++;  //9+10

//     cout<<"Value of a : "<<result<<endl;
//       cout<<a<<endl;  // 
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Sub : "<<(a-b)<<endl;
//     cout<<"Multiply  : "<<(a*b)<<endl;
//     cout<<"Div : "<<(a/b)<<endl;
//     cout<<"Rem : "<<(a%b)<<endl;
// }


//Operators: ==, !=, <, >, <=, >=

// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Please enter your age : ";
//     cin>>age;

//     if(age>=18){
//         cout<<"Welcome, You are accepted";
//     }else{
//         cout<<"Sorry, Bhai";
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Please enter your age : ";
//     cin>>age;

//     if(age<18){

//         cout<<"Bhai Abhi tu Bacha hai";
       
//     }
//     else if(age>=18 && age<=30){

//         cout<<"Welcome, You are accepted";
//     }
//     else if(age>40 && age<50){

//         cout<<"Ok Ok, Chalega !";

//     }
//     else{
//         cout<<"Bahut Late Ho chuka hai!";
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int varj_marks = 18;
//     int raj_marks = 30;


//     if(varj_marks != raj_marks){
//         cout<<"Both students have equal marks!";
//     }else{
//         cout<<"Both students marks not equal!";
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10; 
//     int b = 20;
//     int c = 30;

//     if((b>a) || (b>c)){
//        cout<<"koi bhee ek true condition hoga ya dono hoga to Code run.... krega"; 
//     }
//     else{
//         cout<<"Jab dono condition galat honge logical or me to else part chalega!";
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
  
//   bool isvalue = false;

//   if(!isvalue){
//     cout<<"Ey code chal raha hai na iska mtlb uper false hai isValue!";
//   }else{
//     cout<<"Ey Code Chal raha hai na iska mtlb uper vala isValue  true hai!";
//   }
// }



// #include<iostream>
// using namespace std;

// int main(){
  
//  int a = 10;
//  int b = 5;

//  int result = a&b;

//  cout<<"Result : "<<result<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
  
//  int a = 10;
//  int b = 5;

//  int result = a^b;

//  cout<<"Result : "<<result<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
  
// int a = ~(-100);
//  cout<<"Result : "<<a<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
  
// int a = 10;

// int result = a<<6;

//  cout<<"Result : "<<result<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
  
// int a = 10;

// int result = a>>2;

//  cout<<"Result : "<<result<<endl;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     // a = a+10;

//     a +=10;
//     cout<<a<<endl;

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     // a = a - 10;

//     a -=10;
//     cout<<a<<endl;

// }



// #include<iostream>
// using namespace std;

// int main(){
  
//   int age = 13;

//   (age>=18)?cout<<"You are eligible":cout<<"Sorry, Your are not eligible";

// }



// #include<iostream>
// using namespace std;

// int main(){
  
// int a = 10;
// int b = 20;
// int c = 5000;

// // ((a>b )&& (a>c))? cout<<"Greater A : "<<a : ((b>a )&& (b>c)) ? cout<<"Greater B : "<<b : cout<<"Greater C : "<<c;
// ((a<b )&& (a<c))? cout<<"Small A : "<<a : ((b<a )&& (b<c)) ? cout<<"Small B : "<<b : cout<<"Small C : "<<c;

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Please enter value of n : ";
//     cin>>n;

//     // int sum = (n(n+1))/2;

//     int sum = n*(n+1)/2;

//     cout<<"Sum of natural number : "<<sum<<endl;
// }


//  Switch Case


// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,result;
//     cout<<"Please enter both number ";
//     cin>>a>>b;

//     char op;
//     cout<<"Please enter operator : ";
//     cin>>op;


//     switch(op){
//         case '+':
//                 result = a+b;
//                 cout<<"Addition : "<<result<<endl;
//                 break;
//         case '-':
//                 result = a-b;
//                  cout<<"Sub : "<<result<<endl;
//                 break;
//         case '*':
//                 result = a*b;
//                  cout<<"<Mul> : "<<result<<endl;
//                 break;
//         case '/':
//                 result = a/b;
//                  cout<<"Div : "<<result<<endl;
//                 break;
//         case '%':
//                 result = a%b;
//                  cout<<"Rem : "<<result<<endl;
//                 break;
//         default :
//                 cout<<"Please enter Valid Operator!";
      
//     }

    
// }



// Constant Variable

// #include<iostream>
// using namespace std;
// int main(){
//         int a = 10;

//         cout<<a<<endl;

//         a = 20;

//         cout<<a<<endl; 
// }




// #include<iostream>
// using namespace std;
// int main(){
//       const  int a = 10;

//         cout<<a<<endl;

//         // a = 20;

//         // cout<<a<<endl; 
// }




// #include<iostream>
// using namespace std;
// int main(){
//       const  int a;

// //       cin>>a;   //Not ok
// //       a=20;   // Not ok

//         cout<<a<<endl;

//         // a = 20;

//         // cout<<a<<endl; 
// }


//Miro

// #include<iostream>
// using namespace std;
// #define myvalue "Pawan"
// int main(){
//         cout<<myvalue<<endl;    
// }



// #include<iostream>
// using namespace std;

// int main(){

//         int age;

//         cout<<"Please enter your age!"<<endl;

//         cin>>age;

//         if(age>=18){
//                 cout<<"You are eligible for Mirjapur3!"<<endl;
//         }
// }



// #include<iostream>
// using namespace std;

// int main(){

//         int age;

//         cout<<"Please enter your age!"<<endl;

//         cin>>age;

//         if(age>=18){
//                 cout<<"You are eligible for Mirjapur3!"<<endl;
//         }
//         else{
//                 cout<<"Sorry bhai, Abhi bada ho ja"<<endl;
//         }
// }



// #include<iostream>
// using namespace std;

// int main(){

//         int age;

//         cout<<"Please enter your age!"<<endl;

//         cin>>age;

//         if(age>=18){
//                 cout<<"You are eligible for Mirjapur3!"<<endl;
//         }
//         else if(age>10 && age<18){
//                 cout<<"Bhai Cartoon movie dekh le!"<<endl;
//         }
//         else{
//                 cout<<"Toye se khelo beta!"<<endl;
//         }
// }




// #include<iostream>
// using namespace std;

// int main(){

//         int age;

//         cout<<"Please enter your age!"<<endl;

//         cin>>age;

//         if(age>=18){
//                 if(age>18 && age<30){
//                         cout<<"Axe se padhai krna chahiye"<<endl;
//                 }
//                 else{
//                         cout<<"Apne faimly ka dhyan rkho!"<<endl;
//                 }
//         }
//         else if(age>10 && age<18){
//                 cout<<"Bhai Cartoon movie dekh le!"<<endl;
//         }
//         else{
//                 cout<<"Toye se khelo beta!"<<endl;
//         }
// }



// Loop 

// For loop

// #include<iostream>
// using namespace std;

// int main(){

//         for(int num = 1; num <= 10; num++){
//                 cout<<num<<endl;
//         }
// }


// #include<iostream>
// using namespace std;

// int main(){

//         int num;

//         for(num = 1; num <= 10; num++){
//                 cout<<num<<endl;
//         }
// }


// #include<iostream>
// using namespace std;

// int main(){

//         int num = 1;

//         for(; num <= 10; num++){
//                 cout<<num<<endl;
//         }
// }



// #include<iostream>
// using namespace std;

// int main(){

//         int num = 1;

//         for(; num <= 10; ){
//                 cout<<num<<endl;

//                 num++;
//         }
// }



// #include<iostream>
// using namespace std;

// int main(){

//         for( int num = 10; num >=1; num-- ){

//               cout<<num<<endl;
               
//         }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int marks;  // declation

//     cout<<"Enter Your Marks :";  // user ko help krega kya enter krna hai

//     cin>>marks;   // user input


//     if(marks >= 90){
//         cout<<"Eligible for Senior post Job"<<endl;
//     }

//     else if(marks>=70 && marks<90){
//         cout<<"Bhai ap jounier post k liye eligible ho!"<<endl;
//     }  
//     else{
//         cout<<"Sorry, You are not eligible!";
//     }
 

// }



// #include<iostream>
// using namespace std;

// int main(){

//    int num1;

//    cout<<"Enter your num1 : ";

//    cin>>num1;

//    int num2;

//    cout<<"Enter your num2 : ";

//    cin>>num2;

//     (num1>num2) ? cout<<"Num1 is greater!" : cout<<"Num2 is greater!";

 
// }


// #include<iostream>
// using namespace std;

// int main(){

//    int num1;

//    cout<<"Enter your num1 : ";

//    cin>>num1;

 

//     (num1 >0 ) ? cout<<"Number is positive number!" : cout<<"Number is negative!";

 
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int sum = 0;

//     for(int i = 50; i <=100; i++){
//         sum = sum + i; 
//     }

//     cout<<sum<<endl;
// }


//  Self Work 
// https://docs.google.com/document/d/1qPA8fkQ00KiHyW7L-yK3LgfytwwkyPbdxSIi6L5MHA0/edit?tab=t.0
// https://docs.google.com/document/d/1elYJ0XEK5WBhFftZy64DY1jAqoIUsdjUi7_b-KcFFEM/edit?tab=t.0
// https://docs.google.com/document/d/1hVNsAndhj72jxGtONec8GYnJmUsA8fYGg0ypp1dkpic/edit?tab=t.0
// https://docs.google.com/document/d/1CKCYpVt_fkgKtXxVFa_iWAJN6JI3hB2S4bcK2T-Kjt8/edit?tab=t.0

// #include<iostream>
// using namespace std;

// int main(){

//     int n = 50;

//     for(int i = 1; i <= 50; i++){

//         if(i%3 == 0 && i%5 == 0){
//             cout<<i<<endl;
//         }
//     }
// }




// #include<iostream>
// using namespace std;

// int main(){

//     int multiply = 1;

//     for(int i = 1; i <=5; i++){
//         multiply = multiply * i; 
//     }

//     cout<<sum<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     //Row -> Outer loop
//     for(int row = 1; row<=4; row++){
//         // Column -> Inner Loop
//         for(int col = 1; col<=4; col++){
//             cout<<"*";
//         }
//         // next row start from next line.
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int row,col;
//     //Row -> Outer loop
//     for(row = 1; row<=4; row++){
//         // Column -> Inner Loop
//         for(col = 1; col<=4; col++){
//             cout<<"*";
//         }
//         // next row start from next line.
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     for(int row = 1; row<=4; row++){

//         if(row == 1 ||row == 4){

//             cout<<"****"<<endl;

//         }else{

//             cout<<"*  *"<<endl;

//         }
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     for(int row = 1; row<=4; row++){

//        // space 

//        for(int space = 1; space<=4-row; space++){
//         cout<<" ";
//        }

//        //star

//        for(int star = 1; star<=4; star++){
//         cout<<"*";
//        }

//        cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     //row

//     for(int row = 1; row <= 4; row++){

//         // Column

//         for(int col = 1; col <= 4; col++){

//             if((row==2 || row == 3) && (col == 2 || col == 3)){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }

//         }
        
//             cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     //row

//     for(int row = 1; row <= 4; row++){

//         // Column

//         for(int col = 1; col <= 4; col++){

//             if((row==2 || row == 3) && (col == 2 || col == 3)){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }

//         }
        
//             cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     // row

//     for(int row = 1; row <= 4; row++){
//         //space 

//         for(int space = 1; space <= 4-row; space++){
//             cout<<" ";
//         }

//         // Star

//         for(int star = 1; star <= 4; star++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     // row

//     for(int row = 1; row <= 5; row++){

//         // col

//         for(int col = row; col <= 5; col++ ){

//             cout<<col;
            
//         }

//         cout<<endl;
//     }
// }




// #include<iostream>
// using namespace std;

// int main(){

//     // row

//     int count = 0;

//     for(int row = 1; row <= 5; row++){

//         // col

//         for(int col = 1; col <= 6-row; col++ ){

//             cout<<col + count<<" ";
            
//         }

//         count++;

//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     // row

//     int count = 4;

//     for(int row = 1; row <= 5; row++){


//         //space 

//         for(int space = 1; space<=count; space++){
//             cout<<" ";
//         }


//         // col

//         for(int col = 1; col <=row; col++ ){

//             cout<<col + count;
            
//         }

//         count--;

//         cout<<endl;
//     }
// }



// https://docs.google.com/document/d/1yi7sNnuRBsViPWU5UKDj9EStYqS4FVFJs7OkVR2ZmUE/edit?tab=t.0

// https://docs.google.com/document/d/1GDvI-zPXKOd0sjcCtGUggCt4T8pTuYoHvGhK6D3P03g/edit?tab=t.0



// https://docs.google.com/document/d/1HNqv4QyNDuKI-NDAhATXfgkRo7r159LXUgRsh4TFRTo/edit?tab=t.0

// https://docs.google.com/document/d/1IEMhGzb_dm7SAGSaSLIeXEjbmMt_qwA-K7N8dib5kPU/edit?tab=t.0


// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5];

//     arr[0] = 10;
//     arr[1] = 11;
//     arr[2] = 12;
//     arr[3] = 13;
//     arr[4] = 14;


//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;
    
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {10,20,30,40,50};

//      cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;
    
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {10,20,30,40,50};

//      cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;
    
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {10,20,30,40,50,60,70};

//      cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     cout<<arr[4]<<endl;
//     cout<<arr[5]<<endl;
//     cout<<arr[6]<<endl;
    
// }


// #include<iostream>
// using namespace std;

// int main(){

//     // sizeof()

//     cout<<"int size : "<<sizeof(int)<<endl;
//     cout<<"Float size : "<<sizeof(float)<<endl;
//     cout<<"Double size : "<<sizeof(double)<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {10,20,30,40,50,60,70};

//     // sizeof()
//     cout<<"Array size : "<<sizeof(arr)<<endl;
//     cout<<"Array size : "<<sizeof(arr[0])<<endl;

//     int length = sizeof(arr)/sizeof(arr[0]);

//     cout<<"Length of Array : "<<length<<endl;


//     for(int i = 0; i < length; i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<"\nArray print using foreach loop"<<endl;

//     for(int element : arr){
//         cout<<element<<" ";
//     }
// }