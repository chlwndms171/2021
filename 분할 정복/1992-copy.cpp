
#include <iostream>
using namespace std;

char** video;
int video_size;

void compress(int start_x, int start_y, int size) {
    // Ȯ���ϴ� ������ ���ڰ� ���� ������ Ȯ���ϰ� ��� 
    for (int a = start_x; a < start_x + (size); a++) {
        for (int b = start_y; b < start_y + (size); b++) {

            // Ȯ���ϴ� ������ ���ڰ� ���� ���� �ʴٸ� 
            if (video[a][b] != video[start_x][start_y]) {
                cout << "(";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        // ũ�Ⱑ 1�� ��쿡�� ���ڵ��� ������ְ� �׳� �����Ѵ�. 
                        if (size == 1) {
                            cout << video[start_x][start_y];
                            return;
                        }
                        // ũ�Ⱑ 1 ���� Ŭ ��쿡�� size �� ������ �ٿ��� 4���� �����Ѵ�.   
                        compress(start_x + (size / 2) * i, start_y + (size / 2) * j, size / 2);
                    }
                }
                cout << ")";
                return;
            }
        }
    }

    // Ȯ���ϴ� ������ ��� ���ڰ� ���ٸ� 
    cout << video[start_x][start_y];
    return;
}


int main() {
    cin >> video_size;
    video = (char**)malloc(sizeof(char*) * video_size);

    // ������ �о����
    for (int i = 0; i < video_size; i++) {
        video[i] = (char*)malloc(sizeof(char) * video_size);
        cin >> video[i];
    }

    compress(0, 0, video_size);

    return 0;
} //http://melonicedlatte.com/algorithm/2018/02/12/173927.html
