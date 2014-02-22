//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_16.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:56.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 16.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_16_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_16_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_16(long double*& nodes, long double*& weights) {
	nodes	= new long double[16];
	weights	= new long double[16];

	nodes[0] 	= 0.98297309968390177828194884485519871609872287506563287599738045920390785255224421742968448612935422732119306057451119765004221647;
	weights[0] 	= 0.006239551412252137078263610820772100336424990400580457559817816334498504489374198571853068725566344709043955953607330581329667129;

	nodes[1] 	= 0.9324722294043558045731158918215633862625877779451169282483500118605360465696444981280747128504298509751993177719550636034522256;
	weights[1] 	= 0.02411551965623596816224432372720970472158363447182632959121462794689889850443047777065670227960941754230231746108508547680487544;

	nodes[2] 	= 0.85021713572961415213414392294935205847066032875791284737007365641770806560342503459058933111543574215229344493330261953295552278;
	weights[2] 	= 0.05121365616644197174929777934676339207068614993390115691711947012927909550075960296758300810097500578471733308526468979811526488;

	nodes[3] 	= 0.73900891722065911592453430987264810575991761970809772315714631069597281854575816206697753948006641635838800949323925590226810753;
	weights[3] 	= 0.08387420745120886507535347996539952368089494128434437821060790152146833398084529740120700984854539811778628155180875702785169937;

	nodes[4] 	= 0.6026346363792563891785881549868406216189645817484142903524934942962575263723982839780418366974824907398635863031633528492531596;
	weights[4] 	= 0.11768618508116662600371165237466360725483448236687554031695285287094411760313309553671988338932432959329739455555177362320547506;

	nodes[5] 	= 0.44573835577653826739645754937948685542767777358942749300033787285158275009972916334045811639822868034463792569905260629362068651;
	weights[5] 	= 0.14808309411875357253262599366943313314277815516214527344724035457810342670742250897483855434847944707433917749395223520039953023;

	nodes[6] 	= 0.2736629900720828635390779354368134316248526694265054638774291154113557447083112431687928612879815216236169046973901693152373593;
	weights[6] 	= 0.17095966356335603444736753404516952244504834061376540947325460661821782363463670862838105697863753896700119792478595857231737707;

	nodes[7] 	= 0.0922683594633019952396511071545064803630172837558233331915425299211375740212469556315981465015290341587417435441204135481472385;
	weights[7] 	= 0.18322628594803313456679647187046473739704165561033790972752851807754390115095035980576942266439178520704936360226474638174957196;

	nodes[8] 	= -0.0922683594633019952396511071545064803630172837558233331915425299211375740212469556315981465015290341587417435441204135481472385;
	weights[8] 	= 0.18322628594803313456679647187046473739704165561033790972752851807754390115095035980576942266439178520704936360226474638174957196;

	nodes[9] 	= -0.2736629900720828635390779354368134316248526694265054638774291154113557447083112431687928612879815216236169046973901693152373593;
	weights[9] 	= 0.17095966356335603444736753404516952244504834061376540947325460661821782363463670862838105697863753896700119792478595857231737707;

	nodes[10] 	= -0.4457383557765382673964575493794868554276777735894274930003378728515827500997291633404581163982286803446379256990526062936206865;
	weights[10] 	= 0.14808309411875357253262599366943313314277815516214527344724035457810342670742250897483855434847944707433917749395223520039953023;

	nodes[11] 	= -0.6026346363792563891785881549868406216189645817484142903524934942962575263723982839780418366974824907398635863031633528492531596;
	weights[11] 	= 0.11768618508116662600371165237466360725483448236687554031695285287094411760313309553671988338932432959329739455555177362320547506;

	nodes[12] 	= -0.7390089172206591159245343098726481057599176197080977231571463106959728185457581620669775394800664163583880094932392559022681075;
	weights[12] 	= 0.08387420745120886507535347996539952368089494128434437821060790152146833398084529740120700984854539811778628155180875702785169937;

	nodes[13] 	= -0.8502171357296141521341439229493520584706603287579128473700736564177080656034250345905893311154357421522934449333026195329555228;
	weights[13] 	= 0.05121365616644197174929777934676339207068614993390115691711947012927909550075960296758300810097500578471733308526468979811526488;

	nodes[14] 	= -0.9324722294043558045731158918215633862625877779451169282483500118605360465696444981280747128504298509751993177719550636034522256;
	weights[14] 	= 0.02411551965623596816224432372720970472158363447182632959121462794689889850443047777065670227960941754230231746108508547680487544;

	nodes[15] 	= -0.98297309968390177828194884485519871609872287506563287599738045920390785255224421742968448612935422732119306057451119765004221647;
	weights[15] 	= 0.00623955141225213707826361082077210033642499040058045755981781633449850448937419857185306872556634470904395595360733058132966713;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_16_hpp__)*/