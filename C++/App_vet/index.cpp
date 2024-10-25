#include <iostream>
#include <vector>

using std::cin, std::cout, std::vector, std::string;

vector<Client> client_list{};

class Client {
    private:
        string name;
        string last_name;
        string email;
        int phone;
        vector<string> pets;
    public:
        Client (string n, string ln, string e, int p) {
            name = n;
            last_name = ln;
            email = e;
            phone = p;
        }

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

void register_client(Client client) {
    client_list.push_back(client);
    string name = client.getName();
    string last_name = client.getLastName();
    cout << name << last_name << "fue registrado correctamente.";
}

int main() {

}
