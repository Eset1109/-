#include <iostream>
#include<fstream>
#include<cstdlib>   //бібліотека для exit
#include <vector>
using namespace std;

class Client //клас
{
private: // специфікатор доступу private
    string name,
           lastname,
           email,
           tel;
public: // специфікатор доступу public
    string getName()
    {
        return name;
    }
    string getLastname()
    {
        return lastname;
    }
    void message() // функція (метод класу), яка виводить повідомлення на екран
    {
        cout << "\tДанi збережено!\n\n";
    }
    void getCl(); //функція для виведення на екран даних про клієнта
    void zdClient(); //функція яка вводитьз клаві

    void write_to_file(ofstream &file);
    void read_from_file(ifstream &file);
};

class table_client
{
public:
    vector <Client> vec;
    void print_all_clients();

    void add_new_client();

    int search_client(bool mozhna_povernutus=true);

    void poshuk();

    void edit_client();

    void delete_client();

    void write_clients_to_file();

    void read_clients_from_file();

    void menu();
    table_client()
    {
        read_clients_from_file();   //конструктор
    }
    ~table_client()
    {
        write_clients_to_file();   //деструктор
    }
};

class Dantist //клас
{
private: // специфікатор доступу private
    string NameDantist,  //ім'я
           SNameDantist,  //прізвище
           adress,     //адреса
           posada,      //посада
           email,     //email
           pd,     //паспортні дані
           tel,      //номер телефону
           salary;      //зарплата
public: // специфікатор доступу public
    string getfNameR()
    {
        return NameDantist;
    }
    string getlNameR()
    {
        return SNameDantist;
    }
    void message() // функція (метод класу), яка виводить повідомлення на екран
    {
        cout << "\tДанi збережено!\n\n";
    }
    void getRl(); //функція для виведення на екран даних про клієнта

    void zkDantist(); //функція яка вводитьз клаві

    void write_to_file(ofstream &file);
    void read_from_file(ifstream &file);
};

class table_dantist
{
public:
    vector <Dantist> vec;
    void print_all_dantists();

    void add_new_dantists();

    int search_dantists(bool mozhna_povernutus=true);

    void poshuk();
    void edit_dantists();

    void delete_dantists();

    void write_dantists_to_file();

    void read_dantists_from_file();

    void menu_dantists();
    table_dantist()
    {
        read_dantists_from_file();   //конструктор
    }
    ~table_dantist()
    {
        write_dantists_to_file();   //деструктор
    }
};

class Services //клас
{
private: // специфікатор доступу private
    string services;
    int    price;
public: // специфікатор доступу public
    string getServices()
    {
        return services;
    }

    void message() // функція (метод класу), яка виводить повідомлення на екран
    {
        cout << "\tДанi збережено!\n\n";
    }
    void getSer(); //функція для виведення на екран даних про клієнта
    void zdServices(); //функція яка вводитьз клаві

    void write_to_file(ofstream &file);
    void read_from_file(ifstream &file);
};

class table_services
{
public:
    vector <Services> vec;
    void print_all_services();

    void add_new_services();

    int search_services(bool mozhna_povernutus=true);

    void poshuk();

    void edit_services();

    void delete_services();

    void write_services_to_file();

    void read_services_from_file();

    void menuServices();
    table_services()
    {
        read_services_from_file();   //конструктор
    }
    ~table_services()
    {
        write_services_to_file();   //деструктор
    }
};

extern table_client TABLE_CLIENT;
extern table_services TABLE_SERVICES;
extern table_dantist TABLE_DANTIST;


class Order: public Client, public Dantist, public Services
{
private:
    string orderData,      //дата замовлення
           dataOfIssue;    //дата видачі замовлення
    int client_id, dantist_id, service_id;
    /*Тут має бути ім я прізвище клієнта та стоматолога
    */

public: // специфікатор доступу public
    string getOrderData()
    {
        return orderData;
    }

    void message() // функція (метод класу), яка виводить повідомлення на екран
    {
        cout << "\tДанi збережено!\n\n";
    }
    void getOrder(); //функція для виведення на екран даних про клієнта
    void zdOrder(); //функція яка вводитьз клаві
    void write_to_file(ofstream &file);
    void read_from_file(ifstream &file);
};

class table_order
{
public:
    vector <Order> vec;

    void print_all_orders();
    void add_new_orders();

    int search_orders();

    void poshuk();

    void edit_orders();

    void delete_orders();

    void write_orders_to_file();

    void read_orders_from_file();

    void menuOrder();
    table_order()
    {
        read_orders_from_file();   //конструктор
    }
    ~table_order()
    {
        write_orders_to_file();   //деструктор
    }
};
extern table_order TABLE_ORDER;
