#ifndef  _MM_H
#define  _MM_H

#include <string>

using std::string;

namespace MMPro {

	enum RetConst
	{
		ERR_SERVER_FILE_EXPIRED = -5103059,
		MM_BOTTLE_COUNT_ERR = 16,
		MM_BOTTLE_ERR_UNKNOWNTYPE = 15,
		MM_BOTTLE_NOTEXIT = 17,
		MM_BOTTLE_PICKCOUNTINVALID = 19,
		MM_BOTTLE_UINNOTMATCH = 18,
		MM_ERR_ACCESS_DENIED = -5,
		MM_ERR_ACCOUNT_BAN = -200,
		MM_ERR_ALPHA_FORBIDDEN = -75,
		MM_ERR_ANSWER_COUNT = -150,
		MM_ERR_ARG = -2,
		MM_ERR_AUTH_ANOTHERPLACE = -100,
		MM_ERR_BADEMAIL = -28,
		MM_ERR_BATCHGETCONTACTPROFILE_MODE = -45,
		MM_ERR_BIGBIZ_AUTH = -69,
		MM_ERR_BIND_EMAIL_SAME_AS_QMAIL = -86,
		MM_ERR_BINDED_BY_OTHER,
		MM_ERR_BINDUIN_BINDED = -50,
		MM_ERR_BIZ_FANS_LIMITED = -87,
		MM_ERR_BLACKLIST = -22,
		MM_ERR_BLOCK_BY_SPAM = -106,
		MM_ERR_BOTTLEBANBYEXPOSE = -2002,
		MM_ERR_CERT_EXPIRED = -102,
		MM_ERR_CHATROOM_NEED_INVITE = -2012,
		MM_ERR_CHATROOM_PARTIAL_INVITE = -2013,
		MM_ERR_CLIDB_ENCRYPT_KEYINFO_INVALID = -2010,
		MM_ERR_CLIENT = -800000,
		MM_ERR_CONNECT_INFO_URL_INVALID = -2011,
		MM_ERR_COOKIE_KICK = -2008,
		MM_ERR_CRITICALUPDATE = -16,
		MM_ERR_DOMAINDISABLE = -27,
		MM_ERR_DOMAINMAXLIMITED,
		MM_ERR_DOMAINVERIFIED,
		MM_ERR_EMAIL_FORMAT = -111,
		MM_ERR_EMAILEXIST = -8,
		MM_ERR_EMAILNOTVERIFY = -9,
		MM_ERR_FACING_CREATECHATROOM_RETRY = -432,
		MM_ERR_FAV_ALREADY = -400,
		MM_ERR_FILE_EXPIRED = -352,
		MM_ERR_FORCE_QUIT = -999999,
		MM_ERR_FORCE_REDIRECT = -2005,
		MM_ERR_FREQ_LIMITED = -34,
		MM_ERR_GETMFRIEND_NOT_READY = -70,
		MM_ERR_GMAIL_IMAP = -63,
		MM_ERR_GMAIL_ONLINELIMITE = -61,
		MM_ERR_GMAIL_PWD,
		MM_ERR_GMAIL_WEBLOGIN = -62,
		MM_ERR_HAS_BINDED = -84,
		MM_ERR_HAS_NO_HEADIMG = -53,
		MM_ERR_HAS_UNBINDED = -83,
		MM_ERR_HAVE_BIND_FACEBOOK = -67,
		MM_ERR_IDC_REDIRECT = -301,
		MM_ERR_IMG_READ = -1005,
		MM_ERR_INVALID_BIND_OPMODE = -37,
		MM_ERR_INVALID_GROUPCARD_CONTACT = -52,
		MM_ERR_INVALID_HDHEADIMG_REQ_TOTAL_LEN = -54,
		MM_ERR_INVALID_UPLOADMCONTACT_OPMODE = -38,
		MM_ERR_IS_NOT_OWNER = -66,
		MM_ERR_KEYBUF_INVALID = -2006,
		MM_ERR_LBSBANBYEXPOSE = -2001,
		MM_ERR_LBSDATANOTFOUND,
		MM_ERR_LOGIN_QRCODE_UUID_EXPIRED = -2007,
		MM_ERR_LOGIN_URL_DEVICE_UNSAFE = -2009,
		MM_ERR_MEMBER_TOOMUCH = -23,
		MM_ERR_MOBILE_BINDED = -35,
		MM_ERR_MOBILE_FORMAT = -41,
		MM_ERR_MOBILE_NEEDADJUST = -74,
		MM_ERR_MOBILE_NULL = -39,
		MM_ERR_MOBILE_UNBINDED = -36,
		MM_ERR_NEED_QQPWD = -49,
		MM_ERR_NEED_VERIFY = -6,
		MM_ERR_NEED_VERIFY_USER = -44,
		MM_ERR_NEEDREG = -30,
		MM_ERR_NEEDSECONDPWD = -31,
		MM_ERR_NEW_USER = -79,
		MM_ERR_NICEQQ_EXPIRED = -72,
		MM_ERR_NICKNAMEINVALID = -15,
		MM_ERR_NICKRESERVED = -11,
		MM_ERR_NO_BOTTLECOUNT = -56,
		MM_ERR_NO_HDHEADIMG,
		MM_ERR_NO_QUESTION = -152,
		MM_ERR_NO_RETRY = -101,
		MM_ERR_NODATA = -203,
		MM_ERR_NOTBINDQQ = -81,
		MM_ERR_NOTCHATROOMCONTACT = -21,
		MM_ERR_NOTMICROBLOGCONTACT,
		MM_ERR_NOTOPENPRIVATEMSG,
		MM_ERR_NOTQQCONTACT = -46,
		MM_ERR_NOUPDATEINFO = -18,
		MM_ERR_NOUSER = -4,
		MM_ERR_OIDBTIMEOUT = -29,
		MM_ERR_ONE_BINDTYPE_LEFT = -82,
		MM_ERR_OTHER_MAIN_ACCT = -204,
		MM_ERR_PARSE_MAIL = -64,
		MM_ERR_PASSWORD = -3,
		MM_ERR_PICKBOTTLE_NOBOTTLE = -58,
		MM_ERR_QA_RELATION = -153,
		MM_ERR_QQ_BAN = -201,
		MM_ERR_QQ_OK_NEED_MOBILE = -205,
		MM_ERR_QRCODEVERIFY_BANBYEXPOSE = -2004,
		MM_ERR_QUESTION_COUNT = -151,
		MM_ERR_RADAR_PASSWORD_SIMPLE = -431,
		MM_ERR_RECOMMENDEDUPDATE = -17,
		MM_ERR_REG_BUT_LOGIN = -212,
		MM_ERR_REVOKEMSG_TIMEOUT = -430,
		MM_ERR_SEND_VERIFYCODE = -57,
		MM_ERR_SESSIONTIMEOUT = -13,
		MM_ERR_SHAKE_TRAN_IMG_CANCEL = -90,
		MM_ERR_SHAKE_TRAN_IMG_CONTINUE = -92,
		MM_ERR_SHAKE_TRAN_IMG_NOTFOUND,
		MM_ERR_SHAKE_TRAN_IMG_OTHER = -93,
		MM_ERR_SHAKEBANBYEXPOSE = -2003,
		MM_ERR_SHORTVIDEO_CANCEL = 1000000,
		MM_ERR_SPAM = -24,
		MM_ERR_SVR_MOBILE_FORMAT = -78,
		MM_ERR_SYS = -1,
		MM_ERR_TICKET_NOTFOUND = -48,
		MM_ERR_TICKET_UNMATCH,
		MM_ERR_TOLIST_LIMITED = -71,
		MM_ERR_TRYQQPWD = -73,
		MM_ERR_UINEXIST = -12,
		MM_ERR_UNBIND_MAIN_ACCT = -206,
		MM_ERR_UNBIND_MOBILE_NEED_QQPWD = -202,
		MM_ERR_UNBIND_REGBYMOBILE = -65,
		MM_ERR_UNMATCH_MOBILE = -40,
		MM_ERR_UNSUPPORT_COUNTRY = -59,
		MM_ERR_USER_BIND_MOBILE = -43,
		MM_ERR_USER_MOBILE_UNMATCH,
		MM_ERR_USER_NOT_SUPPORT = -94,
		MM_ERR_USER_NOT_VERIFYUSER = -302,
		MM_ERR_USEREXIST = -7,
		MM_ERR_USERNAMEINVALID = -14,
		MM_ERR_USERRESERVED = -10,
		MM_ERR_UUID_BINDED = -76,
		MM_ERR_VERIFYCODE_NOTEXIST = -51,
		MM_ERR_VERIFYCODE_TIMEOUT = -33,
		MM_ERR_VERIFYCODE_UNMATCH,
		MM_ERR_WEIBO_PUSH_TRANS = -80,
		MM_ERR_WRONG_SESSION_KEY = -77,
		MM_FACEBOOK_ACCESSTOKEN_UNVALID = -68,
		MM_OK = 0,
		MMSNS_RET_BAN = 202,
		MMSNS_RET_CLIENTID_EXIST = 206,
		MMSNS_RET_COMMENT_HAVE_LIKE = 204,
		MMSNS_RET_COMMENT_NOT_ALLOW,
		MMSNS_RET_COMMENT_PRIVACY = 208,
		MMSNS_RET_ISALL = 207,
		MMSNS_RET_PRIVACY = 203,
		MMSNS_RET_SPAM = 201
	};

	enum syncScene
	{
		MM_NEWSYNC_SCENE_AFTERINIT = 5,
		MM_NEWSYNC_SCENE_BG2FG = 3,
		MM_NEWSYNC_SCENE_CONTINUEFLAG = 6,
		MM_NEWSYNC_SCENE_NOTIFY = 1,
		MM_NEWSYNC_SCENE_OTHER = 7,
		MM_NEWSYNC_SCENE_PROCESSSTART = 4,
		MM_NEWSYNC_SCENE_TIMER = 2
	};

	enum enMMTenPayCgiCmd
	{
		MMTENPAY_BIZ_CGICMD_PLATFORM_NOTIFY_CHECK_RESULT = 27,
		MMTENPAY_BIZ_CGICMD_PLATFORM_QUERY_BZJ_INFO = 34,
		MMTENPAY_BIZ_CGICMD_PLATFORM_QUERY_CHECK_RECORD = 23,
		MMTENPAY_BIZ_CGICMD_PLATFORM_QUERY_CHECK_RESULT = 25,
		MMTENPAY_BIZ_CGICMD_QUERY_BIZ_CHECK_RESULT = 56,
		MMTENPAY_BIZ_CGICMD_QUERY_NEW_PARTNER_ID = 55,
		MMTENPAY_BIZ_CGICMD_WEB_NOTIFY_CHECK_RESULT = 26,
		MMTENPAY_BIZ_CGICMD_WEB_QUERY_CHECK_RECORD = 22,
		MMTENPAY_BIZ_CGICMD_WEB_QUERY_CHECK_RESULT = 24,
		MMTENPAY_BIZ_CGICMD_WX_QRY_AUTH_INFO = 70,
		MMTENPAY_CGICMD_AUTHEN = 0,
		MMTENPAY_CGICMD_BANK_QUERY = 7,
		MMTENPAY_CGICMD_BANKCARDBIN_QUERY = 15,
		MMTENPAY_CGICMD_BIND_AUTHEN = 12,
		MMTENPAY_CGICMD_BIND_QUERY_NEW = 72,
		MMTENPAY_CGICMD_BIND_VERIFY = 13,
		MMTENPAY_CGICMD_BIND_VERIFY_REG = 17,
		MMTENPAY_CGICMD_CHANGE_PWD = 9,
		MMTENPAY_CGICMD_CHECK_PWD = 18,
		MMTENPAY_CGICMD_CHKPAYACC = 79,
		MMTENPAY_CGICMD_ELEM_QUERY_NEW = 73,
		MMTENPAY_CGICMD_GEN_PRE_FETCH = 75,
		MMTENPAY_CGICMD_GEN_PRE_SAVE = 74,
		MMTENPAY_CGICMD_GEN_PRE_TRANSFER = 83,
		MMTENPAY_CGICMD_GET_FIXED_AMOUNT_QRCODE = 94,
		MMTENPAY_CGICMD_IMPORT_BIND_QUERY = 37,
		MMTENPAY_CGICMD_IMPORT_ENCRYPT_QUERY,
		MMTENPAY_CGICMD_MCH_TRADE = 28,
		MMTENPAY_CGICMD_NONPAY = 92,
		MMTENPAY_CGICMD_OFFLINE_CHG_FEE = 50,
		MMTENPAY_CGICMD_OFFLINE_CLOSE = 47,
		MMTENPAY_CGICMD_OFFLINE_CREATE = 46,
		MMTENPAY_CGICMD_OFFLINE_FPAY = 48,
		MMTENPAY_CGICMD_OFFLINE_GET_TOKEN = 52,
		MMTENPAY_CGICMD_OFFLINE_QUERY_USER = 49,
		MMTENPAY_CGICMD_OFFLINE_UNFREEZE = 51,
		MMTENPAY_CGICMD_PAYRELAY = 87,
		MMTENPAY_CGICMD_PAYUNREG = 71,
		MMTENPAY_CGICMD__API = 21,
		MMTENPAY_CGICMD_QRCODE_CREATE = 5,
		MMTENPAY_CGICMD_QRCODE_TO_BARCODE = 78,
		MMTENPAY_CGICMD_QRCODE_USE = 6,
		MMTENPAY_CGICMD_QUERY_REFUND = 80,
		MMTENPAY_CGICMD_QUERY_TRANSFER_STATUS = 84,
		MMTENPAY_CGICMD_QUERY_USER_TYPE = 30,
		MMTENPAY_CGICMD_RESET_PWD = 20,
		MMTENPAY_CGICMD_RESET_PWD_AUTHEN = 10,
		MMTENPAY_CGICMD_RESET_PWD_VERIFY,
		MMTENPAY_CGICMD_TIMESEED = 19,
		MMTENPAY_CGICMD_TRANSFEAR_SEND_CANCEL_MSG = 97,
		MMTENPAY_CGICMD_TRANSFER_CONFIRM = 85,
		MMTENPAY_CGICMD_TRANSFER_GET_USERNAME = 95,
		MMTENPAY_CGICMD_TRANSFER_RETRYSENDMESSAGE = 86,
		MMTENPAY_CGICMD_UNBIND = 14,
		MMTENPAY_CGICMD_USER_ROLL = 3,
		MMTENPAY_CGICMD_USER_ROLL_BATCH,
		MMTENPAY_CGICMD_USER_ROLL_SAVE_AND_FETCH = 77,
		MMTENPAY_CGICMD_VERIFY = 1,
		MMTENPAY_CGICMD_VERIFY_BIND = 76,
		MMTENPAY_CGICMD_VERIFY_REG = 16,
		MMTENPAY_CGICMD_WX_FUND_ACCOUNT_QUERY = 43,
		MMTENPAY_CGICMD_WX_FUND_BINDSP_QUERY = 42,
		MMTENPAY_CGICMD_WX_FUND_BUY = 39,
		MMTENPAY_CGICMD_WX_FUND_CHANGE = 41,
		MMTENPAY_CGICMD_WX_FUND_PROFIT_QUERY = 44,
		MMTENPAY_CGICMD_WX_FUND_REDEM = 40,
		MMTENPAY_CGICMD_WX_FUND_SUPPORT_BANK = 45,
		MMTENPAY_CGICMD_WX_GET_MERSIGN_ORDER = 88,
		MMTENPAY_CGICMD_WX_GET_MERSIGN_SIMPLE = 90,
		MMTENPAY_CGICMD_WX_HB_REDPACKETNOTIFY = 53,
		MMTENPAY_CGICMD_WX_HBAA_TRANSFER = 81,
		MMTENPAY_CGICMD_WX_OFFLINE_AUTHEN = 35,
		MMTENPAY_CGICMD_WX_OFFLINE_PAY,
		MMTENPAY_CGICMD_WX_PAY_CONFIRM = 82,
		MMTENPAY_CGICMD_WX_QUERY_BANK_ROLL_LIST_BATCH = 93,
		MMTENPAY_CGICMD_WX_QUERY_ORDER = 96,
		MMTENPAY_CGICMD_WX_QUERY_SP_BANK = 91,
		MMTENPAY_CGICMD_WX_SP_CLOSE_ORDER = 54,
		MMTENPAY_CGICMD_WX_VERIFY_MERSIGN = 89,
		MMTENPAY_CGICMD_WXCREDIT_AUTHEN = 64,
		MMTENPAY_CGICMD_WXCREDIT_COMMIT_QUESTION = 60,
		MMTENPAY_CGICMD_WXCREDIT_QUERY = 57,
		MMTENPAY_CGICMD_WXCREDIT_QUERY_BILL_DETAIL = 67,
		MMTENPAY_CGICMD_WXCREDIT_QUERY_CARD_DETAIL = 58,
		MMTENPAY_CGICMD_WXCREDIT_QUERY_PRIVILEGE = 68,
		MMTENPAY_CGICMD_WXCREDIT_QUERY_QUESTION = 59,
		MMTENPAY_CGICMD_WXCREDIT_RENEW_IDENTIFY = 69,
		MMTENPAY_CGICMD_WXCREDIT_REPAY = 61,
		MMTENPAY_CGICMD_WXCREDIT_SIMPLE_VERIFY = 66,
		MMTENPAY_CGICMD_WXCREDIT_UNBIND = 62,
		MMTENPAY_CGICMD_WXCREDIT_VERIFY = 65,
		MMTENPAY_CGICMD_WXCREDIT_VERIFY_PASSWD = 63,
		MMTENPAY_GW_CGICMD_NORMAL_ORDER_QUERY = 29,
		MMTENPAY_GW_CGICMD_NORMAL_REFUND_QUERY = 33,
		MMTENPAY_GW_CGICMD_VERIFY_NOTIFY_ID = 31
	};

	enum LongLinkCmdId
	{
		SEND_DOWNLOADVOICE = 20,
		RECV_DOWNLOADVOICE = 1000000020,
		SEND_GETPROFILE = 118,
		RECV_GETPROFILE = 1000000118,
		SEND_GETLOGINQRCODE = 232,
		RECV_GETLOGINQRCODE = 1000000232,
		SEND_CHECKLOGINQRCODE_CMDID = 233,
		RECV_CHECKLOGINQRCODE_CMDID = 1000000233,
		RECV_PUSH_CMDID = 24,
		SEND_NOOP_CMDID = 6,
		SEND_MSGIMG_CMDID = 9,
		RECV_MSGIMG_CMDID = 1000000009,
		RECV_NOOP_CMDID = 1000000006,
		SEND_NEWSYNC_CMDID = 121,
		RECV_NEWSYNC_CMDID = 1000000121,
		LONGLINK_IDENTIFY_REQ = 205,
		LONGLINK_IDENTIFY_RESP = 1000000205,
		PUSH_DATA_CMDID = 122,
		SEND_SYNC_SUCCESS = 1000000190,
		SIGNALKEEP_CMDID = 243,
		NEWSENDMSG = 237,
		SEND_MANUALAUTH_CMDID = 253
	};

	enum CGI_TYPE
	{
		CGI_TYPE_INITCONTACT = 851,
		CGI_TYPE_EXTDEVICELOGINCONFIRMGET = 971,
		CGI_TYPE_SNSOBJECTOP = 218,
		CGI_TYPE_MMSNSTAGLIST = 292,
		CGI_TYPE_MMSNSPORT = 209,
		CGI_TYPE_MMSNSOBJECTDETAIL,
		CGI_TYPE_MMSNSTIMELINE,
		CGI_TYPE_MMSNSSYNC = 214,
		CGI_TYPE_OPLOG = 681,
		CGI_TYPE_DEFAULT = 0,
		CGI_TYPE_GETOPENIMRESOURCE = 453,
		CGI_TYPE_GETLOGINQRCODE = 502,
		CGI_TYPE_CHECKLOGINQRCODE,
		CGI_TYPE_NEWSENDMSG = 522,
		CGI_TYPE_GETEMOTIONDESC = 521,
		CGI_TYPE_SENDEMOJI = 175,
		CGI_TYPE_NEWSYNC = 138,
		CGI_TYPE_MANUALAUTH = 701,
		CGI_TYPE_UPLOADIMAGE = 625,
		CGI_TYPE_UPLOADMCONTACT = 133,
		CGI_TYPE_FAVSYNC = 400,
		CGI_TYPE_ADDFAVITEM,
		CGI_TYPE_BATCHGETFAVITEM,
		CGI_TYPE_GETPROFILE = 302,
		CGI_TYPE_GETFAVINFO = 438,
		CGI_TYPE_GETCONTACTLABELLIST = 639,
		CGI_TYPE_UPLOADVOICE = 127,
		CGI_TYPE_SENDAPPMSG = 222,
		CGI_TYPE_UPLOADVIDEO = 149,
		CGI_TYPE_MMSNSUSERPAGE = 212,
		CGI_TYPE_MMSNSUPLOAD = 207,
		CGI_TYPE_MMSNSCOMMENT = 213,
		CGI_TYPE_GETCONTACT = 182,
		CGI_TYPE_GETCDNDNS = 379,
		CGI_TYPE_GETMSGIMG = 109,
		CGI_TYPE_STATUSNOTIFY = 251,
		CGI_TYPE_GETCHATROOMMEMBERDETAIL = 551,
		CGI_TYPE_GETCHATROOMINFODETAIL = 223,
		CGI_TYPE_DOWNLOADVOICE = 128,
		CGI_TYPE_HEARTBEAT = 518,
		CGI_TYPE_GETONLINEINFO = 526,
		CGI_TYPE_PUSHLOGINURL = 654,
		CGI_TYPE_TENPAY = 385,
		CGI_TYPE_F2FQRCODE = 1588,
		CGI_TYPE_TRANSFERSETF2FFEE = 1623,
		CGI_TYPE_GETPAYFUNCTIONLIST = 495,
		CGI_TYPE_GETBANNERINFO = 1679,
		CGI_TYPE_TIMESEED = 477,
		CGI_TYPE_TRANSFERQUERY = 1628,
		CGI_TYPE_GETTRANSFERWORDINH = 1992,
		CGI_TYPE_TRANSFEROPERATION = 1691,
		CGI_TYPE_BINDQUERYNEW = 1501,
		CGI_TYPE_VERIFYUSER = 137,
		CGI_TYPE_CREATECHATROOM = 119,
		CGI_TYPE_BATCHGETHEADIMG = 123,
		CGI_TYPE_ADDCHATROOMMEMBER = 120,
		CGI_TYPE_DELCHATROOMMEMBER = 179,
		CGI_TYPE_GETA8KEY = 233,
		CGI_TYPE_ADEXPOSURE = 1231,
		CGI_TYPE_ADCLICK,
		CGI_TYPE_MASSSEND = 193,
		CGI_TYPE_RECEIVEWXHB = 1581,
		CGI_TYPE_OPENWXHB = 1685,
		CGI_TYPE_QRYDETAILWXHB = 1585,
		CGI_TYPE_QRYLISTWXHB = 1514,
		CGI_TYPE_WISHWXHB = 1682,
		CGI_TYPE_NEWGETINVITEFRIEND = 135,
		CGI_TYPE_LBSFIND = 148,
		CGI_TYPE_SETCHATROOMANNOUNCEMENT = 993,
		CGI_TYPE_GETQRCODE = 168,
		CGI_TYPE_SEARCHCONTACT = 106
	};

	enum CmdConst
	{
		MM_CMDID_CancelQRPay = 198,
		MM_CMDID_GenPrepay = 189,
		MM_CMDID_GetBizIapDetail = 234,
		MM_CMDID_GetBizIapPayResult,
		MM_CMDID_GetLatestPayProductInfo = 229,
		MM_CMDID_GetOrderList = 236,
		MM_CMDID_GetPayFunctionList = 227,
		MM_CMDID_GetPayFunctionProductList,
		MM_CMDID_GetProductInfo = 219,
		MM_CMDID_NEW_YEAR_SHAKE_REQ = 309,
		MM_CMDID_NEW_YEAR_SHAKE_RESP = 1000000309,
		MM_CMDID_PayAuthApp = 188,
		MM_CMDID_PayDelUserRoll = 187,
		MM_CMDID_PayQueryUserRoll = 186,
		MM_CMDID_PaySubscribe = 206,
		MM_CMDID_PreparePurchase = 214,
		MM_CMDID_RcptInfoAdd = 200,
		MM_CMDID_RcptInfoQuery = 202,
		MM_CMDID_RcptInfoRemove = 201,
		MM_CMDID_RcptInfoTouch = 204,
		MM_CMDID_RcptInfoUpdate = 203,
		MM_CMDID_SubmitPayProductBuyInfo = 230,
		MM_CMDID_TenPay = 185,
		MM_CMDID_VerifyPurchase = 215,
		MM_PKT_ADD_FAV_ITEM_REQ = 193,
		MM_PKT_ADD_FAV_ITEM_RESP = 1000000193,
		MM_PKT_ADDCHATROOMMEMBER_REQ = 36,
		MM_PKT_ASYNCDOWNLOADVOICE_REQ = 22,
		MM_PKT_ASYNCDOWNLOADVOICE_RESP = 1000000022,
		MM_PKT_AUTH_RESP = 1000000001,
		MM_PKT_BAKCHAT_RECOVER_DATA_REQ = 140,
		MM_PKT_BAKCHAT_RECOVER_DATA_RESP = 1000000140,
		MM_PKT_BAKCHAT_RECOVER_DELETE_REQ = 141,
		MM_PKT_BAKCHAT_RECOVER_DELETE_RESP = 1000000141,
		MM_PKT_BAKCHAT_RECOVER_GETLIST_REQ = 138,
		MM_PKT_BAKCHAT_RECOVER_GETLIST_RESP = 1000000138,
		MM_PKT_BAKCHAT_RECOVER_HEAD_REQ = 139,
		MM_PKT_BAKCHAT_RECOVER_HEAD_RESP = 1000000139,
		MM_PKT_BAKCHAT_UPLOAD_END_REQ = 135,
		MM_PKT_BAKCHAT_UPLOAD_END_RESP = 1000000135,
		MM_PKT_BAKCHAT_UPLOAD_HEAD_REQ = 134,
		MM_PKT_BAKCHAT_UPLOAD_HEAD_RESP = 1000000134,
		MM_PKT_BAKCHAT_UPLOAD_MEDIA_REQ = 137,
		MM_PKT_BAKCHAT_UPLOAD_MEDIA_RESP = 1000000137,
		MM_PKT_BAKCHAT_UPLOAD_MSG_REQ = 136,
		MM_PKT_BAKCHAT_UPLOAD_MSG_RESP = 1000000136,
		MM_PKT_BATCH_DEL_FAV_ITEM_REQ = 194,
		MM_PKT_BATCH_DEL_FAV_ITEM_RESP = 1000000194,
		MM_PKT_BATCH_GET_SHAKE_TRAN_IMG_REQ = 129,
		MM_PKT_BATCH_GET_SHAKE_TRAN_IMG_RESP = 1000000129,
		MM_PKT_BATCHGETCONTACTPROFILE_REQ = 28,
		MM_PKT_BATCHGETCONTACTPROFILE_RESP = 1000000028,
		MM_PKT_BULLETIN_REQ = 72,
		MM_PKT_CHECKUNBIND_REQ = 131,
		MM_PKT_CHECKUNBIND_RESP = 1000000131,
		MM_PKT_CLICK_COMMAND_REQ = 176,
		MM_PKT_CLICK_COMMAND_RESP = 1000000176,
		MM_PKT_CONNCONTROL_REQ = 11,
		MM_PKT_CREATECHATROOM_REQ = 37,
		MM_PKT_DEL_SAFEDEVICE_REQ = 172,
		MM_PKT_DEL_SAFEDEVICE_RESP = 1000000172,
		MM_PKT_DIRECTSEND_REQ = 8,
		MM_PKT_DOWNLOAD_APP_ATTACH_REQ = 106,
		MM_PKT_DOWNLOAD_APP_ATTACH_RESP = 1000000106,
		MM_PKT_DOWNLOADVIDEO_REQ = 40,
		MM_PKT_DOWNLOADVOICE_REQ = 20,
		MM_PKT_DOWNLOADVOICE_RESP = 1000000020,
		MM_PKT_EXCHANGE_EMOTION_PACK_REQ = 213,
		MM_PKT_EXCHANGE_EMOTION_PACK_RESP = 1000000213,
		MM_PKT_EXPOSE_REQ = 59,
		MM_PKT_EXPOSE_RESP = 1000000059,
		MM_PKT_FAV_CHECKCDN_REQ = 197,
		MM_PKT_FAV_CHECKCDN_RESP = 1000000197,
		MM_PKT_FAV_SYNC_REQ = 195,
		MM_PKT_FAV_SYNC_RESP = 1000000195,
		MM_PKT_FAVNOTIFY_REQ = 192,
		MM_PKT_FIXSYNCCHECK_REQ = 30,
		MM_PKT_FIXSYNCCHECK_RESP = 1000000030,
		MM_PKT_GENERALSET_REQ = 70,
		MM_PKT_GENERALSET_RESP = 1000000070,
		MM_PKT_GET_APP_INFO__RESP = 1000000108,
		MM_PKT_GET_APP_INFO_REQ = 108,
		MM_PKT_GET_CERT_REQ = 179,
		MM_PKT_GET_CERT_RESP = 1000000179,
		MM_PKT_GET_EMOTION_DETAIL_REQ = 211,
		MM_PKT_GET_EMOTION_DETAIL_RESP = 1000000211,
		MM_PKT_GET_EMOTION_LIST_REQ = 210,
		MM_PKT_GET_EMOTION_LIST_RESP = 1000000210,
		MM_PKT_GET_FAV_INFO_REQ = 217,
		MM_PKT_GET_FAV_INFO_RESP = 1000000217,
		MM_PKT_GET_PROFILE_REQ = 118,
		MM_PKT_GET_PROFILE_RESP = 1000000118,
		MM_PKT_GET_QRCODE_REQ = 67,
		MM_PKT_GET_QRCODE_RESP = 1000000067,
		MM_PKT_GET_RECOMMEND_APP_LIST_REQ = 109,
		MM_PKT_GET_RECOMMEND_APP_LIST_RESP = 1000000109,
		MM_PKT_GETA8KEY_REQ = 155,
		MM_PKT_GETA8KEY_RESP = 1000000155,
		MM_PKT_GETCONTACT_REQ = 71,
		MM_PKT_GETCONTACT_RESP = 1000000071,
		MM_PKT_GETINVITEFRIEND_REQ = 18,
		MM_PKT_GETINVITEFRIEND_RESP = 1000000018,
		MM_PKT_GETMSGIMG_REQ = 10,
		MM_PKT_GETMSGIMG_RESP = 1000000010,
		MM_PKT_GETPSMIMG_REQ = 29,
		MM_PKT_GETPSMIMG_RESP = 1000000029,
		MM_PKT_GETQQGROUP_REQ = 38,
		MM_PKT_GETQQGROUP_RESP = 1000000038,
		MM_PKT_GETUPDATEINFO_REQ = 35,
		MM_PKT_GETUPDATEPACK_REQ = 16,
		MM_PKT_GETUPDATEPACK_RESP = 1000000016,
		MM_PKT_GETUSERIMG_REQ = 15,
		MM_PKT_GETUSERIMG_RESP = 1000000015,
		MM_PKT_GETUSERNAME_REQ = 33,
		MM_PKT_GETUSERNAME_RESP = 1000000033,
		MM_PKT_GETVERIFYIMG_REQ = 48,
		MM_PKT_GETVUSERINFO_REQ = 60,
		MM_PKT_GETVUSERINFO_RESP = 1000000060,
		MM_PKT_INIT_REQ = 14,
		MM_PKT_INIT_RESP = 1000000014,
		MM_PKT_INVALID_REQ = 0,
		MM_PKT_KvReportRsa_REQ = 218,
		MM_PKT_KvReportRsa_RESP = 1000000218,
		MM_PKT_LBS_ROOM_MEMBER_REQ = 184,
		MM_PKT_LBS_ROOM_MEMBER_RESP = 1000000184,
		MM_PKT_LBS_ROOM_REQ = 183,
		MM_PKT_LBS_ROOM_RESP = 1000000183,
		MM_PKT_MASS_SEND_REQ = 84,
		MM_PKT_MASS_SEND_RESP = 1000000084,
		MM_PKT_MOD_EMOTION_PACK_REQ = 212,
		MM_PKT_MOD_EMOTION_PACK_RESP = 1000000212,
		MM_PKT_MOD_FAV_ITEM_REQ = 216,
		MM_PKT_MOD_FAV_ITEM_RESP = 1000000216,
		MM_PKT_NEW_AUTH_REQ = 178,
		MM_PKT_NEW_AUTH_RESP = 1000000178,
		MM_PKT_NEWGETINVITEFRIEND_REQ = 23,
		MM_PKT_NEWGETINVITEFRIEND_RESP = 1000000023,
		MM_PKT_NEWINIT_REQ = 27,
		MM_PKT_NEWINIT_RESP = 1000000027,
		MM_PKT_NEWNOTIFY_REQ = 24,
		MM_PKT_NEWNOTIFY_RESP = 1000000024,
		MM_PKT_NEWREG_REQ = 32,
		MM_PKT_NEWREG_RESP = 1000000032,
		MM_PKT_NEWSENDMSG_REQ = 237,
		MM_PKT_NEWSENDMSG_RESP = 1000000237,
		MM_PKT_NEWSYNC_REQ = 26,
		MM_PKT_NEWSYNC_RESP = 1000000026,
		MM_PKT_NEWSYNCCHECK_REQ = 25,
		MM_PKT_NEWSYNCCHECK_RESP = 1000000025,
		MM_PKT_NOOP_REQ = 6,
		MM_PKT_NOOP_RESP = 1000000006,
		MM_PKT_NOTIFY_REQ = 5,
		MM_PKT_PREPARE_PURCHASE_REQ = 214,
		MM_PKT_PREPARE_PURCHASE_RESP = 1000000214,
		MM_PKT_QUERY_HAS_PASSWD_REQ = 132,
		MM_PKT_QUERY_HAS_PASSWD_RESP = 1000000132,
		MM_PKT_QUIT_REQ = 7,
		MM_PKT_REDIRECT_REQ = 12,
		MM_PKT_REG_REQ = 31,
		MM_PKT_REG_RESP = 1000000031,
		MM_PKT_SEARCHCONTACT_REQ = 34,
		MM_PKT_SEARCHFRIEND_REQ = 17,
		MM_PKT_SEARCHFRIEND_RESP = 1000000017,
		MM_PKT_SEND_APP_MSG__RESP = 1000000107,
		MM_PKT_SEND_APP_MSG_REQ = 107,
		MM_PKT_SENDCARD_REQ = 42,
		MM_PKT_SENDCARD_RESP = 1000000042,
		MM_PKT_SENDINVITEMAIL_REQ = 41,
		MM_PKT_SENDMSG_RESP = 1000000002,
		MM_PKT_SENDVERIFYMAIL_REQ = 43,
		MM_PKT_SET_PWD_REQ = 180,
		MM_PKT_SET_PWD_RESP = 1000000180,
		MM_PKT_SHAKE_MUSIC_REQ = 177,
		MM_PKT_SHAKE_MUSIC_RESP = 1000000177,
		MM_PKT_SHAKE_TRAN_IMG_GET_REQ = 128,
		MM_PKT_SHAKE_TRAN_IMG_GET_RESP = 1000000128,
		MM_PKT_SHAKE_TRAN_IMG_REPORT_REQ = 127,
		MM_PKT_SHAKE_TRAN_IMG_REPORT_RESP = 1000000127,
		MM_PKT_SHAKE_TRAN_IMG_UNBIND_REQ = 130,
		MM_PKT_SHAKE_TRAN_IMG_UNBIND_RESP = 1000000130,
		MM_PKT_SHAKEGET_REQ = 57,
		MM_PKT_SHAKEGET_RESP = 1000000057,
		MM_PKT_SHAKEREPORT_REQ = 56,
		MM_PKT_SHAKEREPORT_RESP = 1000000056,
		MM_PKT_SNS_OBJECT_OP_REQ = 104,
		MM_PKT_SNS_OBJECT_OP_RESP = 1000000104,
		MM_PKT_SNS_POST_REQ = 97,
		MM_PKT_SNS_POST_RESP = 1000000097,
		MM_PKT_SNS_SYNC_REQ = 102,
		MM_PKT_SNS_SYNC_RESP = 1000000102,
		MM_PKT_SNS_TAG_LIST_REQ = 116,
		MM_PKT_SNS_TAG_LIST_RESP = 1000000116,
		MM_PKT_SNS_TAG_MEMBER_MUTIL_SET_REQ = 117,
		MM_PKT_SNS_TAG_MEMBER_MUTIL_SET_RESP = 1000000117,
		MM_PKT_SNS_TAG_MEMBER_OP_REQ = 115,
		MM_PKT_SNS_TAG_MEMBER_OP_RESP = 1000000115,
		MM_PKT_SNS_TAG_OP_REQ = 114,
		MM_PKT_SNS_TAG_OP_RESP = 1000000114,
		MM_PKT_SNS_TIME_LINE_REQ = 98,
		MM_PKT_SNS_TIME_LINE_RESP = 1000000098,
		MM_PKT_SNS_UPLOAD_REQ = 95,
		MM_PKT_SNS_UPLOAD_RESP = 1000000095,
		MM_PKT_SNS_USER_PAGE_REQ = 99,
		MM_PKT_SNS_USER_PAGE_RESP = 1000000099,
		MM_PKT_SNSCOMMENT_REQ = 100,
		MM_PKT_SNSOBJECTDETAIL_REQ,
		MM_PKT_SYNC_REQ = 3,
		MM_PKT_SYNC_RESP = 1000000003,
		MM_PKT_SYNCHECK_REQ = 13,
		MM_PKT_SYNCHECK_RESP = 1000000013,
		MM_PKT_TALKROOMADDMEMBER_REQ = 169,
		MM_PKT_TALKROOMADDMEMBER_RESP = 1000000169,
		MM_PKT_TALKROOMCREATE_REQ = 168,
		MM_PKT_TALKROOMCREATE_RESP = 1000000168,
		MM_PKT_TALKROOMDELMEMBER_REQ = 170,
		MM_PKT_TALKROOMDELMEMBER_RESP = 1000000170,
		MM_PKT_TALKROOMENTER_REQ = 147,
		MM_PKT_TALKROOMENTER_RESP = 1000000147,
		MM_PKT_TALKROOMEXIT_REQ = 148,
		MM_PKT_TALKROOMEXIT_RESP = 1000000148,
		MM_PKT_TALKROOMINVITE_REQ = 174,
		MM_PKT_TALKROOMINVITE_RESP = 1000000174,
		MM_PKT_TALKROOMMICACTION_REQ = 146,
		MM_PKT_TALKROOMMICACTION_RESP = 1000000146,
		MM_PKT_TALKROOMNOOP_REQ = 149,
		MM_PKT_TALKROOMNOOP_RESP = 1000000149,
		MM_PKT_TOKEN_REQ = 4,
		MM_PKT_TOKEN_RESP = 1000000004,
		MM_PKT_UPDATE_SAFEDEVICE_REQ = 171,
		MM_PKT_UPDATE_SAFEDEVICE_RESP = 1000000171,
		MM_PKT_UPLOAD_APP_ATTACH_REQ = 105,
		MM_PKT_UPLOAD_APP_ATTACH_RESP = 1000000105,
		MM_PKT_UPLOADMSGIMG_REQ = 9,
		MM_PKT_UPLOADMSGIMG_RESP = 1000000009,
		MM_PKT_UPLOADVIDEO_REQ = 39,
		MM_PKT_UPLOADVOICE_REQ = 19,
		MM_PKT_UPLOADVOICE_RESP = 1000000019,
		MM_PKT_UPLOADWEIBOIMG_REQ = 21,
		MM_PKT_UPLOADWEIBOIMG_RESP = 1000000021,
		MM_PKT_VERIFY_PURCHASE_REQ = 215,
		MM_PKT_VERIFY_PURCHASE_RESP = 1000000215,
		MM_PKT_VERIFY_PWD_REQ = 182,
		MM_PKT_VERIFY_PWD_RESP = 1000000182,
		MM_PKT_VERIFYUSER = 44,
		MM_PKT_VOICETRANS_NOTIFY = 241,
		MM_PKT_VOIP_REQ = 120,
		MM_PKT_VOIPANSWER_REQ = 65,
		MM_PKT_VOIPANSWER_RESP = 1000000065,
		MM_PKT_VOIPCANCELINVITE_REQ = 64,
		MM_PKT_VOIPCANCELINVITE_RESP = 1000000064,
		MM_PKT_VOIPHEARTBEAT_REQ = 81,
		MM_PKT_VOIPHEARTBEAT_RESP = 1000000081,
		MM_PKT_VOIPINVITE_REQ = 63,
		MM_PKT_VOIPINVITE_RESP = 1000000063,
		MM_PKT_VOIPINVITEREMIND_REQ = 125,
		MM_PKT_VOIPINVITEREMIND_RESP = 1000000125,
		MM_PKT_VOIPNOTIFY_REQ = 61,
		MM_PKT_VOIPNOTIFY_RESP = 1000000061,
		MM_PKT_VOIPSHUTDOWN_REQ = 66,
		MM_PKT_VOIPSHUTDOWN_RESP = 1000000066,
		MM_PKT_VOIPSYNC_REQ = 62,
		MM_PKT_VOIPSYNC_RESP = 1000000062
	};


	 #define CGI_EXTDEVICELOGINCONFIRMGET "/cgi-bin/micromsg-bin/extdeviceloginconfirmget";

	 #define CGI_MMSNSTIMELINE "/cgi-bin/micromsg-bin/mmsnstimeline";

	 #define CGI_MMSNSTAGLIST "/cgi-bin/micromsg-bin/mmsnstaglist";

	 #define CGI_MMSNSPORT "/cgi-bin/micromsg-bin/mmsnspost";

	 #define CGI_MMSNSOBJECTDETAIL "/cgi-bin/micromsg-bin/mmsnsobjectdetail";

	 #define CGI_MMSNSOBJECTOP "/cgi-bin/micromsg-bin/mmsnsobjectop";

	 #define CGI_OPLOG  "/cgi-bin/micromsg-bin/oplog";

	 #define CGI_MANUALAUTH "/cgi-bin/micromsg-bin/manualauth";

	 #define CGI_NEWSYNC "/cgi-bin/micromsg-bin/newsync";

	 #define CGI_NEWSENDMSG "/cgi-bin/micromsg-bin/newsendmsg";

	 #define CGI_STATUSNOTIFY "/cgi-bin/micromsg-bin/statusnotify";

	 #define CGI_UPLOADIMAGE "/cgi-bin/micromsg-bin/uploadmsgimg";

	 #define CGI_ADDFAVITEM "/cgi-bin/micromsg-bin/addfavitem";

	 #define CGI_FAVSYNC "/cgi-bin/micromsg-bin/favsync";

	 #define CGI_GETFAVINFO "/cgi-bin/micromsg-bin/getfavinfo";

	 #define CGI_BATCHGETFAVITEM "/cgi-bin/micromsg-bin/batchgetfavitem";

	 #define CGI_GETEMOTIONDESC "/cgi-bin/micromsg-bin/getemotiondesc";

	 #define CGI_SENDEMOJI "/cgi-bin/micromsg-bin/sendemoji";

	 #define CGI_GETCONTACTLABELLIST  "/cgi-bin/micromsg-bin/getcontactlabellist";

	 #define CGI_UPLOADVOICE  "/cgi-bin/micromsg-bin/uploadvoice";

	 #define CGI_SENDAPPMSG  "/cgi-bin/micromsg-bin/sendappmsg";

	 #define CGI_UPLOADVIDEO "/cgi-bin/micromsg-bin/uploadvideo";

	 #define CGI_MMSNSUSERPAGE "/cgi-bin/micromsg-bin/mmsnsuserpage";

	 #define CGI_MMSNSCOMMENT  "/cgi-bin/micromsg-bin/mmsnscomment";

	 #define CGI_GETCONTACT  "/cgi-bin/micromsg-bin/getcontact";

	 #define CGI_GETCDNDNS "/cgi-bin/micromsg-bin/getcdndns";

	 #define CGI_GETPROFILE  "/cgi-bin/micromsg-bin/getprofile";

	 #define CGI_GETMSGIMG "/cgi-bin/micromsg-bin/getmsgimg";

	 #define CGI_CHECKLOGINQRCODE  "/cgi-bin/micromsg-bin/checkloginqrcode";

	 #define CGI_GETLOGINQRCODE  "/cgi-bin/micromsg-bin/getloginqrcode";

	 #define CGI_GETOPENIMRESOURCE "/cgi-bin/micromsg-bin/getopenimresource";

	 #define CGI_GETCHATROOMMEMBERDETAIL  "/cgi-bin/micromsg-bin/getchatroommemberdetail";

	 #define CGI_GETCHATROOMINFODETAIL  "/cgi-bin/micromsg-bin/getchatroominfodetail";

	 #define CGI_DOWNLOADVOICE  "/cgi-bin/micromsg-bin/downloadvoice";

	 #define CGI_HEARTBEAT  "/cgi-bin/micromsg-bin/heartbeat";

	 #define CGI_GETONLINEINFO  "/cgi-bin/micromsg-bin/getonlineinfo";

	 #define CGI_PUSHLOGINURL  "/cgi-bin/micromsg-bin/pushloginurl";

	 #define CGI_TIMESEED  "/cgi-bin/mmpay-bin/tenpay/timeseed";

	 #define CGI_TENPAY  "/cgi-bin/micromsg-bin/tenpay";

	 #define CGI_F2FQRCODE  "/cgi-bin/mmpay-bin/f2fqrcode";

	 #define CGI_TRANSFERSETF2FFEE  "/cgi-bin/mmpay-bin/transfersetf2ffee";

	 #define CGI_BINDQUERYNEW  "/cgi-bin/mmpay-bin/tenpay/bindquerynew";

	 #define CGI_GETBANNERINFO  "/cgi-bin/mmpay-bin/tenpay/getbannerinfo";

	 #define CGI_GETPAYFUNCTIONLIST  "/cgi-bin/micromsg-bin/getpayfunctionlist";

	 #define CGI_TRANSFERQUERY  "/cgi-bin/mmpay-bin/transferquery";

	 #define CGI_GETTRANSFERWORDINH  "/cgi-bin/mmpay-bin/gettransferwording";

	 #define CGI_TRANSFEROPERATION  "/cgi-bin/mmpay-bin/transferoperation";

	 #define CGI_VERIFYUSER  "/cgi-bin/micromsg-bin/verifyuser";

	 #define CGI_CREATECHATROOM  "/cgi-bin/micromsg-bin/createchatroom";

	 #define CGI_BATCHGETHEADIMG  "/cgi-bin/micromsg-bin/batchgetheadimg";

	 #define CGI_ADDCHATROOMMEMBER  "/cgi-bin/micromsg-bin/addchatroommember";

	 #define CGI_DELCHATROOMMEMBER  "/cgi-bin/micromsg-bin/delchatroommember";

	 #define CGI_GETA8KEY  "/cgi-bin/micromsg-bin/geta8key";

	 #define CGI_ADCLICK  "/cgi-bin/mmoc-bin/ad/click";

	 #define CGI_ADEXPOSURE  "/cgi-bin/mmoc-bin/ad/exposure";

	 #define CGI_MMSNSSYNC  "/cgi-bin/micromsg-bin/mmsnssync";

	 #define CGI_MASSSEND  "/cgi-bin/micromsg-bin/masssend";

	 #define CGI_MMSNSUPLOAD  "/cgi-bin/micromsg-bin/mmsnsupload";

	 #define CGI_INITCONTACT  "/cgi-bin/micromsg-bin/initcontact";

	 #define CGI_RECEIVEWXHB  "/cgi-bin/mmpay-bin/receivewxhb";

	 #define CGI_OPENWXHB  "/cgi-bin/mmpay-bin/openwxhb";

	 #define CGI_QRYDETAILWXHB  "/cgi-bin/mmpay-bin/qrydetailwxhb";

	 #define CGI_QRYLISTWXHB  "/cgi-bin/mmpay-bin/qrylistwxhb";

	 #define CGI_WISHWXHB  "/cgi-bin/mmpay-bin/wishwxhb";

	 #define CGI_NEWGETINVITEFRIEND  "/cgi-bin/micromsg-bin/newgetinvitefriend";

	 #define CGI_UPLOADMCONTACT  "/cgi-bin/micromsg-bin/uploadmcontact";

	 #define CGI_LBSFIND  "/cgi-bin/micromsg-bin/lbsfind";

	 #define CGI_SETCHATROOMANNOUNCEMENT  "/cgi-bin/micromsg-bin/setchatroomannouncement";

	 #define CGI_GETQRCODE ="/cgi-bin/micromsg-bin/getqrcode";

	 #define CGI_SEARCHCONTACT "/cgi-bin/micromsg-bin/searchcontact";
	
}

#endif