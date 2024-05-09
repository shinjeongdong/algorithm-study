#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int main() {
    int max = 0;
    int size;
    char ans;

    char a[1000000] = {0,};
    int arr[26] = {0,};


    scanf("%s", a);
    size = strlen(a);
    //a에서 a빼면 0; b에서 a빼면1 abc 순서대로 인덱스에 가능하다.
    for (int i = 0; i < size; i++) // 입력한 사이즈 만큼 반복을 한다. 
        if (a[i] >= 'a') arr[a[i] - 'a']++;   // 만약 배열의 값이 97보다 크면 (a배열의 값에다가 -97을 한값의 인덱스) a[index]++를 해준다. a보다 크다는 뜻은 97 이상이라는 뜻 예시로 b가 오면 98 -97 = 1 1번째 인덱스에 +1
        else arr[a[i] - 'A']++; // 그게 아니라면 arr[a[i] - 65]++ (a배열의 값 - 65)의 인덱스에 값을 ++를 해준다. // 그결과로 인덱스에 각 알파벳의 숫자가 들어가게 된다 abc 순

    for (int i = 0; i < 26; i++)   // a~z까지 총 26번을 반복해준다. 
        if (arr[i] == max) { // [arr배열 = 그 알파벳의 카운팅 숫자를 가지고 있는 배열] 다시 그 배열의 원소랑 max랑 비교함 
            ans = '?';
        }
        else if (arr[i] > max) { // 비교 후 같지 않으면 그 원소의 값이랑 max랑 비교후 크면 max에 원소를 대입한다.
            max = arr[i];
            ans = 'A' + i; // 그후 ans 변수에 65 + i를 해준다. [0번째는 A 1번째는 B, 2: C, 3 : D, 4 : E] 이런식 // 예시를 들어서 max가 3이고 arr배열에 값이 4면 비교후 max에는
            // 4가 들어가게 되고 65 +4 = 69 즉 E가 저장이 된다.
        }

    printf("%c", ans);

    return 0;
}
