class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str;

        for(auto& s : strs){
            encoded_str += to_string(s.size()) + '#' + s;
        }

        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> decoded_string;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#') ++j;

            int num_chars = stoi(s.substr(i, j-i)); //retrieve string size;
            decoded_string.push_back(s.substr(j+1, num_chars));

            i = j + 1 + num_chars;
        }

        return decoded_string;
    }
};
