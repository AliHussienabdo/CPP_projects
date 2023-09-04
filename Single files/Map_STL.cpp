#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

void Print( map<int,string>&);


int main(){
	
	map<int,string>mp{{1,"ali"},{3,"sayed"},{2,"gamal"},{4,"esraa"}};
	mp[5] = "halawa";
	mp[9] = "nawal";
	mp.insert({10,"mohamed"});
	mp.insert(make_pair(11,"nosaa"));
	mp.insert(pair<int,string>(12,"some"));
	Print(mp);
	
	
	map<int,string>mp2;
	// insert element of mp to mp2 till find key 4
	mp2.insert(mp.begin(),mp.find(4));  
	Print(mp2); 
	mp2.erase(mp2.find(2),mp2.find(3));
	Print(mp2);
	mp2.erase(mp2.begin(),mp2.end());
	Print(mp2);
	
	cout<<"using key compare function to print the map \n";
	map<int,string>::key_compare com = mp.key_comp();
	auto it = mp.begin();
	int c = 4;
	for(;com(it->first,c);it++){
		cout<<it->first<<" => "<<it->second<<endl;
	}
	
//	Write a statement that creates and initializes a multimap 
//	of strings and ints with three key–value pairs.

    multimap<string,int>mulmp {{"ali",1},make_pair("ahmed",2),pair<string,int>("sayed",3)};
    for(auto it:mulmp){
    	cout<<it.first<<" => "<<it.second<<endl;
	}


//	cout<<mp.at(22343); //runtime error
//	 cout<<mp[22343]; //i/t won't generate an error and won't print anything 
	mp.clear();
	mp2.clear();
	
}

void Print( map<int,string>&mp){
	if(mp.empty()){
		cout<<"the map is empty\n";
	}
	else {
		map<int,string>::const_iterator it= mp.cbegin();
	    for(;it != mp.cend();++it){
		    cout<<it->first<<" => "<<it->second<<endl;
	    }
	}
	cout<<"________________________________________________\n";

}
