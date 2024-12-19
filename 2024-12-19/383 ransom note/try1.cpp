#include <unordered_map>

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ransomMap;
        unordered_map<char, int> magazineMap;

        // map 을 생성해서 알파벳의 갯수를 기록한다.
        for (int idx = 0; idx < ransomNote.length(); idx++) {
            // int 는 값이 없을 때 0 으로 초기화된다.
            ransomMap[ransomNote[idx]]++;
        }
        for (char c : magazine) {
            magazineMap[c]++;
        }

        // ransomMap 에 있는 charcter 값을 하나씩 비교한다.
        for (
            auto ransomMapIter = ransomMap.begin(); 
            ransomMapIter != ransomMap.end(); 
            ransomMapIter++
        ) {
            // ransomNote 에 있는 알파벳의 갯수가 하나라도 magazine 에 있는 것보다 크면
            // ransomNote 를 구성할 수 없기 때문에 바로 false 를 반환한다.
            if (ransomMap[ransomMapIter->first] > magazineMap[ransomMapIter->first]) {
                return false;
            }
        }

        return true;
    }
};