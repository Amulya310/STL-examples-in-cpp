

#include<iostream>

using namespace std;

template<class T>
class vector
{
    T v[20];
    int size;
   
    public:
        void create();
        void modify();
        void scalarmult();
        void display();
};

template<class T>
void vector<T>::create()
{
    int i;
    T value;
    char ans;
    size=0;
    do{
        cout<<"\nEnter the index & value:";
        cin>>i>>value;
        v[i]=value;
        size++;
        cout<<"\nDo you want more elements?y/n?";
        cin>>ans;
    }while(ans=='y');
}

template<class T>
void vector<T>::modify()
{
    int key;
    T newval;
    cout<<"\nEnter index for modification:";
    cin>>key;
    cout<<"\nEnter new value:";
    cin>>newval;
    v[key]=newval;
}

template<class T>
void vector<T>::scalarmult()
{
    int i;
    int scalarval;
    cout<<"\nEnter scalar value for multiplication";
    cin>>scalarval;
    for(i=0;i<size;i++)
    v[i]=v[i]*scalarval;
}

template<class T>
void vector<T>::display()
{
    int i;
   
    cout<<"\nSize of vector is:"<<size;
    cout<<"\nElements in vector are:";
    cout<<"(";
    for(i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<")";
}

int main()
{
    int choice;
    vector<int>obj;
    cout<<"\nProgram for template class";
    do
    {
        cout<<"\nMAIN MENU";
        cout<<"\n1.Create";
        cout<<"\n2.Display";
        cout<<"\n3.Scalar Multiplication";
        cout<<"\n4.Modify the elements";
        cout<<"\n0.Exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
       
        switch(choice)
        {
            case 1:
                obj.create();
                break;
               
            case 2:
                obj.display();
                break;
               
            case 3:
                obj.scalarmult();
                break;
               
            case 4:
                obj.modify();
                break;
               
            case 0:
                cout<<"\nExit\n";
                break;
               
            default:
                cout<<"\nInvalid choice";
                break;
        }
    }while(choice!=0);
    return 0;
}

