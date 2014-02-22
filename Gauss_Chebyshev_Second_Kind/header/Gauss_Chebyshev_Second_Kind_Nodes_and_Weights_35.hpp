//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_35.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:57.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 35.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_35_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_35_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_35(long double*& nodes, long double*& weights) {
	nodes	= new long double[35];
	weights	= new long double[35];

	nodes[0] 	= 0.99619469809174553229501040247388804618356267264585097452544227738011674983825159967418638625965192179779126053368867453578650448;
	weights[0] 	= 0.0006628868267829003602292559596249786313409579906879262350934383278296073332636261397510676541319839233957687204240659613986194226;

	nodes[1] 	= 0.98480775301220805936674302458952301367064325171984241879002575235582759994303623927467841005611989916062133620382429048903021783;
	weights[1] 	= 0.0026314058263367224890886352673776493593497146430996051960015034608605352744695377282570634660714679444886346896650844471532506568;

	nodes[2] 	= 0.96592582628906828674974319972889736763390483900840455040234307631042321397985551634756174185807045188840211186438162153744592538;
	weights[2] 	= 0.005845744544978700869048972178003740080153750378277707744723849850355994924953863515303435319778150204136312010995590531818052304;

	nodes[3] 	= 0.93969262078590838405410927732473146993620813426446463309028666277422121099588945894974588983794806746192163479658862657697069787;
	weights[3] 	= 0.010208236927276772295680236065742856170895597165960695475102571657057271084176713825491755175002870552289225077737181624199314815;

	nodes[4] 	= 0.90630778703664996324255265675431698326771262517586468087129840882261838593636941129036370108545770233464607221041424810117153587;
	weights[4] 	= 0.015586330849722470443488495977976125948119636637598010263880861807313016332203315819231902253068185268373864783847008157062835529;

	nodes[5] 	= 0.86602540378443864676372317075293618347140262690519031402790348972596650845440001854057309337862428783781307070770335151498497255;
	weights[5] 	= 0.021816615649929119711546134606107658918035898606771568201214893002137613932543118046028019620431368527653806156342238240604818365;

	nodes[6] 	= 0.81915204428899178968448838591684343189001146902616200825755504125418855845469308075296245280846133013534689215217157847716889246;
	weights[6] 	= 0.028709787276918669339833029193864170519293118566633052373642362524791818866146546412575204641926535710329516249261534285545420624;

	nodes[7] 	= 0.76604444311897803520239265055541667393583245708039524585404528464215538885687472352822927668054849344996248839987004553419542483;
	weights[7] 	= 0.036056400198918189616500668413850111024525914690682046123328717808078492055379059994821347531931334447507021924612379304163572572;

	nodes[8] 	= 0.70710678118654752440084436210484903928483593768847403658833986899536623923105351942519376716382078636750692311545614851246241803;
	weights[8] 	= 0.04363323129985823942309226921221531783607179721354313640242978600427522786508623609205603924086273705530761231268447648120963673;

	nodes[9] 	= 0.64278760968653932632264340990726343290755988420568179032497725467111283624095863971048822771759435162014780267264646498539261968;
	weights[9] 	= 0.05121006240079828922968387001058052464761767973640422668153085420047196367479341218929073094979413966310820270075657365825570089;

	nodes[10] 	= 0.5735764363510460961080319128261578646204333714509863510810271181694568998525616100597220126402203332120219451983344933487617392;
	weights[10] 	= 0.05855667532279780950635150923056646515285047586045322043121720948375863686402592577153687383979893840028570837610741867687385284;

	nodes[11] 	= 0.5;
	weights[11] 	= 0.0654498469497873591346384038183229767541076958203147046036446790064128417976293541380840588612941055829614184690267147218144551;

	nodes[12] 	= 0.4226182617406994361869784896477301815631293011948646234444151592106598499856899896144643736194315885857693153353541811870247653;
	weights[12] 	= 0.07168013174999400840269604244645450972402395778948826254097871020123743939796915636488017622865728884224135984152194480535643793;

	nodes[13] 	= 0.3420201433256687330440996146822595807630833675141606284650484976847147637020775995641901823385255475404735335311778255036375982;
	weights[13] 	= 0.07705822567243970655050430235868777950124799726112557732975700035149318464599575835862032330672260355832599954763177133821995865;

	nodes[14] 	= 0.2588190451025207623488988376240483283490689013199305138140032073150569747488019969223679746942496655208951887489254730249835074;
	weights[14] 	= 0.08142071805473777797713556624642689559198984404880856506013572215819446080521860866880864316194732390647891261437336243060122116;

	nodes[15] 	= 0.173648177666930348851716626769314796000375677184069387236241378132065822139014735421516613157399574011959146396718581042775273;
	weights[15] 	= 0.0846350567733797563570959031570529863127938797839866676088580685476899204557029344558550150156540061661265899357038685152660228;

	nodes[16] 	= 0.0871557427476581735580642708374735513777011561497026726137433675684298274816763305374012482769963721992991800582426696240026434;
	weights[16] 	= 0.08660357577293357848595528246480565704080263643639834656976613368072084839690884604436101082759349018721945590494488700102065404;

	nodes[17] 	= 0.e-127;
	weights[17] 	= 0.087266462599716478846184538424430635672143594427086272804859572008550455730172472184112078481725474110615224625368952962419273461;

	nodes[18] 	= -0.0871557427476581735580642708374735513777011561497026726137433675684298274816763305374012482769963721992991800582426696240026434;
	weights[18] 	= 0.08660357577293357848595528246480565704080263643639834656976613368072084839690884604436101082759349018721945590494488700102065404;

	nodes[19] 	= -0.173648177666930348851716626769314796000375677184069387236241378132065822139014735421516613157399574011959146396718581042775273;
	weights[19] 	= 0.0846350567733797563570959031570529863127938797839866676088580685476899204557029344558550150156540061661265899357038685152660228;

	nodes[20] 	= -0.2588190451025207623488988376240483283490689013199305138140032073150569747488019969223679746942496655208951887489254730249835074;
	weights[20] 	= 0.08142071805473777797713556624642689559198984404880856506013572215819446080521860866880864316194732390647891261437336243060122116;

	nodes[21] 	= -0.3420201433256687330440996146822595807630833675141606284650484976847147637020775995641901823385255475404735335311778255036375982;
	weights[21] 	= 0.07705822567243970655050430235868777950124799726112557732975700035149318464599575835862032330672260355832599954763177133821995865;

	nodes[22] 	= -0.4226182617406994361869784896477301815631293011948646234444151592106598499856899896144643736194315885857693153353541811870247653;
	weights[22] 	= 0.07168013174999400840269604244645450972402395778948826254097871020123743939796915636488017622865728884224135984152194480535643793;

	nodes[23] 	= -0.5;
	weights[23] 	= 0.0654498469497873591346384038183229767541076958203147046036446790064128417976293541380840588612941055829614184690267147218144551;

	nodes[24] 	= -0.5735764363510460961080319128261578646204333714509863510810271181694568998525616100597220126402203332120219451983344933487617392;
	weights[24] 	= 0.05855667532279780950635150923056646515285047586045322043121720948375863686402592577153687383979893840028570837610741867687385284;

	nodes[25] 	= -0.6427876096865393263226434099072634329075598842056817903249772546711128362409586397104882277175943516201478026726464649853926197;
	weights[25] 	= 0.05121006240079828922968387001058052464761767973640422668153085420047196367479341218929073094979413966310820270075657365825570089;

	nodes[26] 	= -0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	weights[26] 	= 0.04363323129985823942309226921221531783607179721354313640242978600427522786508623609205603924086273705530761231268447648120963673;

	nodes[27] 	= -0.7660444431189780352023926505554166739358324570803952458540452846421553888568747235282292766805484934499624883998700455341954248;
	weights[27] 	= 0.03605640019891818961650066841385011102452591469068204612332871780807849205537905999482134753193133444750702192461237930416357257;

	nodes[28] 	= -0.8191520442889917896844883859168434318900114690261620082575550412541885584546930807529624528084613301353468921521715784771688925;
	weights[28] 	= 0.02870978727691866933983302919386417051929311856663305237364236252479181886614654641257520464192653571032951624926153428554542062;

	nodes[29] 	= -0.8660254037844386467637231707529361834714026269051903140279034897259665084544000185405730933786242878378130707077033515149849725;
	weights[29] 	= 0.02181661564992911971154613460610765891803589860677156820121489300213761393254311804602801962043136852765380615634223824060481837;

	nodes[30] 	= -0.9063077870366499632425526567543169832677126251758646808712984088226183859363694112903637010854577023346460722104142481011715359;
	weights[30] 	= 0.01558633084972247044348849597797612594811963663759801026388086180731301633220331581923190225306818526837386478384700815706283553;

	nodes[31] 	= -0.93969262078590838405410927732473146993620813426446463309028666277422121099588945894974588983794806746192163479658862657697069787;
	weights[31] 	= 0.01020823692727677229568023606574285617089559716596069547510257165705727108417671382549175517500287055228922507773718162419931482;

	nodes[32] 	= -0.96592582628906828674974319972889736763390483900840455040234307631042321397985551634756174185807045188840211186438162153744592538;
	weights[32] 	= 0.0058457445449787008690489721780037400801537503782777077447238498503559949249538635153034353197781502041363120109955905318180523;

	nodes[33] 	= -0.98480775301220805936674302458952301367064325171984241879002575235582759994303623927467841005611989916062133620382429048903021783;
	weights[33] 	= 0.002631405826336722489088635267377649359349714643099605196001503460860535274469537728257063466071467944488634689665084447153250657;

	nodes[34] 	= -0.99619469809174553229501040247388804618356267264585097452544227738011674983825159967418638625965192179779126053368867453578650448;
	weights[34] 	= 0.000662886826782900360229255959624978631340957990687926235093438327829607333263626139751067654131983923395768720424065961398619423;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_35_hpp__)*/