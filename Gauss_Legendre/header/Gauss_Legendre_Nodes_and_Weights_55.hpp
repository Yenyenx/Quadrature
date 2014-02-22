//
//        Gauss_Legendre_Nodes_and_Weights_55.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 55.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_55_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_55_hpp__

void Gauss_Legendre_Nodes_and_Weights_55(long double*& nodes, long double*& weights) {
	nodes	= new long double[55];
	weights	= new long double[55];

	nodes[0] 	= 0;
	weights[0] 	= 0.056602976444560425440105761981244004038969150101599458894974395411768984044832969494120128768108370252862623466339167415842319748;

	nodes[1] 	= -0.056572753818336776327337610893108434162675742452312183663194467925877666352879306345258083970503442691690453051582529660336598011;
	weights[1] 	= 0.0565123182497720014006583676351890541396881831582519156240435957656167734641828150815510166699803176856075200565201689061887114;

	nodes[2] 	= 0.056572753818336776327337610893108434162675742452312183663194467925877666352879306345258083970503442691690453051582529660336598011;
	weights[2] 	= 0.0565123182497720014006583676351890541396881831582519156240435957656167734641828150815510166699803176856075200565201689061887114;

	nodes[3] 	= -0.11296428805932926658843792388871218401203889300933300714882753426208209387575565259620964915229109195545284747422411947247416966;
	weights[3] 	= 0.05624063407108436802827908809019782727606125971386301467351620853765777444280734761403812032683923564784641688082278548463646;

	nodes[4] 	= 0.11296428805932926658843792388871218401203889300933300714882753426208209387575565259620964915229109195545284747422411947247416966;
	weights[4] 	= 0.05624063407108436802827908809019782727606125971386301467351620853765777444280734761403812032683923564784641688082278548463646;

	nodes[5] 	= -0.16899396364687320828284249351170222934589352957387611076497583891531702808101097161420301748299846146733385447208371056725478004;
	weights[5] 	= 0.0557887941952840871029360071099197146724675353885833223564795450397710852524881413140276517052862261508074251137582497003891;

	nodes[6] 	= 0.16899396364687320828284249351170222934589352957387611076497583891531702808101097161420301748299846146733385447208371056725478004;
	weights[6] 	= 0.0557887941952840871029360071099197146724675353885833223564795450397710852524881413140276517052862261508074251137582497003891;

	nodes[7] 	= -0.22448230064784548340018906240292645440811700470895206033766419252733561361257209671156075530845712318950594455851865479723255919;
	weights[7] 	= 0.05515824600250868759665113956066672143253063739720572710871928797674335380896701079393758527695864382545768296405168920357;

	nodes[8] 	= 0.22448230064784548340018906240292645440811700470895206033766419252733561361257209671156075530845712318950594455851865479723255919;
	weights[8] 	= 0.05515824600250868759665113956066672143253063739720572710871928797674335380896701079393758527695864382545768296405168920357;

	nodes[9] 	= -0.2792515532008065385498624511756710255581859462829726346075454401391025047180762872657268857412102018178390962144900748171485607;
	weights[9] 	= 0.0543510093299111020703221181537721488058133091086900951281147575082009116871787532669127724870383638358107853846526694156;

	nodes[10] 	= 0.2792515532008065385498624511756710255581859462829726346075454401391025047180762872657268857412102018178390962144900748171485607;
	weights[10] 	= 0.0543510093299111020703221181537721488058133091086900951281147575082009116871787532669127724870383638358107853846526694156;

	nodes[11] 	= -0.33312627889002388518947149023296196304739826192271287443619991128011839829079378325470658286391087094093563957352867932782221939;
	weights[11] 	= 0.053369670001605472723570515636097853727000063146682858353640217485500717715287311588507570209100629975589928035768166911;

	nodes[12] 	= 0.33312627889002388518947149023296196304739826192271287443619991128011839829079378325470658286391087094093563957352867932782221939;
	weights[12] 	= 0.053369670001605472723570515636097853727000063146682858353640217485500717715287311588507570209100629975589928035768166911;

	nodes[13] 	= -0.38593390074097942975584854391258997545040708651574305567102667221395890515914112659297139977110361980098188290325620524007509545;
	weights[13] 	= 0.0522173715456320845643935632812950099667420858053508794803154927326986552369742676873948703593698559587118867408909351;

	nodes[14] 	= 0.38593390074097942975584854391258997545040708651574305567102667221395890515914112659297139977110361980098188290325620524007509545;
	weights[14] 	= 0.0522173715456320845643935632812950099667420858053508794803154927326986552369742676873948703593698559587118867408909351;

	nodes[15] 	= -0.43750526003717459180848102429746658424251628922059254465859417014954992769317777346116587659987627310055266645483623709985626902;
	weights[15] 	= 0.050897805124493979224775274288083438821685540914671073776692944678702649848109203234944607779506594790659419736298471;

	nodes[16] 	= 0.43750526003717459180848102429746658424251628922059254465859417014954992769317777346116587659987627310055266645483623709985626902;
	weights[16] 	= 0.050897805124493979224775274288083438821685540914671073776692944678702649848109203234944607779506594790659419736298471;

	nodes[17] 	= -0.48767515818747409720826367353935561150755401956934886424625183542085727865948397498480965633769938348352206159107839477919976144;
	weights[17] 	= 0.04941519771155173948075853901603927568188155532831528744410563292139028974955082127921754423190285019960966853530113;

	nodes[18] 	= 0.48767515818747409720826367353935561150755401956934886424625183542085727865948397498480965633769938348352206159107839477919976144;
	weights[18] 	= 0.04941519771155173948075853901603927568188155532831528744410563292139028974955082127921754423190285019960966853530113;

	nodes[19] 	= -0.53628288590834329672059957284359755353827560883874391501459076023558292027983996857812927169627349795559174107102419646013030163;
	weights[19] 	= 0.0477742985512006955500367147160559256338183071442882367978224811298264210845814002798431435170261673993178061498364;

	nodes[20] 	= 0.53628288590834329672059957284359755353827560883874391501459076023558292027983996857812927169627349795559174107102419646013030163;
	weights[20] 	= 0.0477742985512006955500367147160559256338183071442882367978224811298264210845814002798431435170261673993178061498364;

	nodes[21] 	= -0.58317273802603210297430481558768648622186113625478567390508218002596038336934899802500723286367348982926335775048828524720324561;
	weights[21] 	= 0.045980363946283838103904860872074668122111154090862040501938219025109696501943379782344167174668110695615158469341;

	nodes[22] 	= 0.58317273802603210297430481558768648622186113625478567390508218002596038336934899802500723286367348982926335775048828524720324561;
	weights[22] 	= 0.045980363946283838103904860872074668122111154090862040501938219025109696501943379782344167174668110695615158469341;

	nodes[23] 	= -0.62819451224992814009063621503297543291101030900675796842423359565602656846057601206902739304678912885205825963364768201392033335;
	weights[23] 	= 0.04403914042160658989516808565329287313462904494529047512893953712297577790636604486173824680629124971603657727679;

	nodes[24] 	= 0.62819451224992814009063621503297543291101030900675796842423359565602656846057601206902739304678912885205825963364768201392033335;
	weights[24] 	= 0.04403914042160658989516808565329287313462904494529047512893953712297577790636604486173824680629124971603657727679;

	nodes[25] 	= -0.67120399031982639579632672800601560057392727743661060691426406577182052386982755504245518944767418113380524714252151824353122744;
	weights[25] 	= 0.04195684631771876239520731669214412257656635822077835229273424789883446716921324477130759698383571747770664224005;

	nodes[26] 	= 0.67120399031982639579632672800601560057392727743661060691426406577182052386982755504245518944767418113380524714252151824353122744;
	weights[26] 	= 0.04195684631771876239520731669214412257656635822077835229273424789883446716921324477130759698383571747770664224005;

	nodes[27] 	= -0.71206339998663783890935019212116751517265372314517351367372163423973441274755444890356567192219200098295673826626629751116264869;
	weights[27] 	= 0.0397401518743371796094638319033998358680268513816859788079298903387979262340246437162605348610141824226289955232;

	nodes[28] 	= 0.71206339998663783890935019212116751517265372314517351367372163423973441274755444890356567192219200098295673826626629751116264869;
	weights[28] 	= 0.0397401518743371796094638319033998358680268513816859788079298903387979262340246437162605348610141824226289955232;

	nodes[29] 	= -0.75064185634802190867498768270731091792206346446225753536923534550514572074068012096005497378452679919472085246442377238891967306;
	weights[29] 	= 0.037396157867965545282915598582457549515103401503920990974026624848172021153751477832230950626776329738870761392;

	nodes[30] 	= 0.75064185634802190867498768270731091792206346446225753536923534550514572074068012096005497378452679919472085246442377238891967306;
	weights[30] 	= 0.037396157867965545282915598582457549515103401503920990974026624848172021153751477832230950626776329738870761392;

	nodes[31] 	= -0.78681578112762236589763625093804138350909114627225052948856446958751040375374058961960122639087070537043292597289274906457382101;
	weights[31] 	= 0.03493237287358988740726822680270648797428746128966276201367537046896181129944027509701790591978311091716312318;

	nodes[32] 	= 0.78681578112762236589763625093804138350909114627225052948856446958751040375374058961960122639087070537043292597289274906457382101;
	weights[32] 	= 0.03493237287358988740726822680270648797428746128966276201367537046896181129944027509701790591978311091716312318;

	nodes[33] 	= -0.82046929855932091245424128503472236539296748010513060622931702238491168268152321625744148427008878362842377472513058196680016107;
	weights[33] 	= 0.03235668922618583168470559187577686575766839503119350412479536583413782687329414586479903381842035018392272805;

	nodes[34] 	= 0.82046929855932091245424128503472236539296748010513060622931702238491168268152321625744148427008878362842377472513058196680016107;
	weights[34] 	= 0.03235668922618583168470559187577686575766839503119350412479536583413782687329414586479903381842035018392272805;

	nodes[35] 	= -0.85149460661715447146024532096700702781646398940273240154448964704937929609546435155465299199547970321756073530750385923939840347;
	weights[35] 	= 0.0296773577651610412212965061868853602298586405943297350743064074989486916566343048033493473209844928732186699;

	nodes[36] 	= 0.85149460661715447146024532096700702781646398940273240154448964704937929609546435155465299199547970321756073530750385923939840347;
	weights[36] 	= 0.0296773577651610412212965061868853602298586405943297350743064074989486916566343048033493473209844928732186699;

	nodes[37] 	= -0.87979232241989550606759090682408639529991362162573447659997225300922778502272953335981369837561675471500674923582812673373962449;
	weights[37] 	= 0.0269029614563962706671200286537790971433766611326800207354251174768952772722473586989653199151199621752457681;

	nodes[38] 	= 0.87979232241989550606759090682408639529991362162573447659997225300922778502272953335981369837561675471500674923582812673373962449;
	weights[38] 	= 0.0269029614563962706671200286537790971433766611326800207354251174768952772722473586989653199151199621752457681;

	nodes[39] 	= -0.90527180074400002578191142462962439222760858847029059313551795827534993181667791818905066546447794451581575187689348564025375513;
	weights[39] 	= 0.0240423880097256220077915729286034584992461505618308090927745505066101710631049396262751215460917209772807484;

	nodes[40] 	= 0.90527180074400002578191142462962439222760858847029059313551795827534993181667791818905066546447794451581575187689348564025375513;
	weights[40] 	= 0.0240423880097256220077915729286034584992461505618308090927745505066101710631049396262751215460917209772807484;

	nodes[41] 	= -0.92785142472079169681627126923258637919449928056960118396670993693793555537982109716736485010713649305822122232045463736961428291;
	weights[41] 	= 0.021104801668016454120209305623698334480934374061917051418172642630517410927503172221663575041582038169042706;

	nodes[42] 	= 0.92785142472079169681627126923258637919449928056960118396670993693793555537982109716736485010713649305822122232045463736961428291;
	weights[42] 	= 0.021104801668016454120209305623698334480934374061917051418172642630517410927503172221663575041582038169042706;

	nodes[43] 	= -0.94745886804121074185997984764529183717518632629724078716372608551518165859034699326922194251080629315802543925289186852643461964;
	weights[43] 	= 0.018099614520729062407968202643412230402778494537552972132224896796669116677150715639245527560534129716006151;

	nodes[44] 	= 0.94745886804121074185997984764529183717518632629724078716372608551518165859034699326922194251080629315802543925289186852643461964;
	weights[44] 	= 0.018099614520729062407968202643412230402778494537552972132224896796669116677150715639245527560534129716006151;

	nodes[45] 	= -0.96403132859313519877853663137736922263748967416412665607029527219191933582845721566385491845773869088203484690285256097426895153;
	weights[45] 	= 0.015036458333511788213150898901937281711822249499535817582157702574141261723086950160318069466693903179102509;

	nodes[46] 	= 0.96403132859313519877853663137736922263748967416412665607029527219191933582845721566385491845773869088203484690285256097426895153;
	weights[46] 	= 0.015036458333511788213150898901937281711822249499535817582157702574141261723086950160318069466693903179102509;

	nodes[47] 	= -0.97751573550398920885921660634073021154213546275556980088769188940036535061159749469417688160960746927324278565650750918269742511;
	weights[47] 	= 0.011925160719848612170752553157589888292640347447988949214417422706364316009843423985118862892221654520072629;

	nodes[48] 	= 0.97751573550398920885921660634073021154213546275556980088769188940036535061159749469417688160960746927324278565650750918269742511;
	weights[48] 	= 0.011925160719848612170752553157589888292640347447988949214417422706364316009843423985118862892221654520072629;

	nodes[49] 	= -0.98786894119888919852238568447347353064860155505648642992582879630755757962101663705323357851973593688868336078779033736895203198;
	weights[49] 	= 0.008775746107058528177389600683317838164456440760695935196171991323666988781625127047773969476706739005419404;

	nodes[50] 	= 0.98786894119888919852238568447347353064860155505648642992582879630755757962101663705323357851973593688868336078779033736895203198;
	weights[50] 	= 0.008775746107058528177389600683317838164456440760695935196171991323666988781625127047773969476706739005419404;

	nodes[51] 	= -0.99505797784741187504318911650620237159410074640539224998635006041353797930031461814839543959635441562620955199282329828978353924;
	weights[51] 	= 0.0055986322665607673540834168718598572451512952416667599970618743370212348836615028432017475417801098170871469;

	nodes[52] 	= 0.99505797784741187504318911650620237159410074640539224998635006041353797930031461814839543959635441562620955199282329828978353924;
	weights[52] 	= 0.0055986322665607673540834168718598572451512952416667599970618743370212348836615028432017475417801098170871469;

	nodes[53] 	= -0.99906141956481854147943183951938442315554127892942015733240168471097250567022553332708197613309414076840819153404202631345082744;
	weights[53] 	= 0.00240832361997978881917019348912527870416962754170570552231077713018287955456573616095507610043312781973042905;

	nodes[54] 	= 0.99906141956481854147943183951938442315554127892942015733240168471097250567022553332708197613309414076840819153404202631345082744;
	weights[54] 	= 0.00240832361997978881917019348912527870416962754170570552231077713018287955456573616095507610043312781973042905;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_55_hpp__)*/