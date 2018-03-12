#include <iostream>
#include <occi.h>

using namespace std;
using namespace oracle::occi;

int main() {
    cout << "OCCI Connection Sample" << endl;

    Environment* env = Environment::createEnvironment(Environment::DEFAULT);
    cout << "Environment created" << endl;

    string username = "system";
    string password = "oracle";
    string host = "172.17.0.2";
    string port = "1521";
    string sid  = "XE";

    string connect_url = host + ":" + port + "/" + sid;

    Connection* conn = env->createConnection(username, password, connect_url);
    cout << "Connection created" << endl;

    env->terminateConnection(conn);
    cout << "Connection closed" << endl;

    Environment::terminateEnvironment(env);
    cout << "Environment terminated" << endl;

    return EXIT_SUCCESS;
}