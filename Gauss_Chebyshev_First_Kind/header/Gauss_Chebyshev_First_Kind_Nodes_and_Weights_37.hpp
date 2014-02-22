//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_37.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 37.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_37_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_37_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_37(long double*& nodes, long double& weight) {
	weight 		= 0.08490790955648089833682819954809467254586944322635421137770120519750855152124889185481175203627343426978778612198060288235388769;

	nodes		= new long double[37];

	nodes[0] 	= 0.99909896620468147235770279122791734400840367661067107498565830644588079259811855251341456789687444308285938866107287466681944598;
	nodes[1] 	= 0.99190043525887688731440780726651353408418175036752310279303406554527031883703611245689603760207793333730637969270054198686709298;
	nodes[2] 	= 0.97755523894768619434024935479825763544643450092595952646372136284171941769614296956897865410407929842384018697828233602639100174;
	nodes[3] 	= 0.95616673473925093550625307126040520720350555063251743902068800406500348365641724855373483140057245013418587858879765759032753684;
	nodes[4] 	= 0.92788902729650932712724074985858290865960626859534136131126671076080202927981310970301735591121673598682042311388689374633743006;
	nodes[5] 	= 0.89292585814956848973010897830299033716819782479943367700357276191371607029599117858023112963179272574950998895464408614839940263;
	nodes[6] 	= 0.85152913773331129988700225340098534760036431749137753891422980373460056794703078161695111230641784180546899660003892099962874721;
	nodes[7] 	= 0.80399713036694054482635469381603370372464740711033944722388446975485276251213760502761209923893337024104799105506130046473071486;
	nodes[8] 	= 0.75067230525272435528537141321293258247261121413590157281451702986540219959708319789877009238495115094373693465040243054946118911;
	nodes[9] 	= 0.6919388689775462000100916668541419889184841567217422502223333491094242291820008284691524261598231895054065140622047689945198441;
	nodes[10] 	= 0.6282199972956423167888571244982907776990680192946271116616554061619692651837861088039236355261372323482523445570300094899559662;
	nodes[11] 	= 0.5599747861375953903804362399881110256799791915914182469607754682301316715740398154529876339727311552798434463244865731472605428;
	nodes[12] 	= 0.4876949438136345453546358573087530741093076523922589966001134636646223190516170902778532651972477619940821741552318057241348073;
	nodes[13] 	= 0.4119012482439926753830399595163634298154493706511579789905629164384963895860436040687542305991524366732629569975557997764802265;
	nodes[14] 	= 0.3331397947420575668009190940208649269071341009087068606438304111046921853636861564617580107378794115693692076875478840702197556;
	nodes[15] 	= 0.2519780613851251944452590335089271028724694290150349762511537970130035444070542370929023296664050199547218061791245311149217734;
	nodes[16] 	= 0.1690008203218490740930355553844306062607247629191774779076788879637194243528384017144308742852176349767936499345568442063617159;
	nodes[17] 	= 0.0848059244755091910885014483318982887953070743133155254209662654833034661810996169232051213514924619892604186235934738783488315;
	nodes[18] 	= 0.e-127;
	nodes[19] 	= -0.0848059244755091910885014483318982887953070743133155254209662654833034661810996169232051213514924619892604186235934738783488315;
	nodes[20] 	= -0.1690008203218490740930355553844306062607247629191774779076788879637194243528384017144308742852176349767936499345568442063617159;
	nodes[21] 	= -0.2519780613851251944452590335089271028724694290150349762511537970130035444070542370929023296664050199547218061791245311149217734;
	nodes[22] 	= -0.3331397947420575668009190940208649269071341009087068606438304111046921853636861564617580107378794115693692076875478840702197556;
	nodes[23] 	= -0.4119012482439926753830399595163634298154493706511579789905629164384963895860436040687542305991524366732629569975557997764802265;
	nodes[24] 	= -0.4876949438136345453546358573087530741093076523922589966001134636646223190516170902778532651972477619940821741552318057241348073;
	nodes[25] 	= -0.5599747861375953903804362399881110256799791915914182469607754682301316715740398154529876339727311552798434463244865731472605428;
	nodes[26] 	= -0.6282199972956423167888571244982907776990680192946271116616554061619692651837861088039236355261372323482523445570300094899559662;
	nodes[27] 	= -0.6919388689775462000100916668541419889184841567217422502223333491094242291820008284691524261598231895054065140622047689945198441;
	nodes[28] 	= -0.7506723052527243552853714132129325824726112141359015728145170298654021995970831978987700923849511509437369346504024305494611891;
	nodes[29] 	= -0.8039971303669405448263546938160337037246474071103394472238844697548527625121376050276120992389333702410479910550613004647307149;
	nodes[30] 	= -0.8515291377333112998870022534009853476003643174913775389142298037346005679470307816169511123064178418054689966000389209996287472;
	nodes[31] 	= -0.8929258581495684897301089783029903371681978247994336770035727619137160702959911785802311296317927257495099889546440861483994026;
	nodes[32] 	= -0.9278890272965093271272407498585829086596062685953413613112667107608020292798131097030173559112167359868204231138868937463374301;
	nodes[33] 	= -0.9561667347392509355062530712604052072035055506325174390206880040650034836564172485537348314005724501341858785887976575903275368;
	nodes[34] 	= -0.9775552389476861943402493547982576354464345009259595264637213628417194176961429695689786541040792984238401869782823360263910017;
	nodes[35] 	= -0.99190043525887688731440780726651353408418175036752310279303406554527031883703611245689603760207793333730637969270054198686709298;
	nodes[36] 	= -0.99909896620468147235770279122791734400840367661067107498565830644588079259811855251341456789687444308285938866107287466681944598;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_37_hpp__)*/