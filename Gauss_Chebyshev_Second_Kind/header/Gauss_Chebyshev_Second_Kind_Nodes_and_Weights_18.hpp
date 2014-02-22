//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_18.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:56.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 18.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_18_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_18_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_18(long double*& nodes, long double*& weights) {
	nodes	= new long double[18];
	weights	= new long double[18];

	nodes[0] 	= 0.9863613034027223736025091948190671107284815032028763167436651350634540664943196016284779970741455081297041729749817245056949248;
	weights[0] 	= 0.004479477774329407669500691844930662537317695510337420318707449830859859350749148792523351146681246301426757089929870885722849133;

	nodes[1] 	= 0.94581724170063467901966571428494152782381188844070347935981327839437085793279254170328428079170486101874231989828375909561158598;
	weights[1] 	= 0.017432490174209892258450174332261289699209054675939602453290064207557303444477844062693622279700454883875526835233020222289350934;

	nodes[2] 	= 0.8794737512064890713908547548818411172078898894444439895027007572814167111568517036887170954706874853842684479232581665343546205;
	weights[2] 	= 0.03745537731941864128653194611507721362996570872890383751733752971159221177108570993865629920029852598585697884135520975873462042;

	nodes[3] 	= 0.78914050939639359921898114939909074243268634587104177837894839267493407785940067932519110834499975609950436952780727542483656196;
	weights[3] 	= 0.06237834870066702566324657472985367911835875837035210928167323495676451467827071753055419887569926631221002524247298653625504568;

	nodes[4] 	= 0.67728157162574107476215098449562571841551974620013585665757007535844676819668929845066677014357254177870730005239958561106576683;
	weights[4] 	= 0.0895006136490506848367828251912997602825587990480753650270647266998726420929520274171834534392464648642566276827146401897956094;

	nodes[5] 	= 0.54694815812242687471176274669618849977888549853364724008487061095159839177358770592384609553028271619187099478124676560010280311;
	weights[5] 	= 0.11588305391211037911085922048064586061400480540874390706387462981743787153836560957852572850694887110753371688953989032344652575;

	nodes[6] 	= 0.401695424652969457516841659742617152256735518996720006583244365525180275807731330785795540061414149060706513262302461946759079;
	weights[6] 	= 0.13866672272160449358147250602660627563665209936991146427085300136406413771560368654938322469760687053609318750608692031613031112;

	nodes[7] 	= 0.2454854871407991489222909177963705562718265593382878525640759656576384813122894070623714176484102875513581007640639081889782665;
	weights[7] 	= 0.15538265603697781218252393369466637095207780460332324843779241045603775225750090567450198826965397430930209459469185305645492053;

	nodes[8] 	= 0.0825793454723323246003439342374402276985836343395041809005279144500439872224783994610354995655779365080893507584597697116548264;
	weights[8] 	= 0.16421942310907997302629297340453460857914762412818950087314310103276780872254660011298683991969359269498210694629618537294422818;

	nodes[9] 	= -0.0825793454723323246003439342374402276985836343395041809005279144500439872224783994610354995655779365080893507584597697116548264;
	weights[9] 	= 0.16421942310907997302629297340453460857914762412818950087314310103276780872254660011298683991969359269498210694629618537294422818;

	nodes[10] 	= -0.2454854871407991489222909177963705562718265593382878525640759656576384813122894070623714176484102875513581007640639081889782665;
	weights[10] 	= 0.15538265603697781218252393369466637095207780460332324843779241045603775225750090567450198826965397430930209459469185305645492053;

	nodes[11] 	= -0.401695424652969457516841659742617152256735518996720006583244365525180275807731330785795540061414149060706513262302461946759079;
	weights[11] 	= 0.13866672272160449358147250602660627563665209936991146427085300136406413771560368654938322469760687053609318750608692031613031112;

	nodes[12] 	= -0.5469481581224268747117627466961884997788854985336472400848706109515983917735877059238460955302827161918709947812467656001028031;
	weights[12] 	= 0.11588305391211037911085922048064586061400480540874390706387462981743787153836560957852572850694887110753371688953989032344652575;

	nodes[13] 	= -0.6772815716257410747621509844956257184155197462001358566575700753584467681966892984506667701435725417787073000523995856110657668;
	weights[13] 	= 0.0895006136490506848367828251912997602825587990480753650270647266998726420929520274171834534392464648642566276827146401897956094;

	nodes[14] 	= -0.789140509396393599218981149399090742432686345871041778378948392674934077859400679325191108344999756099504369527807275424836562;
	weights[14] 	= 0.06237834870066702566324657472985367911835875837035210928167323495676451467827071753055419887569926631221002524247298653625504568;

	nodes[15] 	= -0.8794737512064890713908547548818411172078898894444439895027007572814167111568517036887170954706874853842684479232581665343546205;
	weights[15] 	= 0.03745537731941864128653194611507721362996570872890383751733752971159221177108570993865629920029852598585697884135520975873462042;

	nodes[16] 	= -0.94581724170063467901966571428494152782381188844070347935981327839437085793279254170328428079170486101874231989828375909561158598;
	weights[16] 	= 0.01743249017420989225845017433226128969920905467593960245329006420755730344447784406269362227970045488387552683523302022228935093;

	nodes[17] 	= -0.9863613034027223736025091948190671107284815032028763167436651350634540664943196016284779970741455081297041729749817245056949248;
	weights[17] 	= 0.00447947777432940766950069184493066253731769551033742031870744983085985935074914879252335114668124630142675708992987088572284913;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_18_hpp__)*/