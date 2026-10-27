#include <stdio.h>
#include <stdlib.h>

void testarConexao() {
    printf ("\n--- Testando Conexao de Rede (Ping Google DNS)---\n"); 
    // Executa o ping do sistema operacional
    #ifdef _WIN32
        system ("ping -n 2 8.8.8.8");
    #else 
        system("ping -c 2 8.8.8.8");
    #endif
}

void checarEspaçoDisco() {
    printf("\n--- Verificando Espaço em Disco ---\n");
    #ifdef _WIN32
        system("wmic logicaldisk get caption, freespace, size");
    #else
        system("df -h"),
    #endif
}

int main() {
    printf("===================================\n");
    printf("    SAP SUPPORT-SYSTEM DIAGNOSTIC TOOL  \n");
    printf("===================================\n");


testarConexao();
checarEspaçoDisco();

printf("\nDiagnostico concluido com sucesso!\n");
return 0;
}