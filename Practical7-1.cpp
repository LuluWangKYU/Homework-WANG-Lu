#include<iostream>
using namespace std;
#include <string>
#include <vector>
#include <functional>

class Date{
public:
    int day;
    int month;
    int year;

    Date(const int dayi, const int monthi, const int yeari){
        day = dayi; 
        month = monthi;
        year = yeari;
    }
};


class Blood{
public:
    int sysolic;
    int diastolic;
    int day;
    int month;
    int year;

    template <typename T> Blood(int sys, int dia, T date){
        sysolic = sys;
        diastolic = dia;
        day = date.day;
        month = date.month;
        year = date.year;
    }
};

class Patient{
protected:
    string name;
    std::vector<int> vecsystolic;
    std::vector<int> vecdiastolic;
    std::vector<int> vecday;
    std::vector<int> vecmonth;
    std::vector<int> vecyear;
        

public:
    Patient(string name_i){
        name = name_i;
    }
    template <typename T> 
    
    void addRecord(T blood){
        vecsystolic.push_back(blood.sysolic);
        vecdiastolic.push_back(blood.diastolic);
        vecday.push_back(blood.day);
        vecmonth.push_back(blood.month);
        vecyear.push_back(blood.year);
    }
    
    void printReport(){
        cout<<"Patient Name : "<<name<<endl;
        int maxindex = 0;
        int maxvalue = 0;
        bool judge;
        float sum = 0;
        float average = 0;
        maxvalue = vecsystolic[0];

        judge = false;

        int maxpressure;
        maxpressure = vecsystolic[0] + vecdiastolic[0];
        for (int i = 0;i<vecsystolic.size();i++){
            if (vecsystolic[i]>maxvalue){
                maxvalue = vecsystolic[i];
                maxindex = i;
            }
            if (vecsystolic[i]>140){
                judge = true;
            }
            sum = sum + vecdiastolic[i];
            }
            cout << "abnormal systolic blood pressures : " << endl;
            cout<< "\t";
            cout<<"systolic: " << vecsystolic[maxindex] <<"   diastolic: " <<
            vecdiastolic[maxindex] << "   Date : "
            << vecday[maxindex] << "/" << vecmonth[maxindex] << "/" << vecyear[maxindex] <<endl;

        
        if (judge == false){
            cout << "no measurement was too high" <<endl;
        }else{
            cout << "some measurement was too high"<<endl;
        }
        average = sum /vecsystolic.size();
        cout << "average diastolic : " << average <<endl;
      
    }
};


int main(){

    Patient mary("Mary");
    mary.addRecord(Blood(94, 61, Date(2,5,2013)));
    mary.addRecord(Blood(97, 65, Date(3,5,2013)));
    mary.addRecord(Blood(144, 99, Date(4,5,2013)));
    mary.addRecord(Blood(123, 88, Date(5,5,2013)));
    mary.addRecord(Blood(177, 110, Date(6,5,2013)));
    mary.addRecord(Blood(145, 89, Date(7,5,2013)));
    mary.printReport();
    cout<<"---------------------------------------------------"<<endl;

    Patient john("John");
    john.addRecord(Blood(88, 57, Date(15,5,2013)));
    john.addRecord(Blood(95, 61, Date(16,5,2013)));
    john.addRecord(Blood(151, 80, Date(17,5,2013)));
    john.addRecord(Blood(151, 96, Date(18,5,2013)));
    john.addRecord(Blood(176, 104, Date(19,5,2013)));
    john.addRecord(Blood(176, 110, Date(20,5,2013)));
    john.printReport();

    return 0;
}
