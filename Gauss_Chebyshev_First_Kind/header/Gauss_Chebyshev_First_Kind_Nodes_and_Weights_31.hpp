//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_31.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 31.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_31_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_31_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_31(long double*& nodes, long double& weight) {
	weight 		= 0.10134169850289655607944010913804848013539256127016470390241756749380052923503899995574305888200377638652090601655749376280947886;

	nodes		= new long double[31];

	nodes[0] 	= 0.99871650717105280714631143675951404574748850709489684182620990194905934010548723944121556589615486138903525817752386052544124697;
	nodes[1] 	= 0.98846832432811139916219068940315377492098000323048479480341026677470683616403416896494127591134895751543510332436577715183283358;
	nodes[2] 	= 0.96807711886620430515300767280129074283476515184750303544712414513007634054724812789019242897702088084065519955418315374412755047;
	nodes[3] 	= 0.93775213214708045842917617431232988813085636366328588479386966809100654094438859666144295478888561908650186374183825627725612428;
	nodes[4] 	= 0.89780453957074165713680289766204120244347649336781535357313670417222261223093419982702331931941817203561614101159938201856352532;
	nodes[5] 	= 0.84864425749475095046410433899380845398255448975619605598991780922253513961874172021488069663113541187241442418614269729052857408;
	nodes[6] 	= 0.79077573693769858207822045946126159061859457561891211699133614666485818924435574811355855038359436262762549250427780854628770115;
	nodes[7] 	= 0.7247927872291199588654846624405482525919389815577375962421979199386082916715895767776929043043362401113284999366478614275382249;
	nodes[8] 	= 0.6513724827222222074539996146910164660919870547300434431721701667729917161465825341788404115471349828960392128580709566504642227;
	nodes[9] 	= 0.571268215094792279157424543628455482353482632222725081115175473116291447684384174225493785155709635118824626597463511222495074;
	nodes[10] 	= 0.4853019625310810252145722292597299794313024220179662969309267143768301785659470454683610530561965862323416237681781061184203783;
	nodes[11] 	= 0.3943558551133185801016261030214455736355625461923895680366818943444195466732587209535601766285785728931374154882315960530981746;
	nodes[12] 	= 0.2993631229733579540081126169766754622404683370510831362211854513503109243833722764576485715608750891202463504930794376022190348;
	nodes[13] 	= 0.2012985200886600791415289683390134818533964414403184288910426057177916708137234594976377353555932640336815540649690557440527082;
	nodes[14] 	= 0.1011683219874321777860407155854228233862112145002848360432122367759577099956132449134867215604769246386088630679290496301753923;
	nodes[15] 	= 0.e-127;
	nodes[16] 	= -0.1011683219874321777860407155854228233862112145002848360432122367759577099956132449134867215604769246386088630679290496301753923;
	nodes[17] 	= -0.2012985200886600791415289683390134818533964414403184288910426057177916708137234594976377353555932640336815540649690557440527082;
	nodes[18] 	= -0.2993631229733579540081126169766754622404683370510831362211854513503109243833722764576485715608750891202463504930794376022190348;
	nodes[19] 	= -0.3943558551133185801016261030214455736355625461923895680366818943444195466732587209535601766285785728931374154882315960530981746;
	nodes[20] 	= -0.4853019625310810252145722292597299794313024220179662969309267143768301785659470454683610530561965862323416237681781061184203783;
	nodes[21] 	= -0.571268215094792279157424543628455482353482632222725081115175473116291447684384174225493785155709635118824626597463511222495074;
	nodes[22] 	= -0.6513724827222222074539996146910164660919870547300434431721701667729917161465825341788404115471349828960392128580709566504642227;
	nodes[23] 	= -0.7247927872291199588654846624405482525919389815577375962421979199386082916715895767776929043043362401113284999366478614275382249;
	nodes[24] 	= -0.7907757369376985820782204594612615906185945756189121169913361466648581892443557481135585503835943626276254925042778085462877012;
	nodes[25] 	= -0.8486442574947509504641043389938084539825544897561960559899178092225351396187417202148806966311354118724144241861426972905285741;
	nodes[26] 	= -0.8978045395707416571368028976620412024434764933678153535731367041722226122309341998270233193194181720356161410115993820185635253;
	nodes[27] 	= -0.9377521321470804584291761743123298881308563636632858847938696680910065409443885966614429547888856190865018637418382562772561243;
	nodes[28] 	= -0.9680771188662043051530076728012907428347651518475030354471241451300763405472481278901924289770208808406551995541831537441275505;
	nodes[29] 	= -0.98846832432811139916219068940315377492098000323048479480341026677470683616403416896494127591134895751543510332436577715183283358;
	nodes[30] 	= -0.99871650717105280714631143675951404574748850709489684182620990194905934010548723944121556589615486138903525817752386052544124697;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_31_hpp__)*/