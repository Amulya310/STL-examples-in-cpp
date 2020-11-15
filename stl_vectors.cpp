
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Model_details{
    string name;
    double cost;
    int number;
    public:
    string get_name(){
        return name;
    }
    Model_details() = default;
    Model_details(string a, double b, int c):name{a},cost{b},number{c}{}
    double total_cost(){
        return cost*number;
    }
    void show(){

        cout<<"\t"<<name<<"\t\t\t"<<cost<<"\t\t\t\t"<<number;
    }
};
int main(){
    int rows;
    cout<<"Enter the number of rows of your table: "; cin>>rows;
    vector <Model_details> a(rows);
    string name_val;
    double cost_val;
    int number_of_models;
    cout<<"Enter your table: "<<endl;
    for(int i=0;i<rows;i++){
        cin>>name_val>>cost_val>>number_of_models;
        a[i]= (Model_details(name_val,cost_val,number_of_models));
    }
    int choice;
    while(1){
        cout<<"1.Show table: "<<endl;
        cout<<"2.See total value of a particular model sold: "<<endl;
        cout<<"3.Exit the interface: "<<endl;
        cin>>choice;
        if(choice==3){
            break;
        }
        else if(choice==1){ cout<<"\tMODEL NAME\t\tCOST OF ONE UNIT\t\tNUMBER OF UNITS SOLD IN 1 MONTH"<<endl;
            for(int i=0;i<a.size();i++){
                a[i].show();
                cout<<endl;
            }
        }
        else{
            string key; 
            cout<<"Enter the model name: "; cin>>key;
            for(int i=0;i<a.size();i++){
                if(a[i].get_name()==key){
                   cout<<"Total cost: "<<a[i].total_cost()<<" lakhs"<<endl;
                   break;
                }
            }
        }
    }
    return 0;
}
