#include <iostream>
#include <vector>

using std::cin, std::cout, std::vector, std::string;

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

vector<Client> client_list{};
void register_client(Client client);
void show_client();

int main() {
    // TEST

    // Client first_client("Brandon","Laballos","laballosbrandon@gmail.com", 1122334455);
    // Client second_client("Jeremias","Perez","jereperez@gmail.com", 1133445566);

    // register_client(first_client);
    // register_client(second_client);
    show_client();
}

void register_client(Client client) {
    client_list.push_back(client);
    string name = client.getName();
    string last_name = client.getLastName();
    cout << name << " " << last_name << " " << "fue registrado correctamente." << "\n";
}

void show_client() {
    if (client_list.size() == 0) {
        cout << "No client registered" << "\n";
    } else {
        cout << "Client list: " << "\n";
        for (auto client : client_list) {
            string name = client.getName();
            string last_name = client.getLastName();
            string email = client.getEmail();

            cout << name << " " << last_name << " " << email << "\n";
        }
    }
}
