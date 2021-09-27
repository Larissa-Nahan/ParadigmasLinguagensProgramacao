#include <stdio.h>

void lista(char alinhamento_pneus[], char correia_alternador[], char correia_compressor[], char correia_dentada[], char correia_poly[], char filtro_ar[], char filtro_cabine[], char filtro_combustivel[], char filtro_oleo[], char fluido_transmissoes[], char fluido_freio[], char limpeza_ar[], char limpeza_arrefeciemento[], char liquido_arrefeciemento[], char oleo_lubrificante[], char pneus[], char velas[]){
    printf("\nAlinhamento dos pneus ============================== %s\n", alinhamento_pneus);
    printf("Correia do alternador ============================== %s\n", correia_alternador);
    printf("Correia do compressor do ar-condicionado =========== %s\n", correia_compressor);
    printf("Correia dentada ==================================== %s\n", correia_dentada);
    printf("Correia poly-v (bomba d'água) ====================== %s\n", correia_poly);
    printf("Filtro de ar ======================================= %s\n", filtro_ar);
    printf("Filtro de cabine (antipólen) ======================= %s\n", filtro_cabine);
    printf("Filtro de combustível ============================== %s\n", filtro_combustivel);
    printf("Filtro de óleo ===================================== %s\n", filtro_oleo);
    printf("Fluido das transmissões ============================ %s\n", fluido_transmissoes);
    printf("Fluido de freio (óleo do freio) ==================== %s\n", fluido_freio);
    printf("Limpeza do ar condicionado ========================= %s\n", limpeza_ar);
    printf("Limpeza do sistema de arrefecimento ================ %s\n", limpeza_arrefeciemento);
    printf("Líquido de arrefecimento =========================== %s\n", liquido_arrefeciemento);
    printf("Óleo lubrificante ================================== %s\n", oleo_lubrificante);
    printf("Pneus ============================================== %s\n", pneus);
    printf("Velas ============================================== %s\n", velas);
    
    printf("\nInspeção obrigatória:\n");
    printf("=> Confira o nível da água do limpador de parabrisa\n");
    printf("=> Cheque o funcionamento da buzina\n");
    printf("=> Confira o cinto de segurança para desgates visíveis\n");
    printf("=> Confira o kit de embreagem\n");
    printf("=> Confira o nível da água do limpador de parabrisa\n");
    printf("=> Cheque a calibragem do estepe a cada 2 meses\n");
    printf("=> Confira o nível do fluido da direção hidráulica\n");
    printf("=> Meca o nível de contaminação do fluido de freio (óleo de freio)\n");
    printf("=> Confira a condição das palhetas dos limpadores de parabrisas\n");
    printf("=> Confira o funcionamento dos faróis, lanternas, da cabine e luzes de alerta no painel\n");
    printf("=> Confira se os pneus possuem desgaste dos sulcos e calibragem\n");
    printf("=> Confira o alternador e bateria do sistema de carga\n");
    printf("=> Confira as pastilhas e disco ou lona e tambor do sistema de freios\n");
    printf("=> Confira o amortecedor, bandeja, pivô, articulações, mola do sistema de suspensao\n");
}

int main() {
	int kms_rodados, ultima_revisao;
	
	printf("Quantidade de kilômetros rodados: ");
	scanf("%d", &kms_rodados);
	
	printf("Quando foi sua última revisão (anos)? ");
	scanf("%d", &ultima_revisao);
	
    if (kms_rodados >= 100000){
        char alinhamento_pneus[] = "Obrigatório";
        char correia_alternador[] = "Troca Obrigatória";
        char correia_compressor[] = "Troca Obrigatória";
        char correia_dentada[] = "Troca Obrigatória";
        char correia_poly[] = "Troca Obrigatória";
        char filtro_ar[] = "Troca Obrigatória";
        char filtro_combustivel[] = "Troca Obrigatória";
        char filtro_oleo[] =  "Troca Obrigatória";
        char fluido_transmissoes[] = "Troca Obrigatória";
        char oleo_lubrificante[] = "Troca Obrigatória";
        char velas[] = "Troca Obrigatória";
        
        if (ultima_revisao >= 5){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Obrigatória";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 4){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 2){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 1){
            char filtro_cabine[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
	    char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else {
            char filtro_cabine[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Opcional";
            char limpeza_ar[] = "Limpeza Não Necessária";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
	    char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        }
    } else if (kms_rodados >= 60000){
        char alinhamento_pneus[] = "Obrigatório";
        char correia_alternador[] = "Troca Obrigatória";
        char correia_compressor[] = "Troca Obrigatória";
        char correia_dentada[] = "Troca Obrigatória";
        char correia_poly[] = "Troca Obrigatória";
        char filtro_ar[] = "Troca Obrigatória";
        char filtro_combustivel[] = "Troca Obrigatória";
        char filtro_oleo[] = "Troca Obrigatória";
        char fluido_transmissoes[] = "Troca Obrigatória";
        char oleo_lubrificante[] = "Troca Obrigatória";
        char velas[] = "Troca Opcional";
        
        if (ultima_revisao >= 5){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Obrigatória";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 4){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 2){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 1){
            char filtro_cabine[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
	    char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else {
            char filtro_cabine[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Opcional";
            char limpeza_ar[] = "Limpeza Não Necessária";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
	    char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
	}
    } else if (kms_rodados >= 40000){
        char alinhamento_pneus[] = "Obrigatório";
        char correia_alternador[] = "Troca Obrigatória";
        char correia_compressor[] = "Troca Obrigatória";
        char correia_dentada[] = "Troca Obrigatória";
        char correia_poly[] = "Troca Obrigatória";
        char filtro_ar[] = "Troca Obrigatória";
        char filtro_combustivel[] = "Troca Obrigatória";
        char filtro_oleo[] = "Troca Obrigatória";
        char oleo_lubrificante[] = "Troca Obrigatória";
        char velas[] = "Troca Opcional";
        
        if (ultima_revisao >= 5){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Obrigatória";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 4){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 2){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Opcional";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 1){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
            char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else {
            char filtro_cabine[] = "Troca Não Necessária";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Opcional";
            char limpeza_ar[] = "Limpeza Não Necessária";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
	    char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } 
    } else if (kms_rodados >= 20000){
        char alinhamento_pneus[] = "Obrigatório";
        char correia_alternador[] = "Troca Não Necessária";
        char correia_compressor[] = "Troca Não Necessária";
    	char correia_dentada[] = "Troca Não Necessária"; 
    	char correia_poly[] = "Troca Não Necessária";
        char filtro_ar[] = "Troca Obrigatória";
        char filtro_combustivel[] = "Troca Obrigatória";
        char filtro_oleo[] = "Troca Obrigatória";
        char oleo_lubrificante[] = "Troca Obrigatória";
        char velas[] = "Troca Opcional";
        
        if (ultima_revisao >= 5){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Obrigatória";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 4){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 2){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Opcional";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 1){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
            char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else {
            char filtro_cabine[] = "Troca Não Necessária";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Opcional";
            char limpeza_ar[] = "Limpeza Não Necessária";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
	    char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        }
    } else if (kms_rodados >= 15000){
        char alinhamento_pneus[] = "Opcional";
        char correia_alternador[] = "Troca Não Necessária";
        char correia_compressor[] = "Troca Não Necessária";
    	char correia_dentada[] = "Troca Não Necessária"; 
    	char correia_poly[] = "Troca Não Necessária";
        char filtro_ar[] = "Troca Obrigatória";
        char filtro_combustivel[] = "Troca Não Necessária";
        char filtro_oleo[] = "Troca Obrigatória";
        char oleo_lubrificante[] = "Troca Obrigatória";
        char velas[] = "Troca Opcional";
        
        if (ultima_revisao >= 5){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Obrigatória";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 4){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 2){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Opcional";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 1){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
            char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else {
            char filtro_cabine[] = "Troca Não Necessária";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Opcional";
            char limpeza_ar[] = "Limpeza Não Necessária";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
	    char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        }
    } else if (kms_rodados >= 5000){
        char alinhamento_pneus[] = "Não Necessário";
        char correia_alternador[] = "Troca Não Necessária";
        char correia_compressor[] = "Troca Não Necessária";
    	char correia_dentada[] = "Troca Não Necessária"; 
    	char correia_poly[] = "Troca Não Necessária";
        char filtro_ar[] = "Troca Obrigatória";
        char filtro_combustivel[] = "Troca Não Necessária";
        char filtro_oleo[] = "Troca Opcional";
        char oleo_lubrificante[] = "Troca Opcional";
        char velas[] = "Troca Não Necessária";
        
        if (ultima_revisao >= 5){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Obrigatória";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 4){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 2){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Opcional";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 1){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
            char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else {
            char filtro_cabine[] = "Troca Não Necessária";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Opcional";
            char limpeza_ar[] = "Limpeza Não Necessária";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
	    char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        }
    } else{
        char alinhamento_pneus[] = "Não Necessário";
        char correia_alternador[] = "Troca Não Necessária";
        char correia_compressor[] = "Troca Não Necessária";
    	char correia_dentada[] = "Troca Não Necessária"; 
    	char correia_poly[] = "Troca Não Necessária";
    	char filtro_ar[] = "Troca Não Necessária";
    	char filtro_combustivel[] = "Troca Não Necessária";
    	char filtro_oleo[] = "Troca Não Necessária";
    	char oleo_lubrificante[] = "Troca Não Necessária";
    	char velas[] = "Troca Não Necessária";
        
        if (ultima_revisao >= 5){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Obrigatória";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 4){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Obrigatória";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 2){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Opcional";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Obrigatória";
            char liquido_arrefeciemento[] = "Troca Obrigatória";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else if (ultima_revisao >= 1){
            char filtro_cabine[] = "Troca Obrigatória";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Obrigatória";
            char limpeza_ar[] = "Limpeza Obrigatória";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
            char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        } else {
            char filtro_cabine[] = "Troca Não Necessária";
            char fluido_transmissoes[] = "Troca Não Necessária";
            char fluido_freio[] = "Troca Opcional";
            char limpeza_ar[] = "Limpeza Não Necessária";
            char limpeza_arrefeciemento[] = "Limpeza Não Necessária";
	    char liquido_arrefeciemento[] = "Troca Não Necessária";
            char pneus[] = "Troca Não Necessária";
            
            lista(alinhamento_pneus, correia_alternador, correia_compressor, correia_dentada, correia_poly, filtro_ar, filtro_cabine, filtro_combustivel, filtro_oleo, fluido_transmissoes, fluido_freio, limpeza_ar, limpeza_arrefeciemento, liquido_arrefeciemento, oleo_lubrificante, pneus, velas);
        }
    }
	
    return 0;
}
