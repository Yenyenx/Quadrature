//
//        Gauss_Legendre_Nodes_and_Weights_79.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 79.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_79_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_79_hpp__

void Gauss_Legendre_Nodes_and_Weights_79(long double*& nodes, long double*& weights) {
	nodes	= new long double[79];
	weights	= new long double[79];

	nodes[0] 	= 0;
	weights[0] 	= 0.039516107256271311709156539126926345362217880722253530089151261897848652111276204388015094976500525299174053092947014160083295565;

	nodes[1] 	= -0.039505823435974064058994796242793694744938372685386938508273242744249894158628263238808013319050321143330563162195925610029646901;
	weights[1] 	= 0.0394852574012911647537216672689312074151418397911176918203516773625394383053583713063697518030478888282363900132549962020181896;

	nodes[2] 	= 0.039505823435974064058994796242793694744938372685386938508273242744249894158628263238808013319050321143330563162195925610029646901;
	weights[2] 	= 0.0394852574012911647537216672689312074151418397911176918203516773625394383053583713063697518030478888282363900132549962020181896;

	nodes[3] 	= -0.078949963218954405448085252955527820682245479927715385218105688276934746310979500379494329155775102228572212233684836152105936329;
	weights[3] 	= 0.03939275600474300393426420210067028847081225776911277740932119129444878885458564841816652627104980555557121527811002308825381;

	nodes[4] 	= 0.078949963218954405448085252955527820682245479927715385218105688276934746310979500379494329155775102228572212233684836152105936329;
	weights[4] 	= 0.03939275600474300393426420210067028847081225776911277740932119129444878885458564841816652627104980555557121527811002308825381;

	nodes[5] 	= -0.11827083200766088116691205723352291372309393477342266535394471402591158220692284496187336452921289654245587314255470498402490825;
	weights[5] 	= 0.0392387474965946435549188629907870602438080201467363143650577129737285048304475870219707315774177456038454971226051219156113;

	nodes[6] 	= 0.11827083200766088116691205723352291372309393477342266535394471402591158220692284496187336452921289654245587314255470498402490825;
	weights[6] 	= 0.0392387474965946435549188629907870602438080201467363143650577129737285048304475870219707315774177456038454971226051219156113;

	nodes[7] 	= -0.15740703493386160502822561338054192275455819195373939310502627503595464952008240295724671500207908514708807048177000793199587487;
	weights[7] 	= 0.03902347234287979602650501980934070417181043174535390255640182520009700906383628975992428350966189538748776096207041530175;

	nodes[8] 	= 0.15740703493386160502822561338054192275455819195373939310502627503595464952008240295724671500207908514708807048177000793199587487;
	weights[8] 	= 0.03902347234287979602650501980934070417181043174535390255640182520009700906383628975992428350966189538748776096207041530175;

	nodes[9] 	= -0.19629746546318464165919392876054240628265399515713043150324646423297937442570526435253381845629032552444591291987822837158693052;
	weights[9] 	= 0.0387472666702399670681853306601330188452642184617409951761993010291072309689350891371987839634219919359013632573128557917;

	nodes[10] 	= 0.19629746546318464165919392876054240628265399515713043150324646423297937442570526435253381845629032552444591291987822837158693052;
	weights[10] 	= 0.0387472666702399670681853306601330188452642184617409951761993010291072309689350891371987839634219919359013632573128557917;

	nodes[11] 	= -0.23488140080573191587724935891907376146608149766322866113786639593837545978946086300208461511630914160267132703623553361539930273;
	weights[11] 	= 0.038410561741104177405416593761470320716712056124780456116660868476845557434193892362502129802022067061961137896448193006;

	nodes[12] 	= 0.23488140080573191587724935891907376146608149766322866113786639593837545978946086300208461511630914160267132703623553361539930273;
	weights[12] 	= 0.038410561741104177405416593761470320716712056124780456116660868476845557434193892362502129802022067061961137896448193006;

	nodes[13] 	= -0.27309859672752354374253606788872464379037546936805656075398572965286120909146580164466859619306601801193772423644672878183408761;
	weights[13] 	= 0.0380138832803260495455175068056943762873746953251462410989793142755156623492906613982219790565658379994571076690295153;

	nodes[14] 	= 0.27309859672752354374253606788872464379037546936805656075398572965286120909146580164466859619306601801193772423644672878183408761;
	weights[14] 	= 0.0380138832803260495455175068056943762873746953251462410989793142755156623492906613982219790565658379994571076690295153;

	nodes[15] 	= -0.3108893816147364372088749572513124825717521215076413238075358472523894820232108610410842015674507557228721493899699065660934039;
	weights[15] 	= 0.037557850654329770477906992570350082925859057121581728607769292121067586991325657121050374842519047685322532121779681;

	nodes[16] 	= 0.3108893816147364372088749572513124825717521215076413238075358472523894820232108610410842015674507557228721493899699065660934039;
	weights[16] 	= 0.037557850654329770477906992570350082925859057121581728607769292121067586991325657121050374842519047685322532121779681;

	nodes[17] 	= -0.34819474964386786723913737213171282465901513469048892699384391741948042270868899378626932200687704088964792790594445884566157833;
	weights[17] 	= 0.03704317590404678415983785562173285340021134244285893872658498308301198531655170738419135358101882954773992160938664;

	nodes[18] 	= 0.34819474964386786723913737213171282465901513469048892699384391741948042270868899378626932200687704088964792790594445884566157833;
	weights[18] 	= 0.03704317590404678415983785562173285340021134244285893872658498308301198531655170738419135358101882954773992160938664;

	nodes[19] 	= -0.38495645291235088392224683784747122983408977497169973552879550130057874869272025113237123643562576628777867592741730694639257449;
	weights[19] 	= 0.0364706626331534275292564856465736649122276458032780981091560197101120940269670686819047753581674925732642209771102;

	nodes[20] 	= 0.38495645291235088392224683784747122983408977497169973552879550130057874869272025113237123643562576628777867592741730694639257449;
	weights[20] 	= 0.0364706626331534275292564856465736649122276458032780981091560197101120940269670686819047753581674925732642209771102;

	nodes[21] 	= -0.4211170923857719287321457600263091023295799730623191420284897734730262861196568016644926716827010974119294104311207476589936012;
	weights[21] 	= 0.03584120475334575228920692534087787328312319930537420325431621073325509360536901484626005249920254630055958957959;

	nodes[22] 	= 0.4211170923857719287321457600263091023295799730623191420284897734730262861196568016644926716827010974119294104311207476589936012;
	weights[22] 	= 0.03584120475334575228920692534087787328312319930537420325431621073325509360536901484626005249920254630055958957959;

	nodes[23] 	= -0.45662020751968913114870973423194860779770505353040792232239571670583830318661079546212397183524554872267975060456691938796526032;
	weights[23] 	= 0.0351557850886111311282506986715428737934780854321102098944165783574043096871691025405237994083051981718952915876;

	nodes[24] 	= 0.45662020751968913114870973423194860779770505353040792232239571670583830318661079546212397183524554872267975060456691938796526032;
	weights[24] 	= 0.0351557850886111311282506986715428737934780854321102098944165783574043096871691025405237994083051981718952915876;

	nodes[25] 	= -0.49141036441611982109586085419664792517951826959595446810675270171768977353946702109389360218270209395112124270649357894037780479;
	weights[25] 	= 0.03441547384067660088259150359197273658598565245042897448213739858370275209965103223106228281803810298790946183;

	nodes[26] 	= 0.49141036441611982109586085419664792517951826959595446810675270171768977353946702109389360218270209395112124270649357894037780479;
	weights[26] 	= 0.03441547384067660088259150359197273658598565245042897448213739858370275209965103223106228281803810298790946183;

	nodes[27] 	= -0.52543324237705454789626763873535496769446908789066070741970170884453243010713740201362028788734856643822830075698107659082331148;
	weights[27] 	= 0.03362142691803093004992268353667508404681662693416144017862910947027989156613140506977864521134718053588701715;

	nodes[28] 	= 0.52543324237705454789626763873535496769446908789066070741970170884453243010713740201362028788734856643822830075698107659082331148;
	weights[28] 	= 0.03362142691803093004992268353667508404681662693416144017862910947027989156613140506977864521134718053588701715;

	nodes[29] 	= -0.55863571871985890665585310529238973321402610128493536555683467098461258784370966176565845563641815052976380007109072355192554634;
	weights[29] 	= 0.0327748841311308178534215033030628899083555286945624680015523168167528355379373123708841645624436397049244275;

	nodes[30] 	= 0.55863571871985890665585310529238973321402610128493536555683467098461258784370966176565845563641815052976380007109072355192554634;
	weights[30] 	= 0.0327748841311308178534215033030628899083555286945624680015523168167528355379373123708841645624436397049244275;

	nodes[31] 	= -0.59096595172213998285328161198868667031633431602307467192304109087921606251477184719951226253622352000428895365441041032093910094;
	weights[31] 	= 0.031877167256611170360518963293731745401029615640855796726391707676375798102465049887140821732761560989106816;

	nodes[32] 	= 0.59096595172213998285328161198868667031633431602307467192304109087921606251477184719951226253622352000428895365441041032093910094;
	weights[32] 	= 0.031877167256611170360518963293731745401029615640855796726391707676375798102465049887140821732761560989106816;

	nodes[33] 	= -0.62237346156657723888290970224057165218070614105865501454772817632730130834179415105164320001503074696546989459209711325125691303;
	weights[33] 	= 0.0309296779735248352882938968193055503146604082156631677139517615050414288851948690740987116168339209237687;

	nodes[34] 	= 0.62237346156657723888290970224057165218070614105865501454772817632730130834179415105164320001503074696546989459209711325125691303;
	weights[34] 	= 0.0309296779735248352882938968193055503146604082156631677139517615050414288851948690740987116168339209237687;

	nodes[35] 	= -0.65280920915934399852489312814724795711658260985206156188981949454130838631166694085077011623482902163098927271423822693738048612;
	weights[35] 	= 0.02993389567483836289564873335961066979058248411321156865549605084893161113968356097571099264113342416118143;

	nodes[36] 	= 0.65280920915934399852489312814724795711658260985206156188981949454130838631166694085077011623482902163098927271423822693738048612;
	weights[36] 	= 0.02993389567483836289564873335961066979058248411321156865549605084893161113968356097571099264113342416118143;

	nodes[37] 	= -0.68222567269907105927762033176002150159519492637365349646249699048724104576249305613862094580822641407023088330757638517389409515;
	weights[37] 	= 0.0288913751576072667816365241266766508947305565124978216965086548900883039157527676007102265996062863611506;

	nodes[38] 	= 0.68222567269907105927762033176002150159519492637365349646249699048724104576249305613862094580822641407023088330757638517389409515;
	weights[38] 	= 0.0288913751576072667816365241266766508947305565124978216965086548900883039157527676007102265996062863611506;

	nodes[39] 	= -0.71057692187682416375820521986243914279715189766564212217461618671219144775539727704586513141740959755587512257319224772077653457;
	weights[39] 	= 0.027803744195447058944435639832740263276853530023959851034638652923366680588036704299398701794186300693686;

	nodes[40] 	= 0.71057692187682416375820521986243914279715189766564212217461618671219144775539727704586513141740959755587512257319224772077653457;
	weights[40] 	= 0.027803744195447058944435639832740263276853530023959851034638652923366680588036704299398701794186300693686;

	nodes[41] 	= -0.73781868959127820952532164677899176550133156246249523746929239872311440842005370955319389147987199151780617517700149137339941507;
	weights[41] 	= 0.02667270099710555653788342537563680002786653985594912190324425383019856520052054298474398433137017652633;

	nodes[42] 	= 0.73781868959127820952532164677899176550133156246249523746929239872311440842005370955319389147987199151780617517700149137339941507;
	weights[42] 	= 0.02667270099710555653788342537563680002786653985594912190324425383019856520052054298474398433137017652633;

	nodes[43] 	= -0.76390844106717010845832576169869758939798669408522128695450003591438504162793030148194211392315747428064952488790768052139341943;
	weights[43] 	= 0.0255000115551287739473395075121561875909525756542420691996930165676330825076975489803877706648930323307;

	nodes[44] 	= 0.76390844106717010845832576169869758939798669408522128695450003591438504162793030148194211392315747428064952488790768052139341943;
	weights[44] 	= 0.0255000115551287739473395075121561875909525756542420691996930165676330825076975489803877706648930323307;

	nodes[45] 	= -0.78880544026919776556502863438137271201021216171971546202897755553347714092122488015437336131282943560257987265629394206972719176;
	weights[45] 	= 0.024287506888799492639422275375642883172418522609992261539433736958562936691412662708962936724950928751;

	nodes[46] 	= 0.78880544026919776556502863438137271201021216171971546202897755553347714092122488015437336131282943560257987265629394206972719176;
	weights[46] 	= 0.024287506888799492639422275375642883172418522609992261539433736958562936691412662708962936724950928751;

	nodes[47] 	= -0.81247081350780677376480790746381294438283763373228723410808183499727989796458658138181937482841083587717181658699229856488212041;
	weights[47] 	= 0.023037080185719026276979193193097231087682921352326656306487744141520267901729817030454117697242418777;

	nodes[48] 	= 0.81247081350780677376480790746381294438283763373228723410808183499727989796458658138181937482841083587717181658699229856488212041;
	weights[48] 	= 0.023037080185719026276979193193097231087682921352326656306487744141520267901729817030454117697242418777;

	nodes[49] 	= -0.83486761013777788206731339986896457345698044128644471718698785467977133297197703326659397999820260172824463004647501568241588779;
	weights[49] 	= 0.021750683846608079768641969794581007246730223845752833518650615065941397128395337073597408752726141562;

	nodes[50] 	= 0.83486761013777788206731339986896457345698044128644471718698785467977133297197703326659397999820260172824463004647501568241588779;
	weights[50] 	= 0.021750683846608079768641969794581007246730223845752833518650615065941397128395337073597408752726141562;

	nodes[51] 	= -0.85596086025521937647327084680030113713030598278376022350850972535967420936208096686219186843817519049875200939665870063904921318;
	weights[51] 	= 0.02043032643814085987844337951079562918585011101795580301452207780346252874150855803140784785467303676;

	nodes[52] 	= 0.85596086025521937647327084680030113713030598278376022350850972535967420936208096686219186843817519049875200939665870063904921318;
	weights[52] 	= 0.02043032643814085987844337951079562918585011101795580301452207780346252874150855803140784785467303676;

	nodes[53] 	= -0.87571762930352947665951743498134919974290430049132270938798385915613844092124236204954773408858831743043867535853932678754356927;
	weights[53] 	= 0.01907806955893748858478396937108031100140998007689406235573292260467110353398900840986295685297643028;

	nodes[54] 	= 0.87571762930352947665951743498134919974290430049132270938798385915613844092124236204954773408858831743043867535853932678754356927;
	weights[54] 	= 0.01907806955893748858478396937108031100140998007689406235573292260467110353398900840986295685297643028;

	nodes[55] 	= -0.89410706950423510131042978795433180991663156128005787802389305109118051960878822039689896958487273260848161106751415559413381754;
	weights[55] 	= 0.0176960246243104178646630250667509019003052097074481820708129273818980456272453947505919970725812389;

	nodes[56] 	= 0.89410706950423510131042978795433180991663156128005787802389305109118051960878822039689896958487273260848161106751415559413381754;
	weights[56] 	= 0.0176960246243104178646630250667509019003052097074481820708129273818980456272453947505919970725812389;

	nodes[57] 	= -0.91110046803458080024500618896833278070746507043591601930434861843350981590335184621235615093818053912929959025114177081144191266;
	weights[57] 	= 0.0162863495761916820918372562137234120815802130993978354216238034090355547095683052100922205979324549;

	nodes[58] 	= 0.91110046803458080024500618896833278070746507043591601930434861843350981590335184621235615093818053912929959025114177081144191266;
	weights[58] 	= 0.0162863495761916820918372562137234120815802130993978354216238034090355547095683052100922205979324549;

	nodes[59] 	= -0.926671291880903873664522784006798092582699132120121078312334799600381349971803078270301463067657169650382188085672778051603599;
	weights[59] 	= 0.0148512455263500693185789509930927691994192230026040931389253174013069234147071253464054965090987622;

	nodes[60] 	= 0.926671291880903873664522784006798092582699132120121078312334799600381349971803078270301463067657169650382188085672778051603599;
	weights[60] 	= 0.0148512455263500693185789509930927691994192230026040931389253174013069234147071253464054965090987622;

	nodes[61] 	= -0.94079522930657725030001673678368797044172815447375933905613351059048858779013888828752763973839942618489228160680182709859662699;
	weights[61] 	= 0.0133929533448256761973089424655372914169582981233775731804257155365071237449700523835902990785096582;

	nodes[62] 	= 0.94079522930657725030001673678368797044172815447375933905613351059048858779013888828752763973839942618489228160680182709859662699;
	weights[62] 	= 0.0133929533448256761973089424655372914169582981233775731804257155365071237449700523835902990785096582;

	nodes[63] 	= -0.9534502278892691359632761544234093424842924353983612963081563744488733007722999746846571753519643496594417688219512343745765283;
	weights[63] 	= 0.011913750215116998699599873222671799351447293906909617604826751963722982324251086528583905838367553;

	nodes[64] 	= 0.9534502278892691359632761544234093424842924353983612963081563744488733007722999746846571753519643496594417688219512343745765283;
	weights[64] 	= 0.011913750215116998699599873222671799351447293906909617604826751963722982324251086528583905838367553;

	nodes[65] 	= -0.96461652911486478610744959086482814856916514598435108770198290776805701577458859081787804039583391259400175566331208394770639614;
	weights[65] 	= 0.010415946204513382579183469310391352635665312788279574396288950695170932646496828955007982087819187;

	nodes[66] 	= 0.96461652911486478610744959086482814856916514598435108770198290776805701577458859081787804039583391259400175566331208394770639614;
	weights[66] 	= 0.010415946204513382579183469310391352635665312788279574396288950695170932646496828955007982087819187;

	nodes[67] 	= -0.9742766995978071181788341895544941856889982466195401957257068358283635375929681888706262125456124208263235667895123707147970178;
	weights[67] 	= 0.00890188098265248625373979280548100558212480790353318615549434714428527461804410857990863895266029;

	nodes[68] 	= 0.9742766995978071181788341895544941856889982466195401957257068358283635375929681888706262125456124208263235667895123707147970178;
	weights[68] 	= 0.00890188098265248625373979280548100558212480790353318615549434714428527461804410857990863895266029;

	nodes[69] 	= -0.98241565925127893009858137762396370485616826708684399875015512788097160862848958786741449863890626492979713404605774701511686871;
	weights[69] 	= 0.007373921131330176830391183609961466390898995557181865631094973217334053460897310917806795158049949;

	nodes[70] 	= 0.98241565925127893009858137762396370485616826708684399875015512788097160862848958786741449863890626492979713404605774701511686871;
	weights[70] 	= 0.007373921131330176830391183609961466390898995557181865631094973217334053460897310917806795158049949;

	nodes[71] 	= -0.98902070768778433787475803755734115174913194223547279881542875690592060880748124795428316862042908421471702707817118243845816004;
	weights[71] 	= 0.005834459868763465589213486151675452839136517639265057645618029826147406794011341187856799005619616;

	nodes[72] 	= 0.98902070768778433787475803755734115174913194223547279881542875690592060880748124795428316862042908421471702707817118243845816004;
	weights[72] 	= 0.005834459868763465589213486151675452839136517639265057645618029826147406794011341187856799005619616;

	nodes[73] 	= -0.99408155478554262241115498928175025377839719895381326182413121239329454209538991052756895599973314670445450479538493288090193476;
	weights[73] 	= 0.0042859291131265312182188368322850554477434479207363240735837240796268780216811797567036732616565828;

	nodes[74] 	= 0.99408155478554262241115498928175025377839719895381326182413121239329454209538991052756895599973314670445450479538493288090193476;
	weights[74] 	= 0.0042859291131265312182188368322850554477434479207363240735837240796268780216811797567036732616565828;

	nodes[75] 	= -0.99759039433694143517685417900328194636933904868084712187335763123133951086733380817106817512213880116496655426402029541653972622;
	weights[75] 	= 0.0027309070657548559185333900490212622404926883977551175160924674119682387085129143756501616502672797;

	nodes[76] 	= 0.99759039433694143517685417900328194636933904868084712187335763123133951086733380817106817512213880116496655426402029541653972622;
	weights[76] 	= 0.0027309070657548559185333900490212622404926883977551175160924674119682387085129143756501616502672797;

	nodes[77] 	= -0.99954252847956984432415157595693683403675591763672990941925950290133936548686198477290214769304867425560928916160706802676644463;
	weights[77] 	= 0.00117393012995661302120221447107509423537092512473935465835236668040981489983998310730837177160423617;

	nodes[78] 	= 0.99954252847956984432415157595693683403675591763672990941925950290133936548686198477290214769304867425560928916160706802676644463;
	weights[78] 	= 0.00117393012995661302120221447107509423537092512473935465835236668040981489983998310730837177160423617;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_79_hpp__)*/