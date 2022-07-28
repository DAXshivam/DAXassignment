#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string removeSpaces(string str)
{
    string word = str;
    // str.erase(remove_if(word.begin(), word.end(), isspace));
    return str;
}


int len(string str)  
{  
    int length = 0;  
    for (int i = 0; str[i] != '\0'; i++)  
    {  
        length++;  
          
    }  
    return length;     
}  
int main(int argc,char* argv[]){
    std::cout<<"The function has "<<argc<<" arguements"<<endl;
    for(int i=0;i<argc;i++){
        cout<<argv[i]<<endl;
    }
     
    fstream MyFile;
    MyFile.open(argv[3]); 
    cout<<"The file is opem"<<endl;
    // MyFile.close();
    vector<string> liness;

    if(MyFile.is_open()){
        string lines;
        while(getline(MyFile,lines)){
            // cout<<lines<<"\n";
            liness.push_back(lines);    
        }
        // for(auto str : liness){

        // }
        // cout<<liness[0];
        // MyFile.close();
        vector<string> wordss;
         for(auto str : liness){
            string words = "";
        for(auto word: str){
            if(word ==' '){
                // cout<<word<<endl;
                wordss.push_back(words);
                words =""; 
            }
            else{
                words = words+word;
            }
                


                
            }

        }
        string pos;


        // for(int i=0;i<wordss.size();i++){
            
        //    wordss[i] = removeSpaces(wordss[i]);
        // }
        
        vector<string> lname;
        vector<string> fname;
        vector<string> mname;
        vector<string> nickname;
        vector<string> houseno;
        vector<string> streetaddress;
        vector<string> city;
        vector<string> state;
        vector<string> pincode;
        for(int i=0;i<wordss.size();i++){
        switch (i%8) {
  case 0:
    set<string>::iterator it1,it2;
    it1 = wordss[i].begin()
    it2 = wordss[i].begin()
    
    wordss[i].erase(remove(wordss[i].begin(),wordss[i].end()))
    lname.push_back(wordss[i]);
    break;
  case 1:
    fname.push_back(wordss[i]);
    break;
  case 2:
    mname.push_back(wordss[i]);
    break;
  case 3:
    nickname.push_back(wordss[i]);
    break;
  case 4:
    houseno.push_back(wordss[i]);
    break;
  case 5:
   streetaddress.push_back(wordss[i]);
    break;
  case 6:
    city.push_back(wordss[i]);
    break;
    case 7:
    state.push_back(wordss[i]);
    break;
    case 8:
    pincode.push_back(wordss[i]);
    break;
}
        }
            // first comment 
            // int currIndex=0,i=0;
            // int start=0,end=0;
            // while(i<len(str)){
            //     if(str[i] == ' ' ||i==len(str)){
            //         end = i;
            //         string substr = "";
            //         substr.append(str,start,end-start);
            //         lname.push_back(substr);
            //         currIndex +=1;
            //         start = end + 1;


            //     }
            //     i++;
            // }
          //  last comment



        //     string word;
        //     for(auto c:str){
        //         if(c!=' '){
        //             word += c;

        //         }
        //         else{
        //             if(!word.find(" ")){
                    
        //             lname.push_back(word);
        //             word = "";
        //             }
                    
        //         }
        //     }
        //     if(word != ""){
        //         lname.push_back(word);
        //     }
        
        // }
        // cout<<"line is "<<lname[10]<<"  ";
        // for(auto w:lname){
        // cout<<w<<" ";
        // }
        cout<<"Lname size:"<<lname.size();
        string token;
    MyFile.close();
    }
    
// for(auto w: lname)
//         cout<<w;
//         cout<<endl;


//     }
// for(auto c:lname){
//                 cout<<c<<" next";
            
              
//             }
   return 0;
    
    }
    
 
    // void tokenizer(string s){
    //     stringstream ss(s);
        
    //     vector<string> lname;
    //     vector<string> fname;
    //     vector<string> mname;
    //     vector<string> nickname;
    //     vector<int64_t> houseno;
    //     vector<string> streetaddress;
    //     vector<string> city;
    //     vector<string> state;
    //     vector<string> pincode;
     
        

        // while(ss>>word){

        // }
    // }
    
    // class helloworld
    // {
    // private:
    //     /* data */
    // public:
    //     helloworld(/* args */);
    //     ~helloworld();
    // };
    
    

    

