 vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> res; 
        map<string, vector<string>> temp;
        for (auto x: string_list){
            string temp1 = x;
            sort(temp1.begin(), temp1.end());
            temp[temp1].push_back(x);
        }
        
        for (auto i: temp){
            res.push_back(i.second);
        }
                return res;
    }
