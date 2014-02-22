//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_23.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 23.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_23_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_23_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_23(long double*& nodes, long double& weight) {
	weight 		= 0.13659098493868666254185406014258708192161606084239590525978019966555723505592213037513194892791813339052817767449053507161277585;

	nodes		= new long double[23];

	nodes[0] 	= 0.99766876919053919845357828069927831663684542767507925897603737026297925931199087571224352660093909266828445334575397026545121697;
	nodes[1] 	= 0.97908408768232287563281488476023713498465583400019093761569251109063271087274302927558920784893386000035529304741881504368338184;
	nodes[2] 	= 0.94226092211882049561768422531797213362541506328548334333693272770870781334141988298159139863814247180185437924434448629994055571;
	nodes[3] 	= 0.8878852184023752349842692774195844835988809771857331950402626577791364688394636484705055984198094514127914114761228070354563868;
	nodes[4] 	= 0.81696989301044201697341403724498817724676059905727381527471388347797637807215477696047362648808110005976871335041706270137431385;
	nodes[5] 	= 0.7308359642781241016508331160835884644008902836624912056602964563048707466881098460668592758004172493085637836061987104479926272;
	nodes[6] 	= 0.6310879443260527893674001301433105742008292477402217226778592270573939415941218939136903907260482745845588475984221892104996955;
	nodes[7] 	= 0.5195839500354335781330010113237876331492792192280613038393910784405050279889020711861075240130063258618642300172415866923833437;
	nodes[8] 	= 0.3984010898462414579978803999696789656499678409303454918130064526251436321924367473709306012916403176770588459709570506762270599;
	nodes[9] 	= 0.2697967711570242712453285226025705364752767484344268207378646612511474947347143226456526417279563349734467827333487496797436392;
	nodes[10] 	= 0.1361666490962465907607258333878729914503702438152028761981390859253965428691257340813256527790817490812724222419162914460857738;
	nodes[11] 	= 0.e-127;
	nodes[12] 	= -0.1361666490962465907607258333878729914503702438152028761981390859253965428691257340813256527790817490812724222419162914460857738;
	nodes[13] 	= -0.2697967711570242712453285226025705364752767484344268207378646612511474947347143226456526417279563349734467827333487496797436392;
	nodes[14] 	= -0.3984010898462414579978803999696789656499678409303454918130064526251436321924367473709306012916403176770588459709570506762270599;
	nodes[15] 	= -0.5195839500354335781330010113237876331492792192280613038393910784405050279889020711861075240130063258618642300172415866923833437;
	nodes[16] 	= -0.6310879443260527893674001301433105742008292477402217226778592270573939415941218939136903907260482745845588475984221892104996955;
	nodes[17] 	= -0.7308359642781241016508331160835884644008902836624912056602964563048707466881098460668592758004172493085637836061987104479926272;
	nodes[18] 	= -0.8169698930104420169734140372449881772467605990572738152747138834779763780721547769604736264880811000597687133504170627013743139;
	nodes[19] 	= -0.8878852184023752349842692774195844835988809771857331950402626577791364688394636484705055984198094514127914114761228070354563868;
	nodes[20] 	= -0.9422609221188204956176842253179721336254150632854833433369327277087078133414198829815913986381424718018543792443444862999405557;
	nodes[21] 	= -0.9790840876823228756328148847602371349846558340001909376156925110906327108727430292755892078489338600003552930474188150436833818;
	nodes[22] 	= -0.99766876919053919845357828069927831663684542767507925897603737026297925931199087571224352660093909266828445334575397026545121697;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_23_hpp__)*/