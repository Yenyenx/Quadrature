//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_24.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:56.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 24.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_24_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_24_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_24(long double*& nodes, long double*& weights) {
	nodes	= new long double[24];
	weights	= new long double[24];

	nodes[0] 	= 0.9921147013144778310497930427857785214530367089687957358710212264108831122527153416153676677534539856462231650482872816915249201;
	weights[0] 	= 0.0019739782039461345240545127212553257826631602430172870872989326782598933275753180277953859761944095080630003813182340510939258255;

	nodes[1] 	= 0.9685831611286311194901683754647358138360124027538877506150849142789580463827283934026071067075112036418229259933769828173862137;
	weights[1] 	= 0.007771880505446598402634492756216518439894612878170434217832357411769043053549394781266184715478035247610883916189833444860829932;

	nodes[2] 	= 0.92977648588825140366094255622199072958715528248738001545928827680673886414198032679292888056688639004766469207354301619541916106;
	weights[2] 	= 0.01702940337970503389901587134202151414704185421679464712410146005754050016132967177674477403621306574315629562544476251161035602;

	nodes[3] 	= 0.87630668004386358730811590392206258339906423848214708669736123114547041331304155655100481630642416697035526120943589436700056929;
	weights[3] 	= 0.029164862617744263050478658373797238958315227336912741095297784992105925640774139036726185464581266845916304709396197368951400436;

	nodes[4] 	= 0.80901699437494742410229341718281905886015458990288143106772431135263023140945122485360360209469556874237704403769344587606331693;
	weights[4] 	= 0.04341574268454119899578421136596309810759668904904163342442500967673470075405928394018015855672409049847834567766882413706547738;

	nodes[5] 	= 0.72896862742141152314673031905525911137257166408684890531015408929752368679517103414063537487053355141463863029286507069393362834;
	weights[5] 	= 0.05888660837442831788378300628559863742112270466272344832160945215870880026475302129235058767740722883733087376800277147259571356;

	nodes[6] 	= 0.63742398974868971017671281167601619543491729778214606068004692893266578122287149156258792637764953148422420136510819140047560904;
	weights[6] 	= 0.07460536829824607417626324116532425957843832441728581128912312927917640654846257872773951564323286354041742317629708267288282698;

	nodes[7] 	= 0.53582679497899661827130876786763997806357534560897205276120953182863307222134046827546398598680666389183213440309866488161161556;
	weights[7] 	= 0.08958435496042584181565648262564085207192379317334850901521821325383588299525140561009195140916553828634933509639660483577764363;

	nodes[8] 	= 0.4257792915650726488625024457442517039799730418325583898770488739697242600801560839191314602158320524580455652655259587401500909;
	weights[8] 	= 0.1028823835401234501503632437151021190480733835606178388880048523045831143991335282971423684580207575179132626464174663780555549;

	nodes[9] 	= 0.3090169943749474241022934171828190588601545899028814310677243113526302314094512248536036020946955687423770440376934458760633169;
	weights[9] 	= 0.11366388999494846292734795779801204610226178091971365762432221993865611956025116599122158271038176290062905864799529119528921485;

	nodes[10] 	= 0.1873813145857246305425507344472914693386261517676418662594452200623867277753411651571410632076716802807251611884877246292591867;
	weights[10] 	= 0.12125143262273715823758491723219696720954246413423926670528343709712390699638489320878895495800804408899136714619356139401278974;

	nodes[11] 	= 0.0627905195293133760761782245656311331224848319066662727630407596318135267607829566774457142502180539982338330421755598968969408;
	weights[11] 	= 0.1251682582151557755526942504387471441824183552519111804512192992284598078700278489669610567301222039806808708369999471995777279;

	nodes[12] 	= -0.0627905195293133760761782245656311331224848319066662727630407596318135267607829566774457142502180539982338330421755598968969408;
	weights[12] 	= 0.1251682582151557755526942504387471441824183552519111804512192992284598078700278489669610567301222039806808708369999471995777279;

	nodes[13] 	= -0.1873813145857246305425507344472914693386261517676418662594452200623867277753411651571410632076716802807251611884877246292591867;
	weights[13] 	= 0.12125143262273715823758491723219696720954246413423926670528343709712390699638489320878895495800804408899136714619356139401278974;

	nodes[14] 	= -0.3090169943749474241022934171828190588601545899028814310677243113526302314094512248536036020946955687423770440376934458760633169;
	weights[14] 	= 0.11366388999494846292734795779801204610226178091971365762432221993865611956025116599122158271038176290062905864799529119528921485;

	nodes[15] 	= -0.4257792915650726488625024457442517039799730418325583898770488739697242600801560839191314602158320524580455652655259587401500909;
	weights[15] 	= 0.1028823835401234501503632437151021190480733835606178388880048523045831143991335282971423684580207575179132626464174663780555549;

	nodes[16] 	= -0.5358267949789966182713087678676399780635753456089720527612095318286330722213404682754639859868066638918321344030986648816116156;
	weights[16] 	= 0.08958435496042584181565648262564085207192379317334850901521821325383588299525140561009195140916553828634933509639660483577764363;

	nodes[17] 	= -0.637423989748689710176712811676016195434917297782146060680046928932665781222871491562587926377649531484224201365108191400475609;
	weights[17] 	= 0.07460536829824607417626324116532425957843832441728581128912312927917640654846257872773951564323286354041742317629708267288282698;

	nodes[18] 	= -0.7289686274214115231467303190552591113725716640868489053101540892975236867951710341406353748705335514146386302928650706939336283;
	weights[18] 	= 0.05888660837442831788378300628559863742112270466272344832160945215870880026475302129235058767740722883733087376800277147259571356;

	nodes[19] 	= -0.8090169943749474241022934171828190588601545899028814310677243113526302314094512248536036020946955687423770440376934458760633169;
	weights[19] 	= 0.04341574268454119899578421136596309810759668904904163342442500967673470075405928394018015855672409049847834567766882413706547738;

	nodes[20] 	= -0.8763066800438635873081159039220625833990642384821470866973612311454704133130415565510048163064241669703552612094358943670005693;
	weights[20] 	= 0.02916486261774426305047865837379723895831522733691274109529778499210592564077413903672618546458126684591630470939619736895140044;

	nodes[21] 	= -0.9297764858882514036609425562219907295871552824873800154592882768067388641419803267929288805668863900476646920735430161954191611;
	weights[21] 	= 0.01702940337970503389901587134202151414704185421679464712410146005754050016132967177674477403621306574315629562544476251161035602;

	nodes[22] 	= -0.9685831611286311194901683754647358138360124027538877506150849142789580463827283934026071067075112036418229259933769828173862137;
	weights[22] 	= 0.00777188050544659840263449275621651843989461287817043421783235741176904305354939478126618471547803524761088391618983344486082993;

	nodes[23] 	= -0.9921147013144778310497930427857785214530367089687957358710212264108831122527153416153676677534539856462231650482872816915249201;
	weights[23] 	= 0.001973978203946134524054512721255325782663160243017287087298932678259893327575318027795385976194409508063000381318234051093925826;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_24_hpp__)*/