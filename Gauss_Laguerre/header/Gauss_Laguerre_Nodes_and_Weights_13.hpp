//
//        Gauss_Laguerre_Nodes_and_Weights_13.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 13.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_13_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_13_hpp__

void Gauss_Laguerre_Nodes_and_Weights_13(long double*& nodes, long double*& weights) {
	nodes	= new long double[13];
	weights	= new long double[13];

	nodes[0] 	= 0.10714238847225231064849337697722451676216549264832404357058745678611183631845257062527531312394507000430195988271118936420589627;
	weights[0] 	= 0.247188708429962621346249185963511989008105361353317295499266334309004976520375823703666732648911145330734588095893323622829584;

	nodes[1] 	= 0.56613189904040185340603634717693064543650022569105826839468967605237819407228753861776959166109319805310452019383463608936141491;
	weights[1] 	= 0.3656888229005219453067175308931936362688767494589881111065471461303116687970895158157256592120659465635063875606310644002076;

	nodes[2] 	= 1.398564336451019717927502599214428771637303723612051080352432569078801595686724781347003217086716330191108878475713815159187154;
	weights[2] 	= 0.2525624200576585023568242888149236764350048046742910928299567626922788457980049546675035344483557465615571993455390387707183;

	nodes[3] 	= 2.6165971084064112980836400847224337535666309299854400150857356241010048536916698124728899882746664332164350946575520208722716139;
	weights[3] 	= 0.103470758024183705114218631672153279831740235453657907124824021158802872024752939486355273171740351691794095338508927209018;

	nodes[4] 	= 4.2388459290170332793730338992575910527997489518455160462613651729993809834253865730669301853638978430069219727560147129504189011;
	weights[4] 	= 0.026432754415561615778158773570184820339697968029550405690505728915760882495837356433845420958797852756987603737261632135723;

	nodes[5] 	= 6.2922562711400737803937652302498285883377023860517557810937922548091994751333108959275551138869204050743460058646127365306199719;
	weights[5] 	= 0.004220396040254752765552092926437392170243761729615874590336243964143784474440161820987209570626066576631867908368846231071;

	nodes[6] 	= 8.8150019411869780473334886803568430668642764509504464514134862081068026758013150790918021439132347293571404164029536105682128732;
	weights[6] 	= 0.0004118817704727347748924725270819114427642554106575677126765653017917418574362754354260426360334917437639549809181027430357;

	nodes[7] 	= 11.861403588811242576221202187970432373770188812059678980326676877355735716675099811685774370861451287731246255074163603778526618;
	weights[7] 	= 0.00002351547398155323868828973007724462570881144013693863932169175460831943975189804649052676398234041845343957384571036039705;

	nodes[8] 	= 15.510762037703752781847853295770538593673062275410500347060968729782946655932303506442794047433543083739547835833725926303943698;
	weights[8] 	= 7.31731162024909910401047197761036628032043298476876530078253393816338566408503724861795633065694977446418177052224848909e-7;

	nodes[9] 	= 19.88463566388022833320365946338539204913010388087751496984854550510094166416263126008017304667773521157475775620480130381883978;
	weights[9] 	= 1.108841625703980679791509747586892687483903246937666103837060573513747063300637922776409829528643786830756714068904256082e-8;

	nodes[10] 	= 25.185263864677758084297029782259824440331042628454227016919184300866155692216797932767429169327516511825159268152907595525083091;
	weights[10] 	= 6.77082669220589884064621459081984631371213227057791878240939061368307580691229494276224709854995523983688449534626473605e-11;

	nodes[11] 	= 31.80038630194726837136632835255259937852801014591268442726022135892378212787360673174822169870740867578254005325938205667068258;
	weights[11] 	= 1.159979959905076060945071453819959455125613131779562752010263715330656013258475401835645188409579577373477801525639837776e-13;

	nodes[12] 	= 40.723008669265579565897966700105932769163264096500802572412314266036758529010413506126382113681871220443389983241626792368646408;
	weights[12] 	= 2.2450932038927584159918722686484819976534417245050002424607910209409446714061949661870815038377182968879493063113602831452e-17;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_13_hpp__)*/