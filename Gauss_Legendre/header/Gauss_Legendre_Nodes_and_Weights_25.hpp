//
//        Gauss_Legendre_Nodes_and_Weights_25.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 25.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_25_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_25_hpp__

void Gauss_Legendre_Nodes_and_Weights_25(long double*& nodes, long double*& weights) {
	nodes	= new long double[25];
	weights	= new long double[25];

	nodes[0] 	= 0;
	weights[0] 	= 0.12317605372671545120390287307905014243823362751815166539135219731691200794926142128460112517504958377310054583945994261039412667;

	nodes[1] 	= -0.12286469261071039638735981880803680553220534604978373842389353789270883496885841582643884994633105537597765980412319807495798299;
	weights[1] 	= 0.1222424429903100416889595189458515058350592475630590409075800822320389672191801024303354089107890663711562015684530427678901911;

	nodes[2] 	= 0.12286469261071039638735981880803680553220534604978373842389353789270883496885841582643884994633105537597765980412319807495798299;
	weights[2] 	= 0.1222424429903100416889595189458515058350592475630590409075800822320389672191801024303354089107890663711562015684530427678901911;

	nodes[3] 	= -0.24386688372098843204519036279745158640563315632598447642113565325038747278585595067977636776325034060327548499765741611499098604;
	weights[3] 	= 0.11945576353578477222817812651290104739017670141372642551958788133518409022018773502442869720975271321374348568426234702824815;

	nodes[4] 	= 0.24386688372098843204519036279745158640563315632598447642113565325038747278585595067977636776325034060327548499765741611499098604;
	weights[4] 	= 0.11945576353578477222817812651290104739017670141372642551958788133518409022018773502442869720975271321374348568426234702824815;

	nodes[5] 	= -0.36117230580938783773582173012764066742207834704337506979457877784674538239569654860329531506093761400789294612122811880889251054;
	weights[5] 	= 0.1148582591457116483393255458695558086409361916681801495915149900314827966711254225653442989855815627325051365235174359725897;

	nodes[6] 	= 0.36117230580938783773582173012764066742207834704337506979457877784674538239569654860329531506093761400789294612122811880889251054;
	weights[6] 	= 0.1148582591457116483393255458695558086409361916681801495915149900314827966711254225653442989855815627325051365235174359725897;

	nodes[7] 	= -0.47300273144571496052218211500919204133181773846162729090723082769560327584128603010315684778279363544192787010704498085194787191;
	weights[7] 	= 0.108519624474263653116093957050116619340077587986722016156494307348839292793608442693397683500296541721358327734275650374046;

	nodes[8] 	= 0.47300273144571496052218211500919204133181773846162729090723082769560327584128603010315684778279363544192787010704498085194787191;
	weights[8] 	= 0.108519624474263653116093957050116619340077587986722016156494307348839292793608442693397683500296541721358327734275650374046;

	nodes[9] 	= -0.57766293024122296772368984161265406739573503929151825664548350776102301275263202227671659646579649084013116066120581423363007531;
	weights[9] 	= 0.10053594906705064420220689039268582698846609452814190706986904199941294815904602968195565620373258211755226681206657778622;

	nodes[10] 	= 0.57766293024122296772368984161265406739573503929151825664548350776102301275263202227671659646579649084013116066120581423363007531;
	weights[10] 	= 0.10053594906705064420220689039268582698846609452814190706986904199941294815904602968195565620373258211755226681206657778622;

	nodes[11] 	= -0.67356636847346836448512063324762217588341672807274931705965696177828773684928421158196368568030932194044282149314388130710588079;
	weights[11] 	= 0.091028261982963649811497220702891653380992558959334310970483768967017384678410526902484398142953718885872521590850371736;

	nodes[12] 	= 0.67356636847346836448512063324762217588341672807274931705965696177828773684928421158196368568030932194044282149314388130710588079;
	weights[12] 	= 0.091028261982963649811497220702891653380992558959334310970483768967017384678410526902484398142953718885872521590850371736;

	nodes[13] 	= -0.75925926303735763057728286520436097638752201889833412091838973544501862882026240760763679724185230331463919586229072997574849347;
	weights[13] 	= 0.080140700335001018013234959669111302290225732853675893716201462973612828934801289559457377714225318048243957479325812966;

	nodes[14] 	= 0.75925926303735763057728286520436097638752201889833412091838973544501862882026240760763679724185230331463919586229072997574849347;
	weights[14] 	= 0.080140700335001018013234959669111302290225732853675893716201462973612828934801289559457377714225318048243957479325812966;

	nodes[15] 	= -0.83344262876083400142102110869356956946096411382352078602086471546171813247709012525322973947759168107133491065937347489438160435;
	weights[15] 	= 0.068038333812356917207187185656707968554709494354636562615071226410003654051711473106651522969481873733098761760660898221;

	nodes[16] 	= 0.83344262876083400142102110869356956946096411382352078602086471546171813247709012525322973947759168107133491065937347489438160435;
	weights[16] 	= 0.068038333812356917207187185656707968554709494354636562615071226410003654051711473106651522969481873733098761760660898221;

	nodes[17] 	= -0.89499199787827536885104200678280495417455484975358390306170168295917151090119945137118600693039178162093726882638295724438668488;
	weights[17] 	= 0.05490469597583519192593689154047332416010998555311134904850849824459377467843651189571192407943344476375674682881761263;

	nodes[18] 	= 0.89499199787827536885104200678280495417455484975358390306170168295917151090119945137118600693039178162093726882638295724438668488;
	weights[18] 	= 0.05490469597583519192593689154047332416010998555311134904850849824459377467843651189571192407943344476375674682881761263;

	nodes[19] 	= -0.94297457122897433941401116965847053190520157060899014192745249713729532254404926130890521815127348327109666786665572159253743723;
	weights[19] 	= 0.0409391567013063126556234877116459536608457833641043465046984148992974328802155127704789710551104241301235270154255115;

	nodes[20] 	= 0.94297457122897433941401116965847053190520157060899014192745249713729532254404926130890521815127348327109666786665572159253743723;
	weights[20] 	= 0.0409391567013063126556234877116459536608457833641043465046984148992974328802155127704789710551104241301235270154255115;

	nodes[21] 	= -0.97666392145951751149831538647959406774537055531440674467098742731616386753588055389644670948300617866819865983054648174635657479;
	weights[21] 	= 0.02635498661503213726190181529529914493596328170332246875536616578387093400887949937152982152817292889035036246460510397;

	nodes[22] 	= 0.97666392145951751149831538647959406774537055531440674467098742731616386753588055389644670948300617866819865983054648174635657479;
	weights[22] 	= 0.02635498661503213726190181529529914493596328170332246875536616578387093400887949937152982152817292889035036246460510397;

	nodes[23] 	= -0.99555696979049809790878494689390161725756264940480817121080493113293348134372793448728802635294700756868258870429255515982287449;
	weights[23] 	= 0.011393798501026287947902964113234773603320526292909696448948061116189891729766743355923677112945033505688431618009663744;

	nodes[24] 	= 0.99555696979049809790878494689390161725756264940480817121080493113293348134372793448728802635294700756868258870429255515982287449;
	weights[24] 	= 0.011393798501026287947902964113234773603320526292909696448948061116189891729766743355923677112945033505688431618009663744;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_25_hpp__)*/