//
//        Gauss_Legendre_Nodes_and_Weights_15.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 15.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_15_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_15_hpp__

void Gauss_Legendre_Nodes_and_Weights_15(long double*& nodes, long double*& weights) {
	nodes	= new long double[15];
	weights	= new long double[15];

	nodes[0] 	= 0;
	weights[0] 	= 0.20257824192556127288062019996751931483866215800947735679670411605143539875474607409339344071278803213535148267082999017730952463;

	nodes[1] 	= -0.20119409399743452230062830339459620781283645446263767961594972460994823900302018760183625806752105908967902257386509421189427928;
	weights[1] 	= 0.198431485327111576456118326443839324818692559957541993484737927929124797533434268133314999164817823207660208548893099176479148;

	nodes[2] 	= 0.20119409399743452230062830339459620781283645446263767961594972460994823900302018760183625806752105908967902257386509421189427928;
	weights[2] 	= 0.198431485327111576456118326443839324818692559957541993484737927929124797533434268133314999164817823207660208548893099176479148;

	nodes[3] 	= -0.39415134707756336989720737098104546836275277615869825503116534395160895778696141797549711416165976202589352169635648002475847813;
	weights[3] 	= 0.18616100001556221102680056186642282450622601227792840281549572731001325550269916061894976888609932360539977709001384435306727;

	nodes[4] 	= 0.39415134707756336989720737098104546836275277615869825503116534395160895778696141797549711416165976202589352169635648002475847813;
	weights[4] 	= 0.18616100001556221102680056186642282450622601227792840281549572731001325550269916061894976888609932360539977709001384435306727;

	nodes[5] 	= -0.57097217260853884753722673725391064123838639628274960485326541705419537986975857948341462856982614477912646497026257040351155019;
	weights[5] 	= 0.1662692058169939335532008604812088111309001800984129073218651905635535632122785177107051742924155362148446154065718522274182;

	nodes[6] 	= 0.57097217260853884753722673725391064123838639628274960485326541705419537986975857948341462856982614477912646497026257040351155019;
	weights[6] 	= 0.1662692058169939335532008604812088111309001800984129073218651905635535632122785177107051742924155362148446154065718522274182;

	nodes[7] 	= -0.7244177313601700474161860546139380096308992945841025635514234207041237816779252189961010976031343262692359854938192511203865642;
	weights[7] 	= 0.139570677926154314447804794511028322520850275315511243202391128631088444541907811680768257363571333638149088893276639904111;

	nodes[8] 	= 0.7244177313601700474161860546139380096308992945841025635514234207041237816779252189961010976031343262692359854938192511203865642;
	weights[8] 	= 0.139570677926154314447804794511028322520850275315511243202391128631088444541907811680768257363571333638149088893276639904111;

	nodes[9] 	= -0.84820658341042721620064832077421685136625617473699263409572755876067507517414548519760771975082148085090373835713339917746558631;
	weights[9] 	= 0.107159220467171935011869546685869303415543715758101980687022389121877994852315799725685857137608624044398087678375055581272;

	nodes[10] 	= 0.84820658341042721620064832077421685136625617473699263409572755876067507517414548519760771975082148085090373835713339917746558631;
	weights[10] 	= 0.107159220467171935011869546685869303415543715758101980687022389121877994852315799725685857137608624044398087678375055581272;

	nodes[11] 	= -0.93727339240070590430775894771020947124399627351530445790136307635020297379704552795054758617426808659746824044603156844920095134;
	weights[11] 	= 0.070366047488108124709267416450667338466708032754330719825907292914387055512874237044840452066693939219355489858595040538805;

	nodes[12] 	= 0.93727339240070590430775894771020947124399627351530445790136307635020297379704552795054758617426808659746824044603156844920095134;
	weights[12] 	= 0.070366047488108124709267416450667338466708032754330719825907292914387055512874237044840452066693939219355489858595040538805;

	nodes[13] 	= -0.98799251802048542848956571858661258114697281712376148999999751558738843736901942471272205036831914497667516843990079250193958237;
	weights[13] 	= 0.0307532419961172683546283935772044177217481448334340742642282855042371894671171680390387707323994040025169911888594731301931;

	nodes[14] 	= 0.98799251802048542848956571858661258114697281712376148999999751558738843736901942471272205036831914497667516843990079250193958237;
	weights[14] 	= 0.0307532419961172683546283935772044177217481448334340742642282855042371894671171680390387707323994040025169911888594731301931;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_15_hpp__)*/