//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_7.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:56.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 7.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_7_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_7_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_7(long double*& nodes, long double*& weights) {
	nodes	= new long double[7];
	weights	= new long double[7];

	nodes[0] 	= 0.92387953251128675612818318939678828682241662586364248611509773128053500750110235871483993485034459609796302578224788303086917758;
	weights[0] 	= 0.05750944903191313218466893051557225218061615966795379433951542430184993810852950270877320987248340308127768626066674443530712783;

	nodes[1] 	= 0.70710678118654752440084436210484903928483593768847403658833986899536623923105351942519376716382078636750692311545614851246241803;
	weights[1] 	= 0.19634954084936207740391521145496893026232308746094411381093403701923852539288806241425217658388231674888425540708014416544336529;

	nodes[2] 	= 0.3826834323650897717284599840303988667613445624856270414338006356275460339600896922370137853422835471484242886614935559007560102;
	weights[2] 	= 0.33518963266681102262316149239436560834403001525393443328235264973662711267724662211973114329528123041649082455349354389557960274;

	nodes[3] 	= 0.e-127;
	weights[3] 	= 0.39269908169872415480783042290993786052464617492188822762186807403847705078577612482850435316776463349776851081416028833088673058;

	nodes[4] 	= -0.3826834323650897717284599840303988667613445624856270414338006356275460339600896922370137853422835471484242886614935559007560102;
	weights[4] 	= 0.33518963266681102262316149239436560834403001525393443328235264973662711267724662211973114329528123041649082455349354389557960274;

	nodes[5] 	= -0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	weights[5] 	= 0.1963495408493620774039152114549689302623230874609441138109340370192385253928880624142521765838823167488842554070801441654433653;

	nodes[6] 	= -0.9238795325112867561281831893967882868224166258636424861150977312805350075011023587148399348503445960979630257822478830308691776;
	weights[6] 	= 0.05750944903191313218466893051557225218061615966795379433951542430184993810852950270877320987248340308127768626066674443530712783;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_7_hpp__)*/