//
//        Gauss_Legendre_Nodes_and_Weights_98.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 98.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_98_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_98_hpp__

void Gauss_Legendre_Nodes_and_Weights_98(long double*& nodes, long double*& weights) {
	nodes	= new long double[98];
	weights	= new long double[98];

	nodes[0] 	= -0.015946289478309399287563567415446772238143406533048467881087401391612240099898621411875544176096846142217248674068373618043228697;
	weights[0] 	= 0.03188987535287646727794501055427781792665089118791121492220569418016231628814328375141632765471914270516782097334962907144759869;

	nodes[1] 	= 0.015946289478309399287563567415446772238143406533048467881087401391612240099898621411875544176096846142217248674068373618043228697;
	weights[1] 	= 0.03188987535287646727794501055427781792665089118791121492220569418016231628814328375141632765471914270516782097334962907144759869;

	nodes[2] 	= -0.047822648462549322962767688127250424990392226971436827604076357675577257364742381745046648119442908766753854131606879470985435825;
	weights[2] 	= 0.03185743815812401071309918884204871064277461546719233880226725387938083390444625984582853130174043245060989041491843261753214;

	nodes[3] 	= 0.047822648462549322962767688127250424990392226971436827604076357675577257364742381745046648119442908766753854131606879470985435825;
	weights[3] 	= 0.03185743815812401071309918884204871064277461546719233880226725387938083390444625984582853130174043245060989041491843261753214;

	nodes[4] 	= -0.07965036402800598821293362778525743798607237583225759800583117297011827636668867750383324144439869612263698500221328954766588808;
	weights[4] 	= 0.03179259676252863019831783838551174276959278328438151137760771317220807204492286394878734681369405219393215193235265392413033;

	nodes[5] 	= 0.07965036402800598821293362778525743798607237583225759800583117297011827636668867750383324144439869612263698500221328954766588808;
	weights[5] 	= 0.03179259676252863019831783838551174276959278328438151137760771317220807204492286394878734681369405219393215193235265392413033;

	nodes[6] 	= -0.11139706220655361799820808825672867187119507596324882303715253906468854332258478517418846371347231579072401068966414473290908399;
	weights[6] 	= 0.031695417120349251609074079347755866965328780357502357701788276610300163960709419404260482351022817982904402130538059262317;

	nodes[7] 	= 0.11139706220655361799820808825672867187119507596324882303715253906468854332258478517418846371347231579072401068966414473290908399;
	weights[7] 	= 0.031695417120349251609074079347755866965328780357502357701788276610300163960709419404260482351022817982904402130538059262317;

	nodes[8] 	= -0.14303045143794287516602998562552158460029661939809647784155490245464964893640922283181459441289355770507383354714356290915540346;
	weights[8] 	= 0.03156599807910805290145090754165424725671023471756629479496482298925879657460375976567164294305389580364404986429342246354;

	nodes[9] 	= 0.14303045143794287516602998562552158460029661939809647784155490245464964893640922283181459441289355770507383354714356290915540346;
	weights[9] 	= 0.03156599807910805290145090754165424725671023471756629479496482298925879657460375976567164294305389580364404986429342246354;

	nodes[10] 	= -0.17451835541557656787496740249522236963218528793936543806768172131892568495818893021838130175557957224226452542867550536209381035;
	weights[10] 	= 0.031404471279046561517488612064589614802756116114493946439038242396824059577014786631777922233670373293438227061881749839;

	nodes[11] 	= 0.17451835541557656787496740249522236963218528793936543806768172131892568495818893021838130175557957224226452542867550536209381035;
	weights[11] 	= 0.031404471279046561517488612064589614802756116114493946439038242396824059577014786631777922233670373293438227061881749839;

	nodes[12] 	= -0.20582874581505377030766454799645412092478401105212282616885626361502912555990094462204703555560442184718545311307665172018207793;
	weights[12] 	= 0.03121100101922626441684062733509795107750907964937466193330667823873717355463959536353886172443959096624675531266552056;

	nodes[13] 	= 0.20582874581505377030766454799645412092478401105212282616885626361502912555990094462204703555560442184718545311307665172018207793;
	weights[13] 	= 0.03121100101922626441684062733509795107750907964937466193330667823873717355463959536353886172443959096624675531266552056;

	nodes[14] 	= -0.23692977487219215099222778022777765733448120186794724522826085610511575945039597274882176013801319882969470257713240033199905273;
	weights[14] 	= 0.0309857840904099346310428655690205836134263205341013193185414866501815859550462448310916177858922004773837289653461779;

	nodes[15] 	= 0.23692977487219215099222778022777765733448120186794724522826085610511575945039597274882176013801319882969470257713240033199905273;
	weights[15] 	= 0.0309857840904099346310428655690205836134263205341013193185414866501815859550462448310916177858922004773837289653461779;

	nodes[16] 	= -0.26778980777739141373274692887774589521293910055656591234142175601979989194147288446210989695194725021447215656299363935170150093;
	weights[16] 	= 0.03072904957489366992001360608279640565783571941495783416080339762705246331712871408949797074606809526577995285343333;

	nodes[17] 	= 0.26778980777739141373274692887774589521293910055656591234142175601979989194147288446210989695194725021447215656299363935170150093;
	weights[17] 	= 0.03072904957489366992001360608279640565783571941495783416080339762705246331712871408949797074606809526577995285343333;

	nodes[18] 	= -0.29837745485338757715882810396493708832307629687649433226551212773491871255558010188195992761313282613653429235221772285810665988;
	weights[18] 	= 0.030441058613493258394907649467472499112222030376481423207013055777766851829300048753240386571754467035163101862123;

	nodes[19] 	= 0.29837745485338757715882810396493708832307629687649433226551212773491871255558010188195992761313282613653429235221772285810665988;
	weights[19] 	= 0.030441058613493258394907649467472499112222030376481423207013055777766851829300048753240386571754467035163101862123;

	nodes[20] 	= -0.32866160348366815881760888993298732401407529202135109445076257282408331949818211053042044423348628379507233519652059638406397666;
	weights[20] 	= 0.030122104139921898848530981485692687033905832099441523754357645901589270924308533256589742226359765014266283690378;

	nodes[21] 	= 0.32866160348366815881760888993298732401407529202135109445076257282408331949818211053042044423348628379507233519652059638406397666;
	weights[21] 	= 0.030122104139921898848530981485692687033905832099441523754357645901589270924308533256589742226359765014266283690378;

	nodes[22] 	= -0.35861144975907196524841670670904780153351476854907615064110400501727515029580315021079623349529836906807432409790787818849656981;
	weights[22] 	= 0.02977251058282947626617571592551804121360723790864621567572309835273533263785485470326298778493405948693658907659;

	nodes[23] 	= 0.35861144975907196524841670670904780153351476854907615064110400501727515029580315021079623349529836906807432409790787818849656981;
	weights[23] 	= 0.02977251058282947626617571592551804121360723790864621567572309835273533263785485470326298778493405948693658907659;

	nodes[24] 	= -0.38819652981038386372030425860145438340283486164797454043966621253327467138033716922504764630670676793116501764399234553281833329;
	weights[24] 	= 0.029392633535806492167763161544595821473318248737604713331615839131490826825895348021858751365419164828572019607;

	nodes[25] 	= 0.38819652981038386372030425860145438340283486164797454043966621253327467138033716922504764630670676793116501764399234553281833329;
	weights[25] 	= 0.029392633535806492167763161544595821473318248737604713331615839131490826825895348021858751365419164828572019607;

	nodes[26] 	= -0.41738675079505433418147037204997423734103161108353106706093498811840232345717058360422216341624732582734284924396854854687830143;
	weights[26] 	= 0.02898285939568834204744906174340032983741953284324329744775418156438458984006542153178851817742712475697984847;

	nodes[27] 	= 0.41738675079505433418147037204997423734103161108353106706093498811840232345717058360422216341624732582734284924396854854687830143;
	weights[27] 	= 0.02898285939568834204744906174340032983741953284324329744775418156438458984006542153178851817742712475697984847;

	nodes[28] 	= -0.44615242150652544859705695327322618961747560601364583903347335792357648045348191414117381253026869276573395212261819058926855977;
	weights[28] 	= 0.0285436049695278857034903905270917363061601483868357523660850323951144481443053910045068756800642332209139372;

	nodes[29] 	= 0.44615242150652544859705695327322618961747560601364583903347335792357648045348191414117381253026869276573395212261819058926855977;
	weights[29] 	= 0.0285436049695278857034903905270917363061601483868357523660850323951144481443053910045068756800642332209139372;

	nodes[30] 	= -0.4744642825750288441270225534663890651780903840685333002288154022899188944925276427895401677764624302244311656548000311203001586;
	weights[30] 	= 0.028075317050636138753245698411936684061068652480769848283199078195344908481775276942353642807834423079591972;

	nodes[31] 	= 0.4744642825750288441270225534663890651780903840685333002288154022899188944925276427895401677764624302244311656548000311203001586;
	weights[31] 	= 0.028075317050636138753245698411936684061068652480769848283199078195344908481775276942353642807834423079591972;

	nodes[32] 	= -0.50229353622913685982346242443755188456078046506727219511992081393198486439168596325502318461130446271490717812614397578671011709;
	weights[32] 	= 0.02757847196412239390009994726032944354876639295898142557465789899541042320755050196083432651821580623877195;

	nodes[33] 	= 0.50229353622913685982346242443755188456078046506727219511992081393198486439168596325502318461130446271490717812614397578671011709;
	weights[33] 	= 0.02757847196412239390009994726032944354876639295898142557465789899541042320755050196083432651821580623877195;

	nodes[34] 	= -0.52961187558779487624843565846384349443471918215099151431743943492164530748604892857314199491918383807851290203145432945619663108;
	weights[34] 	= 0.0270535750823961282776759150622401867666668024355766015121595964356910930644303748202919292684101214541913;

	nodes[35] 	= 0.52961187558779487624843565846384349443471918215099151431743943492164530748604892857314199491918383807851290203145432945619663108;
	weights[35] 	= 0.0270535750823961282776759150622401867666668024355766015121595964356910930644303748202919292684101214541913;

	nodes[36] 	= -0.5563915134530405864573975328382837590965845401955044310243534462787232252462180826385910510749286385837776524637005320777647514;
	weights[36] 	= 0.026501160311123639352487513082038484334523984507563561888914596948789920743439975505709322813155866256784;

	nodes[37] 	= 0.5563915134530405864573975328382837590965845401955044310243534462787232252462180826385910510749286385837776524637005320777647514;
	weights[37] 	= 0.026501160311123639352487513082038484334523984507563561888914596948789920743439975505709322813155866256784;

	nodes[38] 	= -0.58260521057412395965329615950879140322899758736445996315673642769556335922744168786571469015581408786606265697121029216763342517;
	weights[38] 	= 0.02592178954616244891846818034408277448046425251572350108654730835399051996394099216730742228426418313256;

	nodes[39] 	= 0.58260521057412395965329615950879140322899758736445996315673642769556335922744168786571469015581408786606265697121029216763342517;
	weights[39] 	= 0.02592178954616244891846818034408277448046425251572350108654730835399051996394099216730742228426418313256;

	nodes[40] 	= -0.60822630335427953351441693312073628657152257644428793330359279499651908733918167764549811669253315331699875736340058508769487797;
	weights[40] 	= 0.025316052102026097343146602977049732498890202490718720470332132082168106243661180190759439778194252423;

	nodes[41] 	= 0.60822630335427953351441693312073628657152257644428793330359279499651908733918167764549811669253315331699875736340058508769487797;
	weights[41] 	= 0.025316052102026097343146602977049732498890202490718720470332132082168106243661180190759439778194252423;

	nodes[42] 	= -0.6332287309719698618819564146141782682594995758137213311727003946454805085517657016160027086813358097150949154427764760487275421;
	weights[42] 	= 0.024684564112460996181979616262330424976278807636092170166954177200871118966651154640190645351537968635;

	nodes[43] 	= 0.6332287309719698618819564146141782682594995758137213311727003946454805085517657016160027086813358097150949154427764760487275421;
	weights[43] 	= 0.024684564112460996181979616262330424976278807636092170166954177200871118966651154640190645351537968635;

	nodes[44] 	= -0.65758706188901490516030519608608061202124566017811494883926662685912939950562547757504013560528569226201341787356392440624999478;
	weights[44] 	= 0.02402796790374549880324122665924172069412126016623883348881220334002983705171693234880876240753841838;

	nodes[45] 	= 0.65758706188901490516030519608608061202124566017811494883926662685912939950562547757504013560528569226201341787356392440624999478;
	weights[45] 	= 0.02402796790374549880324122665924172069412126016623883348881220334002983705171693234880876240753841838;

	nodes[46] 	= -0.68127651971864632079603878274628681776345167665543732121792596951365645860774407952388368468882196733263058702055821448931158739;
	weights[46] 	= 0.0233469313413492747126829405281667367204049962657027763353928605304980681826271851038794614521777109;

	nodes[47] 	= 0.68127651971864632079603878274628681776345167665543732121792596951365645860774407952388368468882196733263058702055821448931158739;
	weights[47] 	= 0.0233469313413492747126829405281667367204049962657027763353928605304980681826271851038794614521777109;

	nodes[48] 	= -0.70427300842717742365697674852131803052870594534048829367867607663187279295984827571598539359509660923581510288897485456236564307;
	weights[48] 	= 0.022642147150618433111263042729890859572539491551089541403310205871874253014410743444109022853368322;

	nodes[49] 	= 0.70427300842717742365697674852131803052870594534048829367867607663187279295984827571598539359509660923581510288897485456236564307;
	weights[49] 	= 0.022642147150618433111263042729890859572539491551089541403310205871874253014410743444109022853368322;

	nodes[50] 	= -0.72655313684365848091256983724218507884146121612063520492710357510781208212553401997376102830786008330542379120337335927026791584;
	weights[50] 	= 0.021914332212178650419019122463752025266964918651721764480199133291838682177918316161329042735814404;

	nodes[51] 	= 0.72655313684365848091256983724218507884146121612063520492710357510781208212553401997376102830786008330542379120337335927026791584;
	weights[51] 	= 0.021914332212178650419019122463752025266964918651721764480199133291838682177918316161329042735814404;

	nodes[52] 	= -0.74809424245259245064056664920918849892790840699835234024340266943987205394000815241893715421407743129448857140232579672087517901;
	weights[52] 	= 0.02116422683277485691128015847112215176233755269871231321739257876682806300632925025087497314224566;

	nodes[53] 	= 0.74809424245259245064056664920918849892790840699835234024340266943987205394000815241893715421407743129448857140232579672087517901;
	weights[53] 	= 0.02116422683277485691128015847112215176233755269871231321739257876682806300632925025087497314224566;

	nodes[54] 	= -0.768874414445517797116596242056560065791105414921354637492076549402053740693487573421763041823056833987822814704215988593982764;
	weights[54] 	= 0.02039259399229191457948378052586511873971391836121375882865494402301303453781749095370749745555609;

	nodes[55] 	= 0.768874414445517797116596242056560065791105414921354637492076549402053740693487573421763041823056833987822814704215988593982764;
	weights[55] 	= 0.02039259399229191457948378052586511873971391836121375882865494402301303453781749095370749745555609;

	nodes[56] 	= -0.78887251600802226670096673333604019928631443015078377846621004368621802786232377523723556849073322545656647897764890690211132864;
	weights[56] 	= 0.019600218567726330773237264589351074934143141256399344129412758814531101298191752907634657835122;

	nodes[57] 	= 0.78887251600802226670096673333604019928631443015078377846621004368621802786232377523723556849073322545656647897764890690211132864;
	weights[57] 	= 0.019600218567726330773237264589351074934143141256399344129412758814531101298191752907634657835122;

	nodes[58] 	= -0.80806820581953435129490725173563027548172929235143380548875641618059678859912225060305898392957676100846784310844327014888985772;
	weights[58] 	= 0.018787906534904686561486966165212012828168692723149266529303897195846099155177681355085527563208;

	nodes[59] 	= 0.80806820581953435129490725173563027548172929235143380548875641618059678859912225060305898392957676100846784310844327014888985772;
	weights[59] 	= 0.018787906534904686561486966165212012828168692723149266529303897195846099155177681355085527563208;

	nodes[60] 	= -0.82644195874404785510778528296337807985532579922546133018051350599194733994840836080484662562030393953307070426878431539857828407;
	weights[60] 	= 0.017956484148770628122442804471702336304628152261951205121262318629755688394792459951118820067844;

	nodes[61] 	= 0.82644195874404785510778528296337807985532579922546133018051350599194733994840836080484662562030393953307070426878431539857828407;
	weights[61] 	= 0.017956484148770628122442804471702336304628152261951205121262318629755688394792459951118820067844;

	nodes[62] 	= -0.84397508569077046728595623947230486720640246836435559883933446820545277814958995714826844983644058408896208672703222526777138702;
	weights[62] 	= 0.01710679710308990026235440892845539952184059198356643848844868045023417265196849298261562955747;

	nodes[63] 	= 0.84397508569077046728595623947230486720640246836435559883933446820545277814958995714826844983644058408896208672703222526777138702;
	weights[63] 	= 0.01710679710308990026235440892845539952184059198356643848844868045023417265196849298261562955747;

	nodes[64] 	= -0.86064975262455175315900723441226512349318277732135176010516397724621761424976750674214676830298363334553672558934519253622832496;
	weights[64] 	= 0.01623970967045369565272650493167243775191069040969236803073914906725850345646422068958176460513;

	nodes[65] 	= 0.86064975262455175315900723441226512349318277732135176010516397724621761424976750674214676830298363334553672558934519253622832496;
	weights[65] 	= 0.01623970967045369565272650493167243775191069040969236803073914906725850345646422068958176460513;

	nodes[66] 	= -0.87644899870684410511291508504674239167811836125551675138266242883077594644242572739710782933238929653347992025356894516380353189;
	weights[66] 	= 0.0153561038234977557684980062839143812795622869188414764314894656221421228072196481411429875135;

	nodes[67] 	= 0.87644899870684410511291508504674239167811836125551675138266242883077594644242572739710782933238929653347992025356894516380353189;
	weights[67] 	= 0.0153561038234977557684980062839143812795622869188414764314894656221421228072196481411429875135;

	nodes[68] 	= -0.89135675354889106643195699685875127323769016704838356327588083472306069218721352063215253669863272919686480601689426987110311652;
	weights[68] 	= 0.0144568783383044019775689108017987574569742783857159772514391249867875907481262371135926787902;

	nodes[69] 	= 0.89135675354889106643195699685875127323769016704838356327588083472306069218721352063215253669863272919686480601689426987110311652;
	weights[69] 	= 0.0144568783383044019775689108017987574569742783857159772514391249867875907481262371135926787902;

	nodes[70] 	= -0.90535785355983913595333302622075311789539558029492207379594180272452074028060868618607817070653904080365014182928089345762091094;
	weights[70] 	= 0.0135429478810294651436476062409750333189575737141294462534022736884401928435289819243603489122;

	nodes[71] 	= 0.90535785355983913595333302622075311789539558029492207379594180272452074028060868618607817070653904080365014182928089345762091094;
	weights[71] 	= 0.0135429478810294651436476062409750333189575737141294462534022736884401928435289819243603489122;

	nodes[72] 	= -0.91843805737356811719721365048939181678184836528748913693597743286936916607493351712382752905399111196651246842849293241944113813;
	weights[72] 	= 0.012615242078921952857781432458836257335839840540353890388979916441407968009685649174285283626;

	nodes[73] 	= 0.91843805737356811719721365048939181678184836528748913693597743286936916607493351712382752905399111196651246842849293241944113813;
	weights[73] 	= 0.012615242078921952857781432458836257335839840540353890388979916441407968009685649174285283626;

	nodes[74] 	= -0.93058406033930704212449517004260140556697316824899139623755130078839413405687267688320419338245398195847965726372753697873833379;
	weights[74] 	= 0.0116747045771381242874287672806583956745173455381915229121601656273586561358285062701959458;

	nodes[75] 	= 0.93058406033930704212449517004260140556697316824899139623755130078839413405687267688320419338245398195847965726372753697873833379;
	weights[75] 	= 0.0116747045771381242874287672806583956745173455381915229121601656273586561358285062701959458;

	nodes[76] 	= -0.9417835080627118210987962463304445900474706433526236480842213300537661945446909412783890912893743414824200763470739857672911891;
	weights[76] 	= 0.010722292083224317120244047700919632743554903875756503073005827767519812900573856934475706691;

	nodes[77] 	= 0.9417835080627118210987962463304445900474706433526236480842213300537661945446909412783890912893743414824200763470739857672911891;
	weights[77] 	= 0.010722292083224317120244047700919632743554903875756503073005827767519812900573856934475706691;

	nodes[78] 	= -0.95202500898640150130877219198878511408129239789032388467541064570631942016633132191368073730876026191486594269683329747326123906;
	weights[78] 	= 0.00975897340217409683534787492928881708208624406510887369553396232303060081277860184922666371;

	nodes[79] 	= 0.95202500898640150130877219198878511408129239789032388467541064570631942016633132191368073730876026191486594269683329747326123906;
	weights[79] 	= 0.00975897340217409683534787492928881708208624406510887369553396232303060081277860184922666371;

	nodes[80] 	= -0.96129814600289105771041760009194050019071438688663680421577429098778812914026839889672160324897334560561328841806485422585574724;
	weights[80] 	= 0.00878572846739226320269938871004306412487794931814659483257500018411157654755948356879250443;

	nodes[81] 	= 0.96129814600289105771041760009194050019071438688663680421577429098778812914026839889672160324897334560561328841806485422585574724;
	weights[81] 	= 0.00878572846739226320269938871004306412487794931814659483257500018411157654755948356879250443;

	nodes[82] 	= -0.96959348710079447231986401731848763732960960324550579944306638094612716712664876280380710299089297162611891533891167050688714153;
	weights[82] 	= 0.00780354737910075489097998010383950616743912582382996564044612738230616245699697904520771606;

	nodes[83] 	= 0.96959348710079447231986401731848763732960960324550579944306638094612716712664876280380710299089297162611891533891167050688714153;
	weights[83] 	= 0.00780354737910075489097998010383950616743912582382996564044612738230616245699697904520771606;

	nodes[84] 	= -0.97690259506388608249906943187512219068757832608618236066378717023127612770977024208179259870543290569070519952479047189701845029;
	weights[84] 	= 0.00681342947916521599877209570929536815846397676814820050885193918682365433579611319622790115;

	nodes[85] 	= 0.97690259506388608249906943187512219068757832608618236066378717023127612770977024208179259870543290569070519952479047189701845029;
	weights[85] 	= 0.00681342947916521599877209570929536815846397676814820050885193918682365433579611319622790115;

	nodes[86] 	= -0.98321803629372299128533775926417861282577069031497232004068261490492429100386037285630703452677382287950838933319669930137738124;
	weights[86] 	= 0.00581638254643963911276316673944398970454508763774376218172012489803006920759541225288690272;

	nodes[87] 	= 0.98321803629372299128533775926417861282577069031497232004068261490492429100386037285630703452677382287950838933319669930137738124;
	weights[87] 	= 0.00581638254643963911276316673944398970454508763774376218172012489803006920759541225288690272;

	nodes[88] 	= -0.98853338898915816837217299093567696621162640817927880069880430896616697171771119161939426812054732815230110534786867059426042457;
	weights[88] 	= 0.0048134223985867709184778146773680437849528281067933371039516721255202137355020412782948112;

	nodes[89] 	= 0.98853338898915816837217299093567696621162640817927880069880430896616697171771119161939426812054732815230110534786867059426042457;
	weights[89] 	= 0.0048134223985867709184778146773680437849528281067933371039516721255202137355020412782948112;

	nodes[90] 	= -0.99284325153690673013188004739772165951164118533312829103281476743656037850908171144088918259460692429154001004427441646844487369;
	weights[90] 	= 0.00380557408535235956551511904981042603803666944760404742487524040831384398550490086972804003;

	nodes[91] 	= 0.99284325153690673013188004739772165951164118533312829103281476743656037850908171144088918259460692429154001004427441646844487369;
	weights[91] 	= 0.00380557408535235956551511904981042603803666944760404742487524040831384398550490086972804003;

	nodes[92] 	= -0.99614325499685929606297970911180555420353178169281862031529370450350009811856063610055717766196011833584509479542071466252266022;
	weights[92] 	= 0.00279388113572213087062971717882947178044724939260580443425768325197119628744730341791158502;

	nodes[93] 	= 0.99614325499685929606297970911180555420353178169281862031529370450350009811856063610055717766196011833584509479542071466252266022;
	weights[93] 	= 0.00279388113572213087062971717882947178044724939260580443425768325197119628744730341791158502;

	nodes[94] 	= -0.99843010504723045377869320077012116574923867998563786895138299193646478932574624222745339868256976816805349562387328210283645295;
	weights[94] 	= 0.001779477041014528741695435808492083054164007893927462473984298690593979698392683802536223055;

	nodes[95] 	= 0.99843010504723045377869320077012116574923867998563786895138299193646478932574624222745339868256976816805349562387328210283645295;
	weights[95] 	= 0.001779477041014528741695435808492083054164007893927462473984298690593979698392683802536223055;

	nodes[96] 	= -0.99970198412549090363729490369970669882567678461073864897318892823410459130218886629270706671509093737536093159761564221473370677;
	weights[96] 	= 0.0007647669822743134580392460455231118429305601385052911245612403544819805102150938818248474415;

	nodes[97] 	= 0.99970198412549090363729490369970669882567678461073864897318892823410459130218886629270706671509093737536093159761564221473370677;
	weights[97] 	= 0.0007647669822743134580392460455231118429305601385052911245612403544819805102150938818248474415;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_98_hpp__)*/