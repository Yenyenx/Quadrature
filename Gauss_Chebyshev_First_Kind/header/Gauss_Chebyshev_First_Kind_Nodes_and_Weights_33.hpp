//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_33.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 33.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_33_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_33_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_33(long double*& nodes, long double& weight) {
	weight 		= 0.09519977738150888601401949646301523891506573937500320669621044219114595170564269692812226743460960812067115413676613050445738923;

	nodes		= new long double[33];

	nodes[0] 	= 0.99886733918300797666267257990843166223505271564262584389056166460237831659736156071860395132466676813459686009514643174842378577;
	nodes[1] 	= 0.98982144188093273237609203777671878737651937194871668783861544492362236572535409860444233983835660359683775025856814210051233034;
	nodes[2] 	= 0.97181156832354168737942015473266358213999969568148743919420299407367649640298221861880069411593926764601742448109533335553800992;
	nodes[3] 	= 0.94500081871466848739153524267272391656831703856948811893182136113373349217003093825150049568642254343368972447098708527297059858;
	nodes[4] 	= 0.90963199535451837141171538307902846006024105119464417075610445031751735451746803738741566040627599911100090808517355516341883033;
	nodes[5] 	= 0.86602540378443864676372317075293618347140262690519031402790348972596650845440001854057309337862428783781307070770335151498497255;
	nodes[6] 	= 0.81457595205033570777961107891971736271618511369007370963172972769697309580109436099576853846208551815754092089960615462822951486;
	nodes[7] 	= 0.75574957435425828377403584397234442017971744516922356957999988305190613888672243995948471123326377317734391790922996700805690876;
	nodes[8] 	= 0.6900790114821119896680022393860466831042217967082205673631226879858276978839530504953330756640527176780233167150331138816147743;
	nodes[9] 	= 0.6181589862206052132242870766482095935286239370335437116391394291716634660140194817371260060088608840357588957828267527766419629;
	nodes[10] 	= 0.5406408174555975821076359543186916954317706078981138400357498893123823726908842540544426904469143978223314110760769548770640755;
	nodes[11] 	= 0.4582265217274103945550366255897399668032821077445120038548117752899959439064773066641612608777523703122654490190694768713597103;
	nodes[12] 	= 0.3716624556603275191518049611285091938478954349151729761994760157519588997113346168673163338294957195610788544757413893238703675;
	nodes[13] 	= 0.2817325568414296977114179153466168990357778989732668718310803060878487985190291681234676184518865499679941077660622194739232356;
	nodes[14] 	= 0.1892512443604102036174993987003794963885995934002645493518214780818273532833084982920157844531587702563458065617571182649136898;
	nodes[15] 	= 0.0950560433041826636321043041593110973440559375045704611243747226205442587163736763916471219441904809534599871855674005351893155;
	nodes[16] 	= 0.e-127;
	nodes[17] 	= -0.0950560433041826636321043041593110973440559375045704611243747226205442587163736763916471219441904809534599871855674005351893155;
	nodes[18] 	= -0.1892512443604102036174993987003794963885995934002645493518214780818273532833084982920157844531587702563458065617571182649136898;
	nodes[19] 	= -0.2817325568414296977114179153466168990357778989732668718310803060878487985190291681234676184518865499679941077660622194739232356;
	nodes[20] 	= -0.3716624556603275191518049611285091938478954349151729761994760157519588997113346168673163338294957195610788544757413893238703675;
	nodes[21] 	= -0.4582265217274103945550366255897399668032821077445120038548117752899959439064773066641612608777523703122654490190694768713597103;
	nodes[22] 	= -0.5406408174555975821076359543186916954317706078981138400357498893123823726908842540544426904469143978223314110760769548770640755;
	nodes[23] 	= -0.6181589862206052132242870766482095935286239370335437116391394291716634660140194817371260060088608840357588957828267527766419629;
	nodes[24] 	= -0.6900790114821119896680022393860466831042217967082205673631226879858276978839530504953330756640527176780233167150331138816147743;
	nodes[25] 	= -0.7557495743542582837740358439723444201797174451692235695799998830519061388867224399594847112332637731773439179092299670080569088;
	nodes[26] 	= -0.8145759520503357077796110789197173627161851136900737096317297276969730958010943609957685384620855181575409208996061546282295149;
	nodes[27] 	= -0.8660254037844386467637231707529361834714026269051903140279034897259665084544000185405730933786242878378130707077033515149849725;
	nodes[28] 	= -0.9096319953545183714117153830790284600602410511946441707561044503175173545174680373874156604062759991110009080851735551634188303;
	nodes[29] 	= -0.9450008187146684873915352426727239165683170385694881189318213611337334921700309382515004956864225434336897244709870852729705986;
	nodes[30] 	= -0.9718115683235416873794201547326635821399996956814874391942029940736764964029822186188006941159392676460174244810953333555380099;
	nodes[31] 	= -0.98982144188093273237609203777671878737651937194871668783861544492362236572535409860444233983835660359683775025856814210051233034;
	nodes[32] 	= -0.99886733918300797666267257990843166223505271564262584389056166460237831659736156071860395132466676813459686009514643174842378577;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_33_hpp__)*/