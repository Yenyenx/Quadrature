//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_36.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 36.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_36_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_36_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_36(long double*& nodes, long double& weight) {
	weight 		= 0.08726646259971647884618453842443063567214359442708627280485957200855045573017247218411207848172547411061522462536895296241927346;

	nodes		= new long double[36];

	nodes[0] 	= 0.99904822158185776240371621940332975535049258494256290571729338630598084370614294729499111402628178292955448780057750757657340043;
	nodes[1] 	= 0.99144486137381041114455752692856287127773827444810227145877460352892206840508253176326543345327739735737867993502493944915599907;
	nodes[2] 	= 0.97629600711993336597088648960542757716533548912850906316532868057097278823766538264439961773384751074809955161082574980479318283;
	nodes[3] 	= 0.95371695074822692114384706460025743615169905599386202632211886222189193578224019006994854847047609217595921199282649442688920187;
	nodes[4] 	= 0.92387953251128675612818318939678828682241662586364248611509773128053500750110235871483993485034459609796302578224788303086917758;
	nodes[5] 	= 0.88701083317822170105460988303751652084643703786558715205427000198383115392940060977696236842667320398787277744089028180431451695;
	nodes[6] 	= 0.84339144581288570127285680582757209373375856392840151231510315485428226141399638176690831517175292017167674042326579895004663189;
	nodes[7] 	= 0.79335334029123516457977696150129927662867592105191023422448078294540218227127872910059956585805247319221357878427644228834604483;
	nodes[8] 	= 0.737277336810124041384293394982316707478311862443799984528494660150032327294987991411223073152037623583849959176650007454150791;
	nodes[9] 	= 0.6755902076156602443483393536743541823082544562122708593899910979424460885908786539591988872242605349229471896751751449378078932;
	nodes[10] 	= 0.6087614290087206394160975428981640045163937119624752300249739679013760344449928395262516481109938502089543912735313835483999889;
	nodes[11] 	= 0.537299608346823831840785546267706768082666634671882801745879353974144030247789604984462023093539121104379111314835525549884535;
	nodes[12] 	= 0.4617486132350339305629306731356229872678259502706801039714140323318368134583533423105290909327426618251753764857419820266888654;
	nodes[13] 	= 0.3826834323650897717284599840303988667613445624856270414338006356275460339600896922370137853422835471484242886614935559007560102;
	nodes[14] 	= 0.3007057995042731216225471359310733948570810329162382037753375826285266996467867286852007305095869758251523619356506048669852897;
	nodes[15] 	= 0.2164396139381028797595536696179407286733871935500620417936242020718596084872521986587254753184384685921092528161764869727384109;
	nodes[16] 	= 0.1305261922200515915484062278954890101937407048117322518906169483351328252298236296142403689922921229057494469979714407425231327;
	nodes[17] 	= 0.0436193873653359997817530772099444271126784739371856397391668471295488925154042280100540532549202838161960370176244828542678851;
	nodes[18] 	= -0.0436193873653359997817530772099444271126784739371856397391668471295488925154042280100540532549202838161960370176244828542678851;
	nodes[19] 	= -0.1305261922200515915484062278954890101937407048117322518906169483351328252298236296142403689922921229057494469979714407425231327;
	nodes[20] 	= -0.2164396139381028797595536696179407286733871935500620417936242020718596084872521986587254753184384685921092528161764869727384109;
	nodes[21] 	= -0.3007057995042731216225471359310733948570810329162382037753375826285266996467867286852007305095869758251523619356506048669852897;
	nodes[22] 	= -0.3826834323650897717284599840303988667613445624856270414338006356275460339600896922370137853422835471484242886614935559007560102;
	nodes[23] 	= -0.4617486132350339305629306731356229872678259502706801039714140323318368134583533423105290909327426618251753764857419820266888654;
	nodes[24] 	= -0.537299608346823831840785546267706768082666634671882801745879353974144030247789604984462023093539121104379111314835525549884535;
	nodes[25] 	= -0.6087614290087206394160975428981640045163937119624752300249739679013760344449928395262516481109938502089543912735313835483999889;
	nodes[26] 	= -0.6755902076156602443483393536743541823082544562122708593899910979424460885908786539591988872242605349229471896751751449378078932;
	nodes[27] 	= -0.737277336810124041384293394982316707478311862443799984528494660150032327294987991411223073152037623583849959176650007454150791;
	nodes[28] 	= -0.7933533402912351645797769615012992766286759210519102342244807829454021822712787291005995658580524731922135787842764422883460448;
	nodes[29] 	= -0.8433914458128857012728568058275720937337585639284015123151031548542822614139963817669083151717529201716767404232657989500466319;
	nodes[30] 	= -0.8870108331782217010546098830375165208464370378655871520542700019838311539294006097769623684266732039878727774408902818043145169;
	nodes[31] 	= -0.9238795325112867561281831893967882868224166258636424861150977312805350075011023587148399348503445960979630257822478830308691776;
	nodes[32] 	= -0.9537169507482269211438470646002574361516990559938620263221188622218919357822401900699485484704760921759592119928264944268892019;
	nodes[33] 	= -0.9762960071199333659708864896054275771653354891285090631653286805709727882376653826443996177338475107480995516108257498047931828;
	nodes[34] 	= -0.99144486137381041114455752692856287127773827444810227145877460352892206840508253176326543345327739735737867993502493944915599907;
	nodes[35] 	= -0.99904822158185776240371621940332975535049258494256290571729338630598084370614294729499111402628178292955448780057750757657340043;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_36_hpp__)*/