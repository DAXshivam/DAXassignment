#include<bits/stdc++.h>
using namespace std;
vector<string> retrieverecords(string filename){
        ifstream in(filename);
        vector<string> remwhitespaces;   
        string lname,fname,mname,nname,hname,staddress,cit,stat,zi;
        while(in>>lname>>fname>>mname>>nname>>hname>>staddress>>cit>>stat>>zi){
        remwhitespaces.push_back(lname);
        remwhitespaces.push_back(fname);
        remwhitespaces.push_back(mname);
        remwhitespaces.push_back(nname);
        remwhitespaces.push_back(hname);
        remwhitespaces.push_back(staddress);
        remwhitespaces.push_back(cit);
        remwhitespaces.push_back(stat);
        remwhitespaces.push_back(zi);
    }
    return remwhitespaces;
}
vector<vector<string>> tokenize(vector<string> &sepwords){
    vector<vector<string>> tokenized_words;
    vector<string> lname;
        vector<string> fname;
        vector<string> mname;
        vector<string> nickname;
        vector<string> houseno;
        vector<string> streetaddress;
        vector<string> city;
        vector<string> state;
        vector<string> pincode;
        for(int i=0;i<sepwords.size();i++){
        switch (i%9) {
  case 0:
    
    lname.push_back(sepwords[i]);
    
    break;
  case 1:
    fname.push_back(sepwords[i]);
    break;
  case 2:
    mname.push_back(sepwords[i]);
    break;
  case 3:
    nickname.push_back(sepwords[i]);
    break;
  case 4:
    houseno.push_back(sepwords[i]);
    break;
  case 5:
   streetaddress.push_back(sepwords[i]);
    break;
  case 6:
    city.push_back(sepwords[i]);
    break;
    case 7:
    state.push_back(sepwords[i]);
    break;
    case 8:
    pincode.push_back(sepwords[i]);
    break;
}
}
tokenized_words.push_back(lname);
tokenized_words.push_back(fname);
tokenized_words.push_back(mname);
tokenized_words.push_back(nickname);
tokenized_words.push_back(houseno);
tokenized_words.push_back(streetaddress);
tokenized_words.push_back(city);
tokenized_words.push_back(state);
tokenized_words.push_back(pincode);
return tokenized_words;
}
void printstrings(vector<vector<string>> &outputs,int recordno){
    string word1;
    string word2;
    string word3;
    string result;
    vector<vector<string>>::iterator colit = outputs.begin();
    colit = next(colit,1);
    word1 = word1 + (*colit)[recordno];
    colit = prev(colit);
    word1 = word1 + " "+(*colit)[recordno];
    colit = next(colit,4);
    word2 = word2 + (*colit)[recordno];
    colit = next(colit);
    word2 = word2 + " "+(*colit)[recordno];
    colit = next(colit);
    word3 = word3 +(*colit)[recordno]+ ",";
    colit = next(colit);
    word3 = word3 + (*colit)[recordno];
    colit = next(colit);
    word3 = word3 +" "+(*colit)[recordno];
    result = word1 + ","+word2 +","+ word3;
    cout<<result;
}
int main(int argc,char **argv){
    cout<<"No of entries entered: "<<argc<<endl;
    for( int i=0;i<argc;i++){
        cout<<argv[i]<<endl;
    }
    vector<string> rrecords = retrieverecords(argv[1]);
    vector<vector<string>> mytokenizedwords = tokenize(rrecords);
    for(int i=0;i<mytokenizedwords[0].size();i++){
    printstrings(mytokenizedwords,i);
    cout<<endl;
    }
}
