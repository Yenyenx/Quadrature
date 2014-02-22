//
//        Gauss_Laguerre_Nodes_and_Weights_2.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 2.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_2_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_2_hpp__

void Gauss_Laguerre_Nodes_and_Weights_2(long double*& nodes, long double*& weights) {
	nodes	= new long double[2];
	weights	= new long double[2];

	nodes[0] 	= 0.58578643762690495119831127579030192143032812462305192682332026200926752153789296114961246567235842726498615376908770297507516394;
	weights[0] 	= 0.853553390593273762200422181052424519642417968844237018294169934497683119615526759712596883581910393183753461557728074256231209;

	nodes[1] 	= 3.4142135623730950488016887242096980785696718753769480731766797379907324784621070388503875343276415727350138462309122970249248361;
	weights[1] 	= 0.146446609406726237799577818947575480357582031155762981705830065502316880384473240287403116418089606816246538442271925743768791;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_2_hpp__)*/