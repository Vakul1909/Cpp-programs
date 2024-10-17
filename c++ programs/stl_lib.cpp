// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={1,2,3,4,5,6};  // basic to initialise the vector
//     vector<int> vec1(3,10);  // it gives three time 10 writen
//     vec.push_back(12);     // adding elemnt at last position
//     vec.pop_back();        // remove the element 
//     cout<<vec[3]<<endl;     // they give the value of that index
//     cout<<vec.at(3)<<endl;   // other way to give value
//     cout<<vec.front()<<endl;   // it gives front value
//     cout<<vec.back()<<endl;    // it gives last value
//     vec.erase(vec.begin());    // it erases the first value by using iterator called begin
//     vec.erase(vec.begin()+2);    // it erase the second value
//     vec.insert(vec.begin()+2,100);  // it insert value 100 at second
//     for(int val:vec){
//         cout<< val<<endl;
//     }
//      for(int val:vec1){
//         cout<< val<<endl;
//     }
// }


// using of iterators in vectors
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={1,2,3,4,5};
//     vector<int>:: iterator it;
//     for(it=vec.begin();it!=vec.end();it++){
//         cout<<*(it)<<" ";    // we use * this becoz to reference the pointer
//     }
//     cout<<endl;
//     vector<int>::reverse_iterator rit;    // by using this we can print in backward direction
//     for(rit=vec.rbegin();rit!=vec.rend();rit++){
//         cout<<*(rit)<<" ";
//     }
//     cout<<endl;
//     // instead of writing this above //line
//     // we can use auto function on that place
//     for(auto it=vec.begin();it!=vec.end();it++){   // simply use auto function instead of defining it
//         cout<<*(it)<<" ";
//     }
// }


// list is totally similar to vector the only diff b/w them is list is doubly linked list while vector is dynamic
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> l={1,2,3,4,5};
//     for(int val:l){
//         cout<<val<<" ";
//     }
// }

// deque is similar to list but deque is dynamic arrray type we access any value from any index while we cant do it with list
// doubly ended queue
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> d={1,2,3,4,5};
//     for(int val:d){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     cout<<d[3];  // we can't do this with list
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
    // pair<string,int> p={"vakul",19};
    // cout<<p.first<<endl;
    // cout<<p.second;

    // pair<string,pair<int,char>> p={"vakul",{19,'m'}};   // we can create pairs in pairs
    // cout<<p.first<<endl;
    // cout<<p.second.first<<endl;
    // cout<<p.second.second;

//     vector<pair<int,int>> vec={{1,2},{3,4},{6,7}};  // we can create pairs in vector also
//     vec.push_back({8,9});   // we need to make pair first than insert into it
//     vec.emplace_back(0,0);   // we dont need to put them in {} becoz its a in place object creator
//     for(auto v:vec){    // using of auto function instead of (pair<int,int>)
//         cout<<v.first<<" "<<v.second<<endl;
//     }
// }


// #include<iostream>
// #include<stack>       //LIFO   //push,pop,top,size,swap,empty
// using namespace std;
// int main(){
//     stack<int> s1;
//     s1.push(1);
//     s1.push(2);
//     s1.push(3);
//     stack<int> s2;
//     s2.swap(s1);
//     cout<<"size of s2:"<<s2.size()<<endl;   // size update to 3 of s2
//     while(!s2.empty()){   
//         cout<<s2.top()<<" ";
//         s2.pop();
//     }
//     cout<<endl;
//     cout<<"size of s1:"<<s1.size()<<endl;  // size will be 0 all element transfer to s2
//     cout<<"size of s2:"<<s2.size()<<endl; 
// }


// #include<iostream>
// #include<queue>   //FIFO  fully same as stack
// using namespace std;
// int main(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//          q.pop();
//     }
// }


// #include<iostream>
// #include<queue>    // priority queue means it return data largest value first means descending
// using namespace std;    // push,emplace,top,pop,size,empty
// int main(){          
//     priority_queue<int> pq;
//     priority_queue<int,vector<int>,greater<int>> rpq;   // by this it return in ascending order
//     pq.push(1);
//     pq.push(2);
//     pq.push(3);
//     pq.push(4);
//     while(!pq.empty()){
//         cout<<pq.top()<<" ";     //  no front -> its top in this prior queue
//          pq.pop();
//     }
//     cout<<endl;
//     rpq.push(1);
//     rpq.push(2);
//     rpq.push(3);
//     rpq.push(4);
//     while(!rpq.empty()){
//         cout<<rpq.top()<<" ";
//          rpq.pop();
//     }
// }

 
// #include<iostream>
// #include<map>   //insert,emplace,count,erase,find,size,empty  
// using namespace std;
// int main(){
//     map<string,int> m;   //key(should be unique every time)-> string,value->int
//     m["tv"]=20;
//     m["phone"]=30;
//     m["laptop"]=40;
//     m["tablet"]=10;
//     m["watch"]=100;
//     m.insert({"camera",25});
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;   // it print in ascending order of key automatically
//     }
//     cout<<"count="<<m.count("laptop")<<endl;  // it return how many times laptop in this
//     cout<<"count="<<m["laptop"];             // it returns the value of laptop
// }

// the difference b/w map and ordered map is in map it return valued in ascending order whilein unmap itreturn in 
// any order default and acc to time cmplexity unmap is more sufficient than map

// #include<iostream>
// #include<unordered_map>  
// using namespace std;
// int main(){
//     unordered_map<string,int> ump;   
//     ump["tv"]=20;
//     ump["phone"]=30;
//     ump["laptop"]=40;
//     ump["tablet"]=10;
//     ump["watch"]=100;
//     ump.insert({"camera",25});
//     for(auto p:ump){
//         cout<<p.first<<" "<<p.second<<endl; }  // it print in defaultrandom order
// }

// #include<iostream>
// #include<map>   
// using namespace std;
// int main(){
//     multimap<string,int> mp;   //it returns the multiple time as u written for an output 
//     mp.emplace("tv",20);
//     mp.emplace("tv",20);
//     mp.emplace("tv",20);
//     for(auto p:mp){
//         cout<<p.first<<" "<<p.second;  // it shows tv value 3 times
//     }
// }
   

// #include<iostream>
// #include<set>    // it takes only unique value means it dont take repeated value 
// using namespace std;   //insert,emplace,count,erase,find,size,empty
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(9);
//     s.insert(5);
//     s.insert(1);  // it neglect that becoz of repetition
//     // about lower_bound
//     //it gives value same if present otherwise it returns just upper than that and if suppose no values more than 
//     // than it will returns 0
//     cout<<"lower_bound:"<<*(s.lower_bound(4))<<endl;
//     cout<<"upper_bound:"<<*(s.upper_bound(2))<<endl; // it gives only greater than if not possible then give 2 highest
//     cout<<s.size()<<endl;   // the size is also 5 instead of 6
//     for(int val: s){
//         cout<<val<<" "<<endl;
//     }
// }

// similarly there is -> multiset and unorederd_set similar to multimup and unordered_map resp



// other algorithms->

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={2,6,4,8,1,5};
//     sort(vec.begin(),vec.end());
//     reverse(vec.begin(),vec.end());
//     next_permutation(vec.begin(),vec.end());
//     prev_permutation(vec.begin(),vec.end());
//     binary_search(vec.begin(),vec.end(),target);
//     swap,min,max
//     for(int val:vec){
//         cout<<val<<" ";
//     }
// }


