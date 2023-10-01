class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> nuevo;
        int c = chars.size();
        nuevo.push_back(chars[0]);
        int cont = 1;

        for (int i = 1; i < c; i++) {
            if (chars[i] == chars[i - 1]) {
                cont++;
            } else {
                if (cont > 1) {
                    string contStr = to_string(cont);
                    for (char el : contStr) {
                        nuevo.push_back(el);
                    }
                }
                nuevo.push_back(chars[i]);
                cont = 1;
            }
        }

        if (cont > 1) {
            string contStr = to_string(cont);
            for (char el : contStr) {
                nuevo.push_back(el);
            }
        }

        chars = nuevo;
        return nuevo.size();
    }
};
