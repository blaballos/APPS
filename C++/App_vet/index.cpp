#include <iostream>
#include <vector>

using std::cin, std::cout, std::vector, std::string;

class Client {
    private:
        string name;
        string last_name;
        string email;
        int phone;
    public:
        // Add Constructor

        string getName() {
            return name;
        }

        string getLastName() {
            return last_name;
        }

        string getEmail() {
            return email;
        }
        
        int getPhone() {
            return phone;
        }

        void setName(string name_new) {
            name = name_new;
        }

        void setLastName(string last_name_new) {
            last_name = last_name_new;
        }

        void setEmail(string email_new) {
            email = email_new;
        }

        void setPhone(int phone_new) {
            phone = phone_new;
        }
};

int main() {

}
