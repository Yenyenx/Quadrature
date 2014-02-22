//
//        Gauss_Legendre_Nodes_and_Weights_13.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 13.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_13_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_13_hpp__

void Gauss_Legendre_Nodes_and_Weights_13(long double*& nodes, long double*& weights) {
	nodes	= new long double[13];
	weights	= new long double[13];

	nodes[0] 	= 0;
	weights[0] 	= 0.23255155323087391019458951526883594815662747730679798611866543934476002408070340138272206204274136342068410000477932545864613797;

	nodes[1] 	= -0.23045831595513479406552812109798883521154237588353116346926149783716208368858195081280294476468012932385128024931634124956408904;
	weights[1] 	= 0.226283180262897238412090186039776618434757737615557019864968548771575663120499971041826318666313929721126588910752683642655797;

	nodes[2] 	= 0.23045831595513479406552812109798883521154237588353116346926149783716208368858195081280294476468012932385128024931634124956408904;
	weights[2] 	= 0.226283180262897238412090186039776618434757737615557019864968548771575663120499971041826318666313929721126588910752683642655797;

	nodes[3] 	= -0.44849275103644685287791285212763986780192166744175787895828294745824409206621714364503820855473301009605263555713596857626397672;
	weights[3] 	= 0.20781604753688850231252321930605276338658260919950354921911111991653854356508443226059552804661192657598264070516907284167826;

	nodes[4] 	= 0.44849275103644685287791285212763986780192166744175787895828294745824409206621714364503820855473301009605263555713596857626397672;
	weights[4] 	= 0.20781604753688850231252321930605276338658260919950354921911111991653854356508443226059552804661192657598264070516907284167826;

	nodes[5] 	= -0.64234933944034022064398460699551565007169739826157685738914240791864355314499357491438830011419155512224677026454719381240473495;
	weights[5] 	= 0.1781459807619457382800466919960979955128126506610165029867944402891450694987487234947169512223127015069670497200743946097835;

	nodes[6] 	= 0.64234933944034022064398460699551565007169739826157685738914240791864355314499357491438830011419155512224677026454719381240473495;
	weights[6] 	= 0.1781459807619457382800466919960979955128126506610165029867944402891450694987487234947169512223127015069670497200743946097835;

	nodes[7] 	= -0.80157809073330991279420648958285989030561572479050002989738471385922211622664012203002987418531706025236160337609478507548685249;
	weights[7] 	= 0.138873510219787238463601776868871467621862718263298227646355016505772521534889535725181542854605625862409684276125989931584;

	nodes[8] 	= 0.80157809073330991279420648958285989030561572479050002989738471385922211622664012203002987418531706025236160337609478507548685249;
	weights[8] 	= 0.138873510219787238463601776868871467621862718263298227646355016505772521534889535725181542854605625862409684276125989931584;

	nodes[9] 	= -0.91759839922297796520654783650071951239047479011168329589528534565965920858960991428348539034058292445105178102177510723069758496;
	weights[9] 	= 0.0921214998377284479144217759537971209236839998622368390883915473395937297276329262918978157557319728688464206180281115405281;

	nodes[10] 	= 0.91759839922297796520654783650071951239047479011168329589528534565965920858960991428348539034058292445105178102177510723069758496;
	weights[10] 	= 0.0921214998377284479144217759537971209236839998622368390883915473395937297276329262918978157557319728688464206180281115405281;

	nodes[11] 	= -0.9841830547185881494728294488071096110649905619258749086940073204285952378756268418605692872614185884013163957673519758317180836;
	weights[11] 	= 0.0404840047653158795200215922009860600419865457449888681350466075049944605127927104944208124330531617543255657674600847044473;

	nodes[12] 	= 0.9841830547185881494728294488071096110649905619258749086940073204285952378756268418605692872614185884013163957673519758317180836;
	weights[12] 	= 0.0404840047653158795200215922009860600419865457449888681350466075049944605127927104944208124330531617543255657674600847044473;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_13_hpp__)*/