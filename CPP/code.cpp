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


#include<iostream>
using namespace std;

int main(){
    int a,b,result;
    cout<<"Please enter both number ";
    cin>>a>>b;

    char op;
    cout<<"Please enter operator : ";
    cin>>op;


    switch(op){
        case '+':
                result = a+b;
                cout<<"Addition : "<<result<<endl;
                break;
        case '-':
                result = a-b;
                 cout<<"Sub : "<<result<<endl;
                break;
        case '*':
                result = a*b;
                 cout<<"<Mul> : "<<result<<endl;
                break;
        case '/':
                result = a/b;
                 cout<<"Div : "<<result<<endl;
                break;
        case '%':
                result = a%b;
                 cout<<"Rem : "<<result<<endl;
                break;
        default :
                cout<<"Please enter Valid Operator!";
      
    }

    
}