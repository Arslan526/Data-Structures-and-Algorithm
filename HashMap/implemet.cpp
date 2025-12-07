#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    //  create 
    map<string , int> m;
    // insertion
    pair<string , int > p = make_pair("Ansari" , 3);
    m.insert(p);
    // 1
    pair<string , int >pair2("love" , 2);
    m.insert(pair2);

 pair<string , int >pair("unknowKey" , 21);
    m.insert(pair);

    // 3 
    m["mera"] = 1;
    cout<<"love ki key "<<  m.at("love") << endl;
    cout<< "Ansari ki key " << m.at("Ansari") << endl;
    cout<<"mera ki key "<< m.at("mera") << endl;
    cout<<"unknowKey ki key "<<  m.at("unknowKey") <<endl;

    cout<< "persent or not " << m.count("love") << endl;

    cout<< "size of "<< m.size() <<endl;


    m.erase("love");
    cout<< "Earse After that size "<<m.size()<<endl;

   
    map<string , int > :: iterator it = m.begin();

    while(it != m.end()){
        cout<< it->first << " "<< it->second <<endl;
        it++;
    }
    

    return 0;
}
