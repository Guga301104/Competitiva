#include <bits/stdc++.h>
using namespace std;

struct FriendInfo {
    long long total_response_time = 0;
    int last_receive_time = 0;
    int pending_messages = 0;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::map<int, FriendInfo> friends;
    int current_time = 0;
    int time_to_next_event = 1;

    for (int i = 0; i < n; ++i) {
        char record_type;
        int value;
        std::cin >> record_type >> value;

        if (record_type == 'T') {
            time_to_next_event = value;
        } else {
            current_time += time_to_next_event;
            int friend_id = value;

            if (record_type == 'R') {
                friends[friend_id].last_receive_time = current_time;
                friends[friend_id].pending_messages++;
            } else { // record_type == 'E'
                friends[friend_id].total_response_time += (current_time - friends[friend_id].last_receive_time);
                friends[friend_id].pending_messages--;
            }
            time_to_next_event = 1;
        }
    }

    for (const auto& pair : friends) {
        int friend_id = pair.first;
        const FriendInfo& data = pair.second;

        std::cout << friend_id << " ";
        if (data.pending_messages > 0) {
            std::cout << -1 << std::endl;
        } else {
            std::cout << data.total_response_time << std::endl;
        }
    }

    return 0;
}