//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_15.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 15.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_15_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_15_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_15(long double*& nodes, long double& weight) {
	weight 		= 0.20943951023931954923084289221863352561314462662500705473166297282052109375241393324186898835614113786547653910088548710980625631;

	nodes		= new long double[15];

	nodes[0] 	= 0.99452189536827333692269194498057038152079208870931942736655883357431625068689836257930622038336092967901760933592087343856440085;
	nodes[1] 	= 0.95105651629515357211643933337938214340569863412575022244730564443015317008519350171879281097081138167589971755140300420898706619;
	nodes[2] 	= 0.86602540378443864676372317075293618347140262690519031402790348972596650845440001854057309337862428783781307070770335151498497255;
	nodes[3] 	= 0.74314482547739423501469704897425697718911387349802638604012367054777034442111912541416405424808380861803436695639437010239598251;
	nodes[4] 	= 0.5877852522924731291687059546390727685976524376431459910722724807572784741623519575085040498627413359600531316027526593663389303;
	nodes[5] 	= 0.4067366430758002077539859903414976129231396510661734362942863528170377765245464050708021705206195937189644777331682140722254705;
	nodes[6] 	= 0.2079116908177593371017422844051251662165847606277238364071819738823828256640743763046287567227275730578653505950086341065910837;
	nodes[7] 	= 0.e-127;
	nodes[8] 	= -0.2079116908177593371017422844051251662165847606277238364071819738823828256640743763046287567227275730578653505950086341065910837;
	nodes[9] 	= -0.4067366430758002077539859903414976129231396510661734362942863528170377765245464050708021705206195937189644777331682140722254705;
	nodes[10] 	= -0.5877852522924731291687059546390727685976524376431459910722724807572784741623519575085040498627413359600531316027526593663389303;
	nodes[11] 	= -0.7431448254773942350146970489742569771891138734980263860401236705477703444211191254141640542480838086180343669563943701023959825;
	nodes[12] 	= -0.8660254037844386467637231707529361834714026269051903140279034897259665084544000185405730933786242878378130707077033515149849725;
	nodes[13] 	= -0.9510565162951535721164393333793821434056986341257502224473056444301531700851935017187928109708113816758997175514030042089870662;
	nodes[14] 	= -0.99452189536827333692269194498057038152079208870931942736655883357431625068689836257930622038336092967901760933592087343856440085;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_15_hpp__)*/