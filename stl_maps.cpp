
 #include<iostream>
 #include<map>
 #include<utility>
 #include<string>
 
 using namespace std;
 
 int main()
 {
    int rows; 
    cout<<"Enter the number of rows of your table: "; cin>>rows;
    string model_name;
    double value;
    int sold_items;
    cout<<"Enter the table: "<<endl;
    map <string,pair<double,int>> table;
    for(int i=0;i<rows;i++){
        cin>>model_name>>value>>sold_items;
         table.insert(make_pair(model_name,make_pair(value, sold_items)));
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
       else if(choice==1){
            cout<<"\tMODEL NAME\t\tCOST OF ONE UNIT\t\tNUMBER OF UNITS SOLD IN ONE MONTH"<<endl;
            for(auto it = table.begin();it!=table.end();it++){
                cout<<"\t"<<it->first<<"\t\t\t"<<it->second.first<<"\t\t\t\t"<<it->second.second<<endl;
            }
cout<<"======================================================================================================================"<<endl;
         }
  else
   { std::string key; 
    
	cout<<"Enter the model name: "; 
	cin>>key;
    auto it = table.begin();
    for(;it!=table.end();it++){
	       if(it->first==key){
             cout<<"Total value: "<<(it->second.first) * (it->second.second)<<" lakhs"<< endl;
                      break;
                     }
             }
    if(it==table.end()){
    cout<<"Model not found"<<endl;
            }
        }
    }
    return 0;
}
