//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_20.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:56.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 20.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_20_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_20_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_20(long double*& nodes, long double*& weights) {
	nodes	= new long double[20];
	weights	= new long double[20];

	nodes[0] 	= 0.98883082622512854506974288293400861306525101357418770639949692716021353309872609924934318996817419308688871791291610516590831812;
	weights[0] 	= 0.0033231463562349343649304231111344190808912310637058095644749229754082466193715014582201699324323049852227025873047906710288965406;

	nodes[1] 	= 0.95557280578614073281133405376746666643958910634689043067188665898809431541844944622673474039669985370628755349326152775411795347;
	weights[1] 	= 0.012997309287800681093495454046725991564638779540683360215038128785796479903400175489070004247603709694094252627006994416764010401;

	nodes[2] 	= 0.90096886790241912623610231950744505116591916213185715005356242319943242042793996550136145471851241531831096436867510363979163288;
	weights[2] 	= 0.028162896963862861087948631142451429457556407112538702455854294424074829464448488533267569340845360037068111565632272607258058283;

	nodes[3] 	= 0.82623877431599487194516257377267839779237040696454020610758603927416951010168550475040648788343983227502891721628175833235420042;
	weights[3] 	= 0.04747238036631802416116073153458935571822443252260936212223560285038422890051799423757729879644238617428329644508289505190758087;

	nodes[4] 	= 0.73305187182982632852243148927067190697323353758234547535989964309067308338990212715215368778862689735754042565276208838477385709;
	weights[4] 	= 0.0692100271565858351603397565834253794289877059935980515040855346146045286349440607164717574905440786735267007644886392784429507;

	nodes[5] 	= 0.62348980185873353052500488400423981063227473089640210536554943909685365245648728457594250732658537166705809220917454300913572926;
	weights[5] 	= 0.09144435202325928895710852452674164253841733317620825475106632840856208867254109289403651174661334580653079523673576950041430573;

	nodes[6] 	= 0.5;
	weights[6] 	= 0.11219973762820690137366583511712510300704176426339663646339087829670772879593603566528695804793275242793386023261722523739620874;

	nodes[7] 	= 0.3653410243663950145447379989297688024329762826777856010339474880633598806422388146734006826415888214198306257037415621567725889;
	weights[7] 	= 0.1296319768769195794252927225963741443947749642868792086112405052094451222999594769783172344168198540641142226411938903033492152;

	nodes[8] 	= 0.2225209339563144042889025644967947594663555687645449553119870158974212320285473190745810526080729563487471278404994393693440964;
	weights[8] 	= 0.14219213881202728649349645960409883502045704299251186120765809319301444905352783512503215435771771648824676707373881677958545637;

	nodes[9] 	= 0.0747300935864242542909397457347666533735487551673169439459763839252629103262544607509549668350725830432820471523933453074374325;
	weights[9] 	= 0.14876419792623291749822230755720942083830268889164520834869185931895639922690558855972904795857775864451631245451928281562677832;

	nodes[10] 	= -0.0747300935864242542909397457347666533735487551673169439459763839252629103262544607509549668350725830432820471523933453074374325;
	weights[10] 	= 0.14876419792623291749822230755720942083830268889164520834869185931895639922690558855972904795857775864451631245451928281562677832;

	nodes[11] 	= -0.2225209339563144042889025644967947594663555687645449553119870158974212320285473190745810526080729563487471278404994393693440964;
	weights[11] 	= 0.14219213881202728649349645960409883502045704299251186120765809319301444905352783512503215435771771648824676707373881677958545637;

	nodes[12] 	= -0.3653410243663950145447379989297688024329762826777856010339474880633598806422388146734006826415888214198306257037415621567725889;
	weights[12] 	= 0.1296319768769195794252927225963741443947749642868792086112405052094451222999594769783172344168198540641142226411938903033492152;

	nodes[13] 	= -0.5;
	weights[13] 	= 0.11219973762820690137366583511712510300704176426339663646339087829670772879593603566528695804793275242793386023261722523739620874;

	nodes[14] 	= -0.6234898018587335305250048840042398106322747308964021053655494390968536524564872845759425073265853716670580922091745430091357293;
	weights[14] 	= 0.09144435202325928895710852452674164253841733317620825475106632840856208867254109289403651174661334580653079523673576950041430573;

	nodes[15] 	= -0.7330518718298263285224314892706719069732335375823454753598996430906730833899021271521536877886268973575404256527620883847738571;
	weights[15] 	= 0.0692100271565858351603397565834253794289877059935980515040855346146045286349440607164717574905440786735267007644886392784429507;

	nodes[16] 	= -0.8262387743159948719451625737726783977923704069645402061075860392741695101016855047504064878834398322750289172162817583323542004;
	weights[16] 	= 0.04747238036631802416116073153458935571822443252260936212223560285038422890051799423757729879644238617428329644508289505190758087;

	nodes[17] 	= -0.9009688679024191262361023195074450511659191621318571500535624231994324204279399655013614547185124153183109643686751036397916329;
	weights[17] 	= 0.02816289696386286108794863114245142945755640711253870245585429442407482946444848853326756934084536003706811156563227260725805828;

	nodes[18] 	= -0.95557280578614073281133405376746666643958910634689043067188665898809431541844944622673474039669985370628755349326152775411795347;
	weights[18] 	= 0.0129973092878006810934954540467259915646387795406833602150381287857964799034001754890700042476037096940942526270069944167640104;

	nodes[19] 	= -0.98883082622512854506974288293400861306525101357418770639949692716021353309872609924934318996817419308688871791291610516590831812;
	weights[19] 	= 0.00332314635623493436493042311113441908089123106370580956447492297540824661937150145822016993243230498522270258730479067102889654;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_20_hpp__)*/