#include<iostream>
using namespace std;
   //tital making
void tital()
   {
     cout<<endl;
     cout<<"=================================================\n";
     cout<<" TIME \t  |  LECTURER NAME\t| NO.OF STUDENTS |\n";
     cout<<"=================================================\n";
   }
   //details making
void details(string time,string name,int num)
   {
     cout<<time<<"\t"<<name<<"\t"<<"   "<<num<<endl;
     cout<<"----------------------------------------------\n";
   }   
int main()
  {
    int year,day;
    
    //select acadamic year
        cout<<"-----|| acadumic years ||-----\n";
        cout<<endl;
        cout<<"         1)2021/22\n";
        cout<<"         2)2022/23\n";
        cout<<"         3)2023/24\n";
        cout<<"enter your acadamic year:(1,2,3):";
        cin>>year;

      switch(year)
     {
         case 1: cout<<"acadamic year:2021/22\n";break;
         case 2:cout<<"acadamic year:2022/23\n";break;
         case 3:cout<<"acadamic year:2023/24\n";break;
         default:cout<<"invalid year\n";

         return 0;
      }
    cout<<endl;

    //select day
        cout<<"-----||    Day   ||-----\n";
        cout<<"        1)Monday\n";
        cout<<"        2)Tuesday\n";
        cout<<"        3)Wednday\n";
        cout<<"        4)Thursday\n";
        cout<<"        5)Friday\n";
         cout<<"enter the day:(1,2,3,4,5):";
                        cin>>day;

    switch(day)
     {
        case 1:cout<<"day:Monday\n";break;
        case 2:cout<<"day:Tuesday\n";break;
        case 3:cout<<"day:Wednday\n";break;
        case 4:cout<<"day:Thursday\n";break;
        case 5:cout<<"day:Friday\n";break;
        default:cout<<"invalid valiue\n";

        return 0;
      }
        cout<<endl;
    //enter data
        tital();
   
   if(year==3)
     {
         if(day==1)
            { details("8.30-9.30\n9.30-10.30","Mr.A.Rathnayaka",85);
              details("1.30-2.30\n2.30-3.30","Mrs.K.P.Ranathunga",85);}  
                else if(day==2)
                   { details("9.30-10.30","Mr.C.P.Perera",85 );
                     details("10.30-11.30\n11.30-12.30","Mrs.K.De Silva",85);
                     details("1.30-2.30","Mr.S.W.Wirasinghe",85);              }
                         else if(day==3)
                           {  details("8.30-9.30\n9.30-10.30","Mr.C.P.Perera",85 );
                              details("10.30-11.30\n11.30-12.30","Mr.A.Rathnayaka",85);
                              details("2.30-3.30","Mrs.K.P.Ranathunga",85);              }
                                   else if(day==4)
                                     { details("9.30-10.30","Mrs.K.De Silva",85 );  
                                       details("10.30-11.30\n11.30-12.30","Mr.S.W.Wirasinghe",85);
                                       details("1.30-2.30\n2.30-3.30","Mr.A.Rathnayaka",85);          }
                                             else
                                                 {details("8.30-9.30\n9.30-10.30","Mr.C.P.Perera",85 );          
                                                  details("10.30-11.30\n11.30-12.30","Mrs.K.P.Ranathunga",85);    }      }
    else if(year==2)
    {   if(day==1)
           { details("9.30-10.30","Mr.C.P.Perera",82 );
             details("10.30-11.30\n11.30-12.30","Mrs.K.De Silva",82);
             details("1.30-2.30","Mr.S.W.Wirasinghe",82);             } 
                else if(day==2)
                   { details("8.30-9.30\n9.30-10.30","Mr.C.P.Perera",82 ); 
                     details("10.30-11.30\n11.30-12.30","Mr.A.Rathnayaka",82);   }
                        else if(day==3)
                          { details("10.30-11.30\n11.30-12.30","Mr.S.W.Wirasinghe",82);
                            details("1.30-2.30\n2.30-3.30","Mr.A.Rathnayaka",82);         }
                                else if(day==4)
                                    { details("8.30-9.30\n9.30-10.30","Mr.A.Rathnayaka",82);
                                      details("1.30-2.30\n2.30-3.30","Mrs.K.P.Ranathunga",82);      }
                                           else
                                             { details("10.30-11.30\n11.30-12.30","Mr.A.Rathnayaka",82);   }                  }       
             
    else
    {   if(day==1)
         {  details("8.30-9.30\n9.30-10.30","Mr.C.P.Perera",87);
            details("10.30-11.30\n11.30-12.30","Mr.A.Rathnayaka",87);
            details("2.30-3.30","Mrs.K.P.Ranathunga",87);              }
                else if(day==2)
                { details("8.30-9.30\n9.30-10.30","Mr.A.Rathnayaka",87);
                  details("1.30-2.30\n2.30-3.30","Mrs.K.P.Ranathunga",87);         }
                       else if(day==3)
                           { details("9.30-10.30","Mr.C.P.Perera",87 );
                             details("10.30-11.30\n11.30-12.30","Mrs.K.De Silva",87);              }            
                              else if(day==4)
                                  { details("9.30-10.30","Mr.C.P.Perera",87 );
                                    details("10.30-11.30\n11.30-12.30","Mrs.K.De Silva",87);
                                    details("1.30-2.30","Mr.S.W.Wirasinghe",87);                               }
                                          else
                                               { details("10.30-11.30\n11.30-12.30","Mr.S.W.Wirasinghe",87);                 }  }    
  
             
    
}
