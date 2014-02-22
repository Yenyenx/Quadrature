//
//        Gauss_Laguerre_Nodes_and_Weights_10.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 10.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_10_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_10_hpp__

void Gauss_Laguerre_Nodes_and_Weights_10(long double*& nodes, long double*& weights) {
	nodes	= new long double[10];
	weights	= new long double[10];

	nodes[0] 	= 0.13779347054049243083077250565271118810799168074578329416336651137344596447646208656254375241734116529355248965683739196203130605;
	weights[0] 	= 0.308441115765020141547470834677860695628728886538337442115557180200185562029325570030406854605797422692709124967333269311325976;

	nodes[1] 	= 0.72945454950317049816037312167607878107607273331224924600781104880626782307305157204652499178629631939583813469724208401283647042;
	weights[1] 	= 0.40111992915527355151578030991281951479548361696211301757496775516766091500023676907078271471115370136487330141071993586230177;

	nodes[2] 	= 1.8083429017403160482329200757506088332830602823714481516932097683732967664043428239153383606124012239270279810042946898231255533;
	weights[2] 	= 0.2180682876118094215886485234746467267427785384121889405665039813207866459828519234900012632360320998206316510456964215584149;

	nodes[3] 	= 3.4014336978548995144825322214083906792731566142034732294267661021823269228666946410395095870847780590663426380062014239602311845;
	weights[3] 	= 0.0620874560986777473929021293135179536959090656838020923686767603039238664629902769437184001766749562167627176007775000692659;

	nodes[4] 	= 5.5524961400638036324175584868687628579740642873178138284904788336252636084290435460571874259935064862774598817665863631336209552;
	weights[4] 	= 0.0095015169751811005538390721941719912258624504015797533646318970848680322451340750784240877901570876971156524042858250386085;

	nodes[5] 	= 8.3301527467644967002387671972745221827094389720309893447446294283573954320532476951665824491858289576075525949818506146692432342;
	weights[5] 	= 0.00075300838858753877545596435367566390179203914014362886506164014367761532732553587715637849496678837150424361526704126458678;

	nodes[6] 	= 11.843785837900065564918538919141613985802816909465335873339591495276220150697108232717212527603241705173109616546015446373017787;
	weights[6] 	= 0.000028259233495995655674225638268500212828033164744374677117086795259322508664275187881955981278223738401217175272290547273269;

	nodes[7] 	= 16.279257831378102099532653935833622335255995603033059077788392165002827350932597940225841507596519165747859331720868398463246006;
	weights[7] 	= 4.2493139849626863725865766597471235464810801986441570081254604829021791344429695503912683040809284918604347723905036055947e-7;

	nodes[8] 	= 21.996585811980761951277090195594493976806732340001887788241503511693106375798998823067686533346980361167369020416848451979346621;
	weights[8] 	= 1.8395648239796307809215352243559382479826127765906584095132767065586955845890346516805867002792829341205430551248512322204e-9;

	nodes[9] 	= 29.920697012273891559908793340799195179710670577517960166104251135309849605268452639201572864373106556343888311203255135623300882;
	weights[9] 	= 9.9118272196090085583775472832447360645810946112447692431304366686254543563865419652261172586997161662742217301111109553476e-13;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_10_hpp__)*/