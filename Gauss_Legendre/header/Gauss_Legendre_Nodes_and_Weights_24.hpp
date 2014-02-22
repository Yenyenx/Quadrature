//
//        Gauss_Legendre_Nodes_and_Weights_24.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 24.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_24_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_24_hpp__

void Gauss_Legendre_Nodes_and_Weights_24(long double*& nodes, long double*& weights) {
	nodes	= new long double[24];
	weights	= new long double[24];

	nodes[0] 	= -0.06405689286260562608504308262474503859099919542074739342435108178973928359391010780289287613425250908232422738351157569948691125;
	weights[0] 	= 0.12793819534675215697405616522469537185171123954166788242129957637234759154053640241209197756673474233070786786050275343543363655;

	nodes[1] 	= 0.06405689286260562608504308262474503859099919542074739342435108178973928359391010780289287613425250908232422738351157569948691125;
	weights[1] 	= 0.12793819534675215697405616522469537185171123954166788242129957637234759154053640241209197756673474233070786786050275343543363655;

	nodes[2] 	= -0.19111886747361630915863982075706963184040510331475335614891857658808595269187174198249111124520973071359341460135954613927215429;
	weights[2] 	= 0.125837456346828296121375382511183688726403325581345404178091516881393872666662596882038179256421140724412534011228361937164002;

	nodes[3] 	= 0.19111886747361630915863982075706963184040510331475335614891857658808595269187174198249111124520973071359341460135954613927215429;
	weights[3] 	= 0.125837456346828296121375382511183688726403325581345404178091516881393872666662596882038179256421140724412534011228361937164002;

	nodes[4] 	= -0.31504267969616337438679329131981024078647826082481726875423012952988215634124340834387350955520821060722516173640306435366589318;
	weights[4] 	= 0.121670472927803391204463153476262425607029559203805778777471754512625393717716961917757803430772841912957145840769868545511;

	nodes[5] 	= 0.31504267969616337438679329131981024078647826082481726875423012952988215634124340834387350955520821060722516173640306435366589318;
	weights[5] 	= 0.121670472927803391204463153476262425607029559203805778777471754512625393717716961917757803430772841912957145840769868545511;

	nodes[6] 	= -0.4337935076260451384870842319133497124524215109279688080808012846567644070336309140577354304660756168836170633415002629755076382;
	weights[6] 	= 0.115505668053725601353344483906783559862270311376496470584449360088670253551318549940344257646812795659959909604702327440655;

	nodes[7] 	= 0.4337935076260451384870842319133497124524215109279688080808012846567644070336309140577354304660756168836170633415002629755076382;
	weights[7] 	= 0.115505668053725601353344483906783559862270311376496470584449360088670253551318549940344257646812795659959909604702327440655;

	nodes[8] 	= -0.54542147138883953565837561721837237001078399258761817543361438983056483917957089709583486744080625019777466533136767789488102974;
	weights[8] 	= 0.10744427011596563478257734244660622279462869013422002176654164088682186639443710598058672712091523667294507649845481547682;

	nodes[9] 	= 0.54542147138883953565837561721837237001078399258761817543361438983056483917957089709583486744080625019777466533136767789488102974;
	weights[9] 	= 0.10744427011596563478257734244660622279462869013422002176654164088682186639443710598058672712091523667294507649845481547682;

	nodes[10] 	= -0.64809365193697556925249578691074762666965829861895678029893366502444831756853977192811777036572724339905199544147440034533477941;
	weights[10] 	= 0.0976186521041138882698806644642471544279189688536859440833106100229543385775919783480200396907181874824147457133642686457;

	nodes[11] 	= 0.64809365193697556925249578691074762666965829861895678029893366502444831756853977192811777036572724339905199544147440034533477941;
	weights[11] 	= 0.0976186521041138882698806644642471544279189688536859440833106100229543385775919783480200396907181874824147457133642686457;

	nodes[12] 	= -0.7401241915785543642438281030999784255232924870141854568663823682719003386409229324413313561311287943298526270745398288213617462;
	weights[12] 	= 0.0861901615319532759171852029837426671850805882379330055884071438612868844607805312688886562972816971732787465671984327992;

	nodes[13] 	= 0.7401241915785543642438281030999784255232924870141854568663823682719003386409229324413313561311287943298526270745398288213617462;
	weights[13] 	= 0.0861901615319532759171852029837426671850805882379330055884071438612868844607805312688886562972816971732787465671984327992;

	nodes[14] 	= -0.82000198597390292195394987266974520807612647766785558724398102600138297895355454008226052117258379606664247658583091523699759567;
	weights[14] 	= 0.073346481411080305734033615253116518119336509848499471402702490660041388475870934832325142269444555195884430907934115893;

	nodes[15] 	= 0.82000198597390292195394987266974520807612647766785558724398102600138297895355454008226052117258379606664247658583091523699759567;
	weights[15] 	= 0.073346481411080305734033615253116518119336509848499471402702490660041388475870934832325142269444555195884430907934115893;

	nodes[16] 	= -0.88641552700440103421315434198219675508733304330892004037103791677567483439895917210412350199618170125352951089100750241758856649;
	weights[16] 	= 0.059298584915436780746367758500108584541200126565213491037376551294098303177508241566068355610609009299865473395249264247;

	nodes[17] 	= 0.88641552700440103421315434198219675508733304330892004037103791677567483439895917210412350199618170125352951089100750241758856649;
	weights[17] 	= 0.059298584915436780746367758500108584541200126565213491037376551294098303177508241566068355610609009299865473395249264247;

	nodes[18] 	= -0.93827455200273275852364900170872144965481965807745134663502717590958949605253567095996464153586995550942670576235159298959974495;
	weights[18] 	= 0.044277438817419806168602748211338228859312841833857896741397229721024376282266439634394717015559493493461180304606653035;

	nodes[19] 	= 0.93827455200273275852364900170872144965481965807745134663502717590958949605253567095996464153586995550942670576235159298959974495;
	weights[19] 	= 0.044277438817419806168602748211338228859312841833857896741397229721024376282266439634394717015559493493461180304606653035;

	nodes[20] 	= -0.97472855597130949819839199300816906174118305304017871981159356510718112128098022453863747428171545498274125857557134911447981803;
	weights[20] 	= 0.028531388628933663181307815951878286449197797931908116601664804757644005637429143425685425422809875542273722445271163343;

	nodes[21] 	= 0.97472855597130949819839199300816906174118305304017871981159356510718112128098022453863747428171545498274125857557134911447981803;
	weights[21] 	= 0.028531388628933663181307815951878286449197797931908116601664804757644005637429143425685425422809875542273722445271163343;

	nodes[22] 	= -0.99518721999702136017999740970073681187459769259600287744160054511428383206945773788339728933711570886234534629789658539944972377;
	weights[22] 	= 0.0123412297999871995468056670700372915759100408913665168172873209410917255178811137917987186719204245118391668507179752022;

	nodes[23] 	= 0.99518721999702136017999740970073681187459769259600287744160054511428383206945773788339728933711570886234534629789658539944972377;
	weights[23] 	= 0.0123412297999871995468056670700372915759100408913665168172873209410917255178811137917987186719204245118391668507179752022;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_24_hpp__)*/