#include "vector.hpp"
#include "matrix.hpp"
#include "Topology_project.hpp"

int main(int argc, char* argv[]) {

int N = 10;
tws::matrix<double> K(N*N,N*N,0.0);
double h = 0.01/N; 
tws::vector<double> f(N*N,2*h*h*pow(10.0,6.0));
tws::matrix<double> pctmetal(N,N,0.0);
tws::matrix<double> k(N,N,0.0);
tws::vector<double> xx(4,0.0);
tws::vector<int> list_dir(2*(round(0.7*N) - round(0.3*N)),0.0);

pctmetal = tws::create_pctmetal();
k = tws::create_k(pctmetal);
list_dir = tws::create_dir_list();
K = tws::create_K(k, list_dir, f);

}
