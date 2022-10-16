
#include <iostream>
#include <string>
#include<sstream>

using namespace std;

const double UNIT_COST = 6450;
const double CURR_EXCHANGE = 20;

class Employee {

    public:
        string name;
        string client;
        double rate;

        Employee(string cName, string cClient, double cRate, double cNetSalary){
            name = cName;
            client = cClient;
            rate = cRate;
            netSalary = cNetSalary;
        }

        string toString(){
            stringstream str;
            str << name << '\t' << client << '\t' << rate << '\t' << netSalary;
            return str.str();
        }

        double getRevenue(){
            cout<<getBrutSalary()<< endl;
            return rate - (getBrutSalary() + UNIT_COST)/CURR_EXCHANGE;
        }

        virtual double getTaxes(){
            return 0;
        }

    protected:
        double netSalary;

        virtual double getBrutSalary(){
            return netSalary*1.10 + 1200;
        }

    

        
    
};


class PayrollEmployee : public Employee {
    private:
        string department;
    
    public:    
        PayrollEmployee(string cName, string cClient, double cRate, double cNetSalary, string cDepartment) : 
            Employee( cName,  cClient,  cRate,  cNetSalary){
                department = cDepartment;
        }

        double getBrutSalary(){
            return Employee::getBrutSalary() * 1.15;
        }

        double getTaxes(){
            return netSalary * 0.23;
        }
        
        string toString(){
            return Employee::toString() + '\t' + department;
        }
};


class ContractorEmployee : public Employee {
    public:    
        ContractorEmployee(string cName, string cClient, double cRate, double cNetSalary) : 
            Employee( cName,  cClient,  cRate,  cNetSalary){}

        double getBrutSalary(){
            return Employee::getBrutSalary() * 1.05;
        }

        double getTaxes(){
            return netSalary * 0.03;
        }

};



int main() {

    Employee mEmployee ("Juan Gomez", "Google", 7800, 78000);
    cout<< mEmployee.toString() << endl;

    PayrollEmployee mPayrollEmployee ("Juan Gomez", "Google", 7800, 78000, "Production");
    cout<< mPayrollEmployee.toString() << endl;


    cout<< "Brut Salary \t $" << mPayrollEmployee.getBrutSalary() << " MXN" << endl;
    cout<< "Taxes \t \t $" << mPayrollEmployee.getTaxes() << " MXN" << endl;
    cout<< "Revenue \t $" << mPayrollEmployee.getRevenue() << " USD" << endl;
    
    ContractorEmployee mContractorEmployee ("Ana Perez", "Amazon", 8695, 80000);
    cout<< mContractorEmployee.toString() << endl;
    
    cout<< "Brut Salary \t $" << mContractorEmployee.getBrutSalary() << " MXN" << endl;
    cout<< "Taxes \t \t $" << mContractorEmployee.getTaxes() << " MXN" << endl;
    cout<< "Revenue \t $" << mContractorEmployee.getRevenue() << " USD" << endl;
    

    Employee *employeeList[5] = { new PayrollEmployee ("Juan Gomez", "Google", 7800, 78000, "Production"),
                                  new ContractorEmployee ("Ana Perez", "Amazon", 8695, 80000),
                                  new PayrollEmployee ("Manuel Molina", "Google", 7800, 95000, "Design"),
                                  new ContractorEmployee ("Rosario Valdez", "Nebraska", 8695, 85000),
                                  new PayrollEmployee ("Alberto Fonseca", "Aspiration", 9995, 105000, "Testing")};
                                
    
    
    for (int i = 0; i < 5; i++){
        cout << employeeList[i]->getTaxes() << endl;
    }

    for (int i = 0; i < 5; i++){
        delete employeeList[i];
    }

    return 0;
}