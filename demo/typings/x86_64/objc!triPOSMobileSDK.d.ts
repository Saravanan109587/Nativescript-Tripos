
declare const enum VTCEmvTag {

	AcquirerIdentifier = 40705,

	AdditionalTerminalCapabilities = 40768,

	AmountAuthorisedBinary = 129,

	AmountAuthorisedNumeric = 40706,

	AmountOtherBinary = 40708,

	AmountOtherNumeric = 40707,

	AmountReferenceCurrency = 40762,

	ApplicationCryptogram = 40742,

	ApplicationCurrencyCode = 40770,

	ApplicationCurrencyExponent = 40772,

	ApplicationDiscretionaryData = 40709,

	ApplicationEffectiveDate = 24357,

	ApplicationExpirationDate = 24356,

	ApplicationFileLocator = 148,

	ApplicationIdentifierCard = 79,

	ApplicationIdentifierTerminal = 40710,

	ApplicationInterchangeProfile = 130,

	ApplicationLabel = 80,

	ApplicationPreferredName = 40722,

	ApplicationPrimaryAccountNumber = 90,

	ApplicationPrimaryAccountNumberSequenceNumber = 24372,

	ApplicationPriorityIndicator = 135,

	ApplicationReferenceCurrency = 40763,

	ApplicationReferenceCurrencyExponent = 40771,

	ApplicationTemplate = 97,

	ApplicationTransactionCounter = 40758,

	ApplicationUsageControl = 40711,

	ApplicationVersionNumberCard = 40712,

	ApplicationVersionNumberTerminal = 40713,

	AuthorisationCode = 137,

	AuthorisationResponseCode = 138,

	BankIdentifierCode = 24404,

	CardRiskManagementDataObjectList1 = 140,

	CardRiskManagementDataObjectList2 = 141,

	CardholderName = 24352,

	CardholderNameExtended = 40715,

	CardholderVerificationMethodList = 142,

	CardholderVerificationMethodResults = 40756,

	CertificationAuthorityPublicKeyIndexCard = 143,

	CertificationAuthorityPublicKeyIndexTerminal = 40738,

	CommandTemplate = 131,

	CryptogramInformationData = 40743,

	CustomerExclusiveData = 40828,

	DataAuthenticationCode = 40773,

	DedicatedFileName = 132,

	DirectoryDefinitionFileName = 157,

	DirectoryDiscretionaryTemplate = 115,

	DynamicDataAuthenticationDataObjectList = 40777,

	EvmProprietaryTemplate = 112,

	FileControlInformationIssuerDiscretionaryData = 48908,

	FileControlInformationProprietaryTemplate = 165,

	FileControlInformationTemplate = 111,

	FormFactorIndicator = 40814,

	IccDynamicNumber = 40780,

	IntegratedCircuitCardPinEnciphermentPublicKeyCertificate = 40749,

	IntegratedCircuitCardPinEnciphermentPublicKeyExponent = 40750,

	IntegratedCircuitCardPinEnciphermentPublicKeyRemainder = 40751,

	IntegratedCircuitCardPublicKeyCertificate = 40774,

	IntegratedCircuitCardPublicKeyExponent = 40775,

	IntegratedCircuitCardPublicKeyRemainder = 40776,

	InterfaceDeviceSerialNumber = 40734,

	InternationalBankAccountNumber = 24403,

	IssuerActionCodeDefault = 40717,

	IssuerActionCodeDenial = 40718,

	IssuerActionCodeOnline = 40719,

	IssuerApplicationData = 40720,

	IssuerAuthenticationData = 145,

	IssuerCodeTableIndex = 40721,

	IssuerCountryCode = 24360,

	IssuerCountryCodeAlpha2Format = 24405,

	IssuerCountryCodeAlpha3Format = 24406,

	IssuerIdentificationNumber = 66,

	IssuerPublicKeyCertificate = 144,

	IssuerPublicKeyExponent = 40754,

	IssuerPublicKeyRemainder = 146,

	IssuerScriptCommand = 134,

	IssuerScriptIdentifier = 40728,

	IssuerScriptResults = 40795,

	IssuerScriptTemplate1 = 113,

	IssuerScriptTemplate2 = 114,

	IssuerUrl = 24400,

	LanguagePreference = 24365,

	LastOnlineApplicationTransactionCounterAtcRegister = 40723,

	LogEntry = 40781,

	LogFormat = 40783,

	LowerConsecutiveOfflineLimit = 40724,

	MerchantCategoryCode = 40725,

	MerchantIdentifier = 40726,

	MerchantNameandLocation = 40782,

	PersonalIdentificationNumberPinTryCounter = 40727,

	PointOfServiceEntryMode = 40761,

	ProcessingOptionsDataObjectList = 40760,

	ResponseMessageTemplateFormat1 = 128,

	ResponseMessageTemplateFormat2 = 119,

	ServiceCode = 24368,

	ShortFileIdentifier = 136,

	SignedDynamicApplicationData = 40779,

	SignedStaticApplicationData = 147,

	StaticDataAuthenticationTagList = 40778,

	TerminalCapabilities = 40755,

	TerminalCountryCode = 40730,

	TerminalFloorLimit = 40731,

	TerminalIdentification = 40732,

	TerminalRiskManagementData = 40733,

	TerminalTransactionQualifiers = 40806,

	TerminalType = 40757,

	TerminalVerificationResults = 149,

	Track1DiscretionaryData = 40735,

	Track2DiscretionaryData = 40736,

	Track2EquivalentData = 87,

	TransactionCategoryCode = 40787,

	TransactionCertificateHashValue = 152,

	TransactionCertificateDataObjectList = 151,

	TransactionCurrencyCode = 24362,

	TransactionCurrencyExponent = 24374,

	TransactionDate = 154,

	TransactionPersonalIdentificationNumberData = 153,

	TransactionReferenceCurrencyCode = 40764,

	TransactionReferenceCurrencyExponent = 40765,

	TransactionSequenceCounter = 40769,

	TransactionStatusInformation = 155,

	TransactionTime = 40737,

	TransactionType = 156,

	UnpredictableNumber = 40759,

	UpperConsecutiveOfflineLimit = 40739
}

declare class VTCTlvUtility extends NSObject {

	static alloc(): VTCTlvUtility; // inherited from NSObject

	static getTlvBytesByteValue(tag: VTCEmvTag, byteValue: number): NSData;

	static getTlvBytesValue(tag: VTCEmvTag, value: NSData): NSData;

	static getTlvTagBytes(tag: VTCEmvTag): NSData;

	static logTlvCollection(tlvCollection: NSDictionary<number, NSData>): void;

	static new(): VTCTlvUtility; // inherited from NSObject

	static parseTlvData(tlvData: NSData): NSDictionary<number, NSData>;

	static parseTlvDataOffset(tlvData: NSData, offset: number): NSDictionary<number, NSData>;

	static parseTlvDataOffsetLength(tlvData: NSData, offset: number, length: number): NSDictionary<number, NSData>;
}

declare var VTCTlvUtilityException: string;

declare class VTP extends NSObject {

	static alloc(): VTP; // inherited from NSObject

	static new(): VTP; // inherited from NSObject

	configuration: VTPConfiguration;

	readonly device: NSObject;

	readonly isConnectedToDevice: boolean;

	readonly isInitialized: boolean;

	addDelegate(delegate: VTPDelegate): void;

	deinitialize(): boolean;

	deleteStoredTransactionWithStateStoredError(tpId: string): void;

	forwardTransactionCompletionHandlerErrorHandler(request: VTPManuallyForwardRequest, completionHandler: (p1: VTPManuallyForwardResponse) => void, errorHandler: (p1: NSError) => void): void;

	getAllStoredTransactions(): NSArray<VTPStoreTransactionRecord>;

	getAllStoredTransactionsFromIndexForCountError(startIndex: number, count: number): NSArray<VTPStoreTransactionRecord>;

	getStoredTransactionByTpIdError(tpId: string): VTPStoreTransactionRecord;

	getStoredTransactionsWithStateError(state: VTPStoreTransactionState): NSArray<VTPStoreTransactionRecord>;

	inititializeWithConfigurationError(configuration: VTPConfiguration): boolean;

	processAuthorizationRequestCompletionHandlerErrorHandler(request: VTPAuthorizationRequest, completionHandler: (p1: VTPAuthorizationResponse) => void, errorHandler: (p1: NSError) => void): void;

	processGiftCardActivateRequestCompletionHandlerErrorHandler(request: VTPGiftCardActivateRequest, completionHandler: (p1: VTPGiftCardActivateResponse) => void, errorHandler: (p1: NSError) => void): void;

	processGiftCardBalanceInquiryRequestCompletionHandlerErrorHandler(request: VTPGiftCardBalanceInquiryRequest, completionHandler: (p1: VTPGiftCardBalanceInquiryResponse) => void, errorHandler: (p1: NSError) => void): void;

	processGiftCardReloadRequestCompletionHandlerErrorHandler(request: VTPGiftCardReloadRequest, completionHandler: (p1: VTPGiftCardReloadResponse) => void, errorHandler: (p1: NSError) => void): void;

	processRefundRequestCompletionHandlerErrorHandler(request: VTPRefundRequest, completionHandler: (p1: VTPRefundResponse) => void, errorHandler: (p1: NSError) => void): void;

	processSaleRequestCompletionHandlerErrorHandler(request: VTPSaleRequest, completionHandler: (p1: VTPSaleResponse) => void, errorHandler: (p1: NSError) => void): void;

	removeDelegate(delegate: VTPDelegate): void;

	stopCurrentFlow(): boolean;
}

declare const enum VTPAddressVerificationCondition {

	_VTPAddressVerificationConditionMinimum = 0,

	VTPAddressVerificationConditionNever = 0,

	VTPAddressVerificationConditionAlways = 1,

	VTPAddressVerificationConditionKeyed = 2,

	_VTPAddressVerificationConditionMaximum = 3
}

declare class VTPApplicationConfiguration extends NSObject {

	static alloc(): VTPApplicationConfiguration; // inherited from NSObject

	static new(): VTPApplicationConfiguration; // inherited from NSObject

	idlePrompt: string;

	mode: VTPApplicationMode;

	validateConfiguration(): boolean;
}

declare const enum VTPApplicationMode {

	_VTPApplicationModeMinimum = 0,

	VTPApplicationModeProduction = 0,

	VTPApplicationModeTestCertification = 1,

	_VTPApplicationModeMaximum = 2
}

declare class VTPAuthorizationRequest extends NSObject implements VTPFinancialRequestAmounts, VTPFinancialRequestBase, VTPFinancialRequestConvenienceFeeAmount, VTPFinancialRequestTipAmount {

	static alloc(): VTPAuthorizationRequest; // inherited from NSObject

	static new(): VTPAuthorizationRequest; // inherited from NSObject

	cardholderPresentCode: VTPCardHolderPresentCode; // inherited from VTPFinancialRequestBase

	clerkNumber: string; // inherited from VTPFinancialRequestBase

	convenienceFeeAmount: NSDecimalNumber; // inherited from VTPFinancialRequestConvenienceFeeAmount

	laneNumber: string; // inherited from VTPFinancialRequestBase

	referenceNumber: string; // inherited from VTPFinancialRequestBase

	salesTaxAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	shiftID: string; // inherited from VTPFinancialRequestBase

	ticketNumber: string; // inherited from VTPFinancialRequestBase

	tipAmount: NSDecimalNumber; // inherited from VTPFinancialRequestTipAmount

	transactionAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	normalizeAmounts(): void;
}

declare class VTPAuthorizationResponse extends NSObject implements VTPFinancialResponseAmounts, VTPFinancialResponseBase, VTPFinancialResponseCard, VTPFinancialResponseCardVerification, VTPFinancialResponseEmv, VTPFinancialResponseHost, VTPFinancialResponseTipAmount, VTPStoreAndForwardResponse {

	static alloc(): VTPAuthorizationResponse; // inherited from NSObject

	static new(): VTPAuthorizationResponse; // inherited from NSObject

	approvedAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	balanceAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	card: VTPFinancialCardData; // inherited from VTPFinancialResponseCard

	cardVerification: VTPCardVerificationData; // inherited from VTPFinancialResponseCardVerification

	emv: VTPEmvData; // inherited from VTPFinancialResponseEmv

	host: VTPHostResponseData; // inherited from VTPFinancialResponseHost

	isSignatureRequired: boolean; // inherited from VTPFinancialResponseBase

	paymentType: VTPPaymentType; // inherited from VTPFinancialResponseBase

	referenceNumber: string; // inherited from VTPFinancialResponseBase

	tipAmount: NSDecimalNumber; // inherited from VTPFinancialResponseTipAmount

	tpId: string; // inherited from VTPStoreAndForwardResponse

	transactionDateTime: Date; // inherited from VTPFinancialResponseBase

	transactionStatus: VTPTransactionStatus; // inherited from VTPFinancialResponseBase

	wasPinVerified: boolean; // inherited from VTPFinancialResponseBase

	wasProcessedOnline: boolean; // inherited from VTPFinancialResponseBase

	wasTransactionStored: boolean; // inherited from VTPStoreAndForwardResponse
}

declare class VTPCaPublicKey extends NSObject {

	static alloc(): VTPCaPublicKey; // inherited from NSObject

	static caPublicKeyWithIssuerRidModulusIndexExponentSha1HashExpirationDateIsTestKey(issuer: string, rid: string, modulus: string, index: number, exponent: number, sha1Hash: string, expirationDate: Date, isTestKey: boolean): VTPCaPublicKey;

	static new(): VTPCaPublicKey; // inherited from NSObject

	expirationDate: Date;

	exponent: number;

	index: number;

	isTestKey: boolean;

	issuer: string;

	modulus: string;

	rid: string;

	sha1Hash: string;

	validate(): boolean;
}

declare const enum VTPCardEntryMode {

	Keyed = 0,

	Swiped = 1,

	ContactlessMagneticStripe = 2,

	Icc = 3
}

declare const enum VTPCardHolderPresentCode {

	Default = 0,

	Unknown = 1,

	Present = 2,

	NotPresent = 3,

	MailOrder = 4,

	PhoneOrder = 5,

	StandingAuthorization = 6,

	ECommerce = 7
}

declare class VTPCardVerificationData extends NSObject {

	static alloc(): VTPCardVerificationData; // inherited from NSObject

	static new(): VTPCardVerificationData; // inherited from NSObject

	avsResponseCode: string;

	cvvResponseCode: string;
}

declare class VTPConfiguration extends NSObject {

	static alloc(): VTPConfiguration; // inherited from NSObject

	static new(): VTPConfiguration; // inherited from NSObject

	applicationConfiguration: VTPApplicationConfiguration;

	deviceConfiguration: VTPDeviceConfiguration;

	emvConfiguration: VTPEmvConfiguration;

	hostConfiguration: VTPHostConfiguration;

	storeAndForwardConfiguration: VTPStoreAndForwardConfiguration;

	transactionConfiguration: VTPTransactionConfiguration;

	validateConfiguration(): boolean;
}

declare const enum VTPCurrencyCode {

	_VTPCurrencyCodeMinimum = 0,

	VTPCurrencyCodeUsd = 840,

	_VTPCurrencyCodeMaximum = 841
}

interface VTPDelegate {

	deviceDidConnectModelSerialNumber?(description: string, model: string, serialNumber: string): void;

	deviceDidDisconnect?(): void;

	deviceDidError?(error: NSError): void;

	statusDidChangeDescription?(status: VTPStatus, description: string): void;
}
declare var VTPDelegate: {

	prototype: VTPDelegate;
};

declare class VTPDeviceConfiguration extends NSObject {

	static alloc(): VTPDeviceConfiguration; // inherited from NSObject

	static new(): VTPDeviceConfiguration; // inherited from NSObject

	deviceType: VTPDeviceType;

	isContactlessMsdEntryAllowed: boolean;

	isKeyedEntryAllowed: boolean;

	rebootTimeHour: number;

	rebootTimeMinutes: number;

	tcpIpConfiguration: VTPDeviceTcpIpConfiguration;

	terminalId: string;

	terminalType: VTPTerminalType;

	setRebootTimeWithHourWithMinutes(hour: number, minutes: number): void;

	validateConfiguration(): boolean;

	validateRebootTime(): boolean;
}

declare class VTPDeviceTcpIpConfiguration extends NSObject {

	static alloc(): VTPDeviceTcpIpConfiguration; // inherited from NSObject

	static new(): VTPDeviceTcpIpConfiguration; // inherited from NSObject

	ipAddress: string;

	port: number;

	validateConfiguration(): boolean;
}

declare const enum VTPDeviceType {

	_VTPDeviceTypeMinimum = 0,

	VTPDeviceTypeNull = 0,

	VTPDeviceTypeIngenicoRba = 1,

	VTPDeviceTypeIngenicoRbaTcpIp = 2,

	_VTPDeviceTypeMaximum = 3
}

declare class VTPEmvAid extends NSObject {

	static aidWithPixNameApplicationVersionNumber(pix: string, name: string, applicationVersionNumber: string): VTPEmvAid;

	static alloc(): VTPEmvAid; // inherited from NSObject

	static new(): VTPEmvAid; // inherited from NSObject

	applicationVersionNumber: string;

	name: string;

	pix: string;

	validate(): boolean;
}

declare class VTPEmvConfiguration extends NSObject {

	static alloc(): VTPEmvConfiguration; // inherited from NSObject

	static new(): VTPEmvConfiguration; // inherited from NSObject

	additionalTerminalCapability: string;

	caPublicKeys: NSArray<VTPCaPublicKey>;

	rids: NSArray<VTPEmvRid>;

	terminalCapability: string;

	validateConfiguration(): boolean;
}

declare class VTPEmvData extends NSObject {

	static alloc(): VTPEmvData; // inherited from NSObject

	static emvDataWithTagsIsApproved(tags: NSDictionary<number, NSData>, isApproved: boolean): VTPEmvData;

	static new(): VTPEmvData; // inherited from NSObject

	readonly applicationIdentifier: string;

	readonly applicationLabel: string;

	readonly applicationPreferredName: string;

	readonly cryptogram: string;

	readonly issuerCodeTableIndex: string;

	readonly tags: NSArray<string>;

	constructor(o: { tags: NSDictionary<number, NSData>; isApproved: boolean; });

	initWithTagsIsApproved(tags: NSDictionary<number, NSData>, isApproved: boolean): this;
}

declare class VTPEmvRid extends NSObject {

	static alloc(): VTPEmvRid; // inherited from NSObject

	static new(): VTPEmvRid; // inherited from NSObject

	aids: NSArray<VTPEmvAid>;

	applicationPartialMatch: boolean;

	applicationSelectionPrompt: boolean;

	defaultDynamicDataAuthenticationDataObjectList: string;

	defaultTransactionCertificateDataObjectList: string;

	name: string;

	randomSelectionMaximumTargetPercentage: number;

	randomSelectionTargetPercentage: number;

	randomSelectionThreshold: NSDecimalNumber;

	rid: string;

	terminalActionCodeDefault: string;

	terminalActionCodeDenial: string;

	terminalActionCodeOnline: string;

	terminalFloorLimit: NSDecimalNumber;

	validate(): boolean;
}

declare class VTPError extends NSObject {

	static alloc(): VTPError; // inherited from NSObject

	static makeError(code: VTPErrorCode): NSError;

	static makeErrorWithDescriptionDescription(code: VTPErrorCode, description: string): NSError;

	static new(): VTPError; // inherited from NSObject
}

declare const enum VTPErrorCode {

	CodeSuccess = 0,

	CodeParameterIsNil = 1,

	CodeParameterIsInvalid = 2,

	CodeConfigurationIsInvalid = 3,

	CodeDeviceSetupFailed = 4,

	CodeDeviceNotConnected = 5,

	CodeDeviceNotInitialized = 6,

	CodeDeviceDoesNotSupportCardInput = 7,

	CodeDeviceDoesNotSupportPinInput = 8,

	CodeDeviceDoesNotSupportEmv = 9,

	CodeFlowStepperUnknowError = 10,

	CodeFlowStepperTerminatedEarly = 11,

	CodeCardInputUnknown = 12,

	CodeCardInputTypeNotAccepted = 13,

	CodeInvalidPaymentType = 14,

	CodeUserDidNotConfirmAmount = 15,

	CodeSwipedCardIsChipCapable = 16,

	TransactionApprovedOfflineButCouldNotBeCompleted = 17,

	CodeDatabaseNotOpen = 18,

	CodeTransactionNotFound = 19,

	CodeDatabaseError = 20,

	CodeExpressIsNotAvailable = 21,

	CodeUnknown = 2147483647
}

declare var VTPErrorDomain: string;

declare class VTPFinancialCardData extends NSObject {

	static alloc(): VTPFinancialCardData; // inherited from NSObject

	static new(): VTPFinancialCardData; // inherited from NSObject

	cardHolderName: string;

	cardLogo: string;

	entryMode: VTPCardEntryMode;

	expirationMonth: string;

	expirationYear: string;

	maskedAccountNumber: string;
}

interface VTPFinancialRequestAmounts {

	salesTaxAmount: NSDecimalNumber;

	transactionAmount: NSDecimalNumber;
}
declare var VTPFinancialRequestAmounts: {

	prototype: VTPFinancialRequestAmounts;
};

interface VTPFinancialRequestBase {

	cardholderPresentCode: VTPCardHolderPresentCode;

	clerkNumber: string;

	laneNumber: string;

	referenceNumber: string;

	shiftID: string;

	ticketNumber: string;

	normalizeAmounts(): void;
}
declare var VTPFinancialRequestBase: {

	prototype: VTPFinancialRequestBase;
};

interface VTPFinancialRequestConvenienceFeeAmount {

	convenienceFeeAmount: NSDecimalNumber;
}
declare var VTPFinancialRequestConvenienceFeeAmount: {

	prototype: VTPFinancialRequestConvenienceFeeAmount;
};

interface VTPFinancialRequestTipAmount {

	tipAmount: NSDecimalNumber;
}
declare var VTPFinancialRequestTipAmount: {

	prototype: VTPFinancialRequestTipAmount;
};

interface VTPFinancialResponseAmounts {

	approvedAmount: NSDecimalNumber;

	balanceAmount: NSDecimalNumber;
}
declare var VTPFinancialResponseAmounts: {

	prototype: VTPFinancialResponseAmounts;
};

interface VTPFinancialResponseBase {

	isSignatureRequired: boolean;

	paymentType: VTPPaymentType;

	referenceNumber: string;

	transactionDateTime: Date;

	transactionStatus: VTPTransactionStatus;

	wasPinVerified: boolean;

	wasProcessedOnline: boolean;
}
declare var VTPFinancialResponseBase: {

	prototype: VTPFinancialResponseBase;
};

interface VTPFinancialResponseCard {

	card: VTPFinancialCardData;
}
declare var VTPFinancialResponseCard: {

	prototype: VTPFinancialResponseCard;
};

interface VTPFinancialResponseCardVerification {

	cardVerification: VTPCardVerificationData;
}
declare var VTPFinancialResponseCardVerification: {

	prototype: VTPFinancialResponseCardVerification;
};

interface VTPFinancialResponseCashbackAmount {

	cashbackAmount: NSDecimalNumber;
}
declare var VTPFinancialResponseCashbackAmount: {

	prototype: VTPFinancialResponseCashbackAmount;
};

interface VTPFinancialResponseEmv {

	emv: VTPEmvData;
}
declare var VTPFinancialResponseEmv: {

	prototype: VTPFinancialResponseEmv;
};

interface VTPFinancialResponseHost {

	host: VTPHostResponseData;
}
declare var VTPFinancialResponseHost: {

	prototype: VTPFinancialResponseHost;
};

interface VTPFinancialResponseTipAmount {

	tipAmount: NSDecimalNumber;
}
declare var VTPFinancialResponseTipAmount: {

	prototype: VTPFinancialResponseTipAmount;
};

declare class VTPGiftCardActivateRequest extends NSObject implements VTPFinancialRequestAmounts, VTPFinancialRequestBase {

	static alloc(): VTPGiftCardActivateRequest; // inherited from NSObject

	static new(): VTPGiftCardActivateRequest; // inherited from NSObject

	cardholderPresentCode: VTPCardHolderPresentCode; // inherited from VTPFinancialRequestBase

	clerkNumber: string; // inherited from VTPFinancialRequestBase

	laneNumber: string; // inherited from VTPFinancialRequestBase

	referenceNumber: string; // inherited from VTPFinancialRequestBase

	salesTaxAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	shiftID: string; // inherited from VTPFinancialRequestBase

	ticketNumber: string; // inherited from VTPFinancialRequestBase

	transactionAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	normalizeAmounts(): void;
}

declare class VTPGiftCardActivateResponse extends NSObject implements VTPFinancialResponseAmounts, VTPFinancialResponseBase, VTPFinancialResponseCard, VTPFinancialResponseHost {

	static alloc(): VTPGiftCardActivateResponse; // inherited from NSObject

	static new(): VTPGiftCardActivateResponse; // inherited from NSObject

	approvedAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	balanceAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	card: VTPFinancialCardData; // inherited from VTPFinancialResponseCard

	host: VTPHostResponseData; // inherited from VTPFinancialResponseHost

	isSignatureRequired: boolean; // inherited from VTPFinancialResponseBase

	paymentType: VTPPaymentType; // inherited from VTPFinancialResponseBase

	referenceNumber: string; // inherited from VTPFinancialResponseBase

	transactionDateTime: Date; // inherited from VTPFinancialResponseBase

	transactionStatus: VTPTransactionStatus; // inherited from VTPFinancialResponseBase

	wasPinVerified: boolean; // inherited from VTPFinancialResponseBase

	wasProcessedOnline: boolean; // inherited from VTPFinancialResponseBase
}

declare class VTPGiftCardBalanceInquiryRequest extends NSObject implements VTPFinancialRequestBase {

	static alloc(): VTPGiftCardBalanceInquiryRequest; // inherited from NSObject

	static new(): VTPGiftCardBalanceInquiryRequest; // inherited from NSObject

	cardholderPresentCode: VTPCardHolderPresentCode; // inherited from VTPFinancialRequestBase

	clerkNumber: string; // inherited from VTPFinancialRequestBase

	laneNumber: string; // inherited from VTPFinancialRequestBase

	referenceNumber: string; // inherited from VTPFinancialRequestBase

	shiftID: string; // inherited from VTPFinancialRequestBase

	ticketNumber: string; // inherited from VTPFinancialRequestBase

	normalizeAmounts(): void;
}

declare class VTPGiftCardBalanceInquiryResponse extends NSObject implements VTPFinancialResponseAmounts, VTPFinancialResponseBase, VTPFinancialResponseCard, VTPFinancialResponseHost {

	static alloc(): VTPGiftCardBalanceInquiryResponse; // inherited from NSObject

	static new(): VTPGiftCardBalanceInquiryResponse; // inherited from NSObject

	approvedAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	balanceAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	card: VTPFinancialCardData; // inherited from VTPFinancialResponseCard

	host: VTPHostResponseData; // inherited from VTPFinancialResponseHost

	isSignatureRequired: boolean; // inherited from VTPFinancialResponseBase

	paymentType: VTPPaymentType; // inherited from VTPFinancialResponseBase

	referenceNumber: string; // inherited from VTPFinancialResponseBase

	transactionDateTime: Date; // inherited from VTPFinancialResponseBase

	transactionStatus: VTPTransactionStatus; // inherited from VTPFinancialResponseBase

	wasPinVerified: boolean; // inherited from VTPFinancialResponseBase

	wasProcessedOnline: boolean; // inherited from VTPFinancialResponseBase
}

declare class VTPGiftCardReloadRequest extends NSObject implements VTPFinancialRequestAmounts, VTPFinancialRequestBase {

	static alloc(): VTPGiftCardReloadRequest; // inherited from NSObject

	static new(): VTPGiftCardReloadRequest; // inherited from NSObject

	cardholderPresentCode: VTPCardHolderPresentCode; // inherited from VTPFinancialRequestBase

	clerkNumber: string; // inherited from VTPFinancialRequestBase

	laneNumber: string; // inherited from VTPFinancialRequestBase

	referenceNumber: string; // inherited from VTPFinancialRequestBase

	salesTaxAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	shiftID: string; // inherited from VTPFinancialRequestBase

	ticketNumber: string; // inherited from VTPFinancialRequestBase

	transactionAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	normalizeAmounts(): void;
}

declare class VTPGiftCardReloadResponse extends NSObject implements VTPFinancialResponseAmounts, VTPFinancialResponseBase, VTPFinancialResponseCard, VTPFinancialResponseHost {

	static alloc(): VTPGiftCardReloadResponse; // inherited from NSObject

	static new(): VTPGiftCardReloadResponse; // inherited from NSObject

	approvedAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	balanceAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	card: VTPFinancialCardData; // inherited from VTPFinancialResponseCard

	host: VTPHostResponseData; // inherited from VTPFinancialResponseHost

	isSignatureRequired: boolean; // inherited from VTPFinancialResponseBase

	paymentType: VTPPaymentType; // inherited from VTPFinancialResponseBase

	referenceNumber: string; // inherited from VTPFinancialResponseBase

	transactionDateTime: Date; // inherited from VTPFinancialResponseBase

	transactionStatus: VTPTransactionStatus; // inherited from VTPFinancialResponseBase

	wasPinVerified: boolean; // inherited from VTPFinancialResponseBase

	wasProcessedOnline: boolean; // inherited from VTPFinancialResponseBase
}

declare class VTPHostConfiguration extends NSObject {

	static alloc(): VTPHostConfiguration; // inherited from NSObject

	static new(): VTPHostConfiguration; // inherited from NSObject

	acceptorId: string;

	accountId: string;

	accountToken: string;

	applicationId: string;

	applicationName: string;

	applicationVersion: string;

	storeCardID: string;

	storeCardPassword: string;

	validateConfiguration(): boolean;
}

declare class VTPHostResponseData extends NSObject {

	static alloc(): VTPHostResponseData; // inherited from NSObject

	static new(): VTPHostResponseData; // inherited from NSObject

	approvalNumber: string;

	expressResponseCode: string;

	expressResponseMessage: string;

	expressResponseXml: string;

	expressTransactionDate: string;

	expressTransactionTime: string;

	expressTransactionTimezone: string;

	hostResponseCode: string;

	hostResponseMessage: string;

	processorName: string;

	transactionID: string;
}

declare class VTPManuallyForwardRequest extends NSObject implements VTPFinancialRequestAmounts, VTPFinancialRequestConvenienceFeeAmount {

	static alloc(): VTPManuallyForwardRequest; // inherited from NSObject

	static new(): VTPManuallyForwardRequest; // inherited from NSObject

	tpId: string;

	convenienceFeeAmount: NSDecimalNumber; // inherited from VTPFinancialRequestConvenienceFeeAmount

	salesTaxAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	transactionAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts
}

declare class VTPManuallyForwardResponse extends NSObject implements VTPFinancialResponseAmounts, VTPFinancialResponseBase {

	static alloc(): VTPManuallyForwardResponse; // inherited from NSObject

	static new(): VTPManuallyForwardResponse; // inherited from NSObject

	response: NSObject;

	transactionId: string;

	approvedAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	balanceAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	isSignatureRequired: boolean; // inherited from VTPFinancialResponseBase

	paymentType: VTPPaymentType; // inherited from VTPFinancialResponseBase

	referenceNumber: string; // inherited from VTPFinancialResponseBase

	transactionDateTime: Date; // inherited from VTPFinancialResponseBase

	transactionStatus: VTPTransactionStatus; // inherited from VTPFinancialResponseBase

	wasPinVerified: boolean; // inherited from VTPFinancialResponseBase

	wasProcessedOnline: boolean; // inherited from VTPFinancialResponseBase
}

declare const enum VTPMarketCode {

	_VTPMarketCodeMinimum = 0,

	VTPMarketCodeAutoRental = 0,

	VTPMarketCodeDirectMarketing = 1,

	VTPMarketCodeECommerce = 2,

	VTPMarketCodeFoodRestaurant = 3,

	VTPMarketCodeHotelLodging = 4,

	VTPMarketCodePetroleum = 5,

	VTPMarketCodeRetail = 6,

	VTPMarketCodeQsr = 7,

	_VTPMarketCodeMaximum = 8
}

declare const enum VTPPaymentType {

	Unknown = 0,

	Credit = 1,

	Debit = 2,

	GiftCard = 3
}

declare class VTPRefundRequest extends NSObject implements VTPFinancialRequestAmounts, VTPFinancialRequestBase, VTPFinancialRequestConvenienceFeeAmount {

	static alloc(): VTPRefundRequest; // inherited from NSObject

	static new(): VTPRefundRequest; // inherited from NSObject

	cardholderPresentCode: VTPCardHolderPresentCode; // inherited from VTPFinancialRequestBase

	clerkNumber: string; // inherited from VTPFinancialRequestBase

	convenienceFeeAmount: NSDecimalNumber; // inherited from VTPFinancialRequestConvenienceFeeAmount

	laneNumber: string; // inherited from VTPFinancialRequestBase

	referenceNumber: string; // inherited from VTPFinancialRequestBase

	salesTaxAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	shiftID: string; // inherited from VTPFinancialRequestBase

	ticketNumber: string; // inherited from VTPFinancialRequestBase

	transactionAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	normalizeAmounts(): void;
}

declare class VTPRefundResponse extends NSObject implements VTPFinancialResponseBase, VTPFinancialResponseCard, VTPFinancialResponseCardVerification, VTPFinancialResponseEmv, VTPFinancialResponseHost, VTPStoreAndForwardResponse {

	static alloc(): VTPRefundResponse; // inherited from NSObject

	static new(): VTPRefundResponse; // inherited from NSObject

	card: VTPFinancialCardData; // inherited from VTPFinancialResponseCard

	cardVerification: VTPCardVerificationData; // inherited from VTPFinancialResponseCardVerification

	emv: VTPEmvData; // inherited from VTPFinancialResponseEmv

	host: VTPHostResponseData; // inherited from VTPFinancialResponseHost

	isSignatureRequired: boolean; // inherited from VTPFinancialResponseBase

	paymentType: VTPPaymentType; // inherited from VTPFinancialResponseBase

	referenceNumber: string; // inherited from VTPFinancialResponseBase

	tpId: string; // inherited from VTPStoreAndForwardResponse

	transactionDateTime: Date; // inherited from VTPFinancialResponseBase

	transactionStatus: VTPTransactionStatus; // inherited from VTPFinancialResponseBase

	wasPinVerified: boolean; // inherited from VTPFinancialResponseBase

	wasProcessedOnline: boolean; // inherited from VTPFinancialResponseBase

	wasTransactionStored: boolean; // inherited from VTPStoreAndForwardResponse
}

declare class VTPSaleRequest extends NSObject implements VTPFinancialRequestAmounts, VTPFinancialRequestBase, VTPFinancialRequestConvenienceFeeAmount, VTPFinancialRequestTipAmount {

	static alloc(): VTPSaleRequest; // inherited from NSObject

	static new(): VTPSaleRequest; // inherited from NSObject

	cardholderPresentCode: VTPCardHolderPresentCode; // inherited from VTPFinancialRequestBase

	clerkNumber: string; // inherited from VTPFinancialRequestBase

	convenienceFeeAmount: NSDecimalNumber; // inherited from VTPFinancialRequestConvenienceFeeAmount

	laneNumber: string; // inherited from VTPFinancialRequestBase

	referenceNumber: string; // inherited from VTPFinancialRequestBase

	salesTaxAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	shiftID: string; // inherited from VTPFinancialRequestBase

	ticketNumber: string; // inherited from VTPFinancialRequestBase

	tipAmount: NSDecimalNumber; // inherited from VTPFinancialRequestTipAmount

	transactionAmount: NSDecimalNumber; // inherited from VTPFinancialRequestAmounts

	normalizeAmounts(): void;
}

declare class VTPSaleResponse extends NSObject implements VTPFinancialResponseAmounts, VTPFinancialResponseBase, VTPFinancialResponseCard, VTPFinancialResponseCardVerification, VTPFinancialResponseCashbackAmount, VTPFinancialResponseEmv, VTPFinancialResponseHost, VTPFinancialResponseTipAmount, VTPStoreAndForwardResponse {

	static alloc(): VTPSaleResponse; // inherited from NSObject

	static new(): VTPSaleResponse; // inherited from NSObject

	approvedAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	balanceAmount: NSDecimalNumber; // inherited from VTPFinancialResponseAmounts

	card: VTPFinancialCardData; // inherited from VTPFinancialResponseCard

	cardVerification: VTPCardVerificationData; // inherited from VTPFinancialResponseCardVerification

	cashbackAmount: NSDecimalNumber; // inherited from VTPFinancialResponseCashbackAmount

	emv: VTPEmvData; // inherited from VTPFinancialResponseEmv

	host: VTPHostResponseData; // inherited from VTPFinancialResponseHost

	isSignatureRequired: boolean; // inherited from VTPFinancialResponseBase

	paymentType: VTPPaymentType; // inherited from VTPFinancialResponseBase

	referenceNumber: string; // inherited from VTPFinancialResponseBase

	tipAmount: NSDecimalNumber; // inherited from VTPFinancialResponseTipAmount

	tpId: string; // inherited from VTPStoreAndForwardResponse

	transactionDateTime: Date; // inherited from VTPFinancialResponseBase

	transactionStatus: VTPTransactionStatus; // inherited from VTPFinancialResponseBase

	wasPinVerified: boolean; // inherited from VTPFinancialResponseBase

	wasProcessedOnline: boolean; // inherited from VTPFinancialResponseBase

	wasTransactionStored: boolean; // inherited from VTPStoreAndForwardResponse
}

declare const enum VTPStatus {

	None = 0,

	Initializing = 1,

	Deinitializing = 2,

	RunningSale = 3,

	RunningRefund = 4,

	RunningAuthorization = 5,

	RunningGiftCardActivate = 6,

	RunningGiftCardBalanceInquiry = 7,

	RunningGiftCardReload = 8,

	GettingCardInput = 9,

	ProcessingCardInput = 10,

	GettingPaymentType = 11,

	GettingConvenienceFeeAmountConfirmation = 12,

	GettingWantTip = 13,

	GettingTipSelection = 14,

	GettingTipEntry = 15,

	GettingWantCashback = 16,

	GettingCashbackSelection = 17,

	GettingCashbackEntry = 18,

	GettingPostalCode = 19,

	GettingTotalAmountConfirmation = 20,

	GettingPin = 21,

	GettingContinuingEmvTransaction = 22,

	SendingToHost = 23,

	GettingFinalizingEmvTransaction = 24,

	Finalizing = 25
}

declare class VTPStoreAndForwardConfiguration extends NSObject {

	static alloc(): VTPStoreAndForwardConfiguration; // inherited from NSObject

	static new(): VTPStoreAndForwardConfiguration; // inherited from NSObject

	isStoringTransactionsAllowed: boolean;

	numberOfDaysToRetainProcessedTransactions: number;

	shouldTransactionsBeAutomaticallyForwarded: boolean;

	transactionAmountLimit: number;

	unprocessedTotalAmountLimit: number;

	validateConfiguration(): boolean;
}

interface VTPStoreAndForwardResponse {

	tpId: string;

	wasTransactionStored: boolean;
}
declare var VTPStoreAndForwardResponse: {

	prototype: VTPStoreAndForwardResponse;
};

declare class VTPStoreTransactionRecord extends NSObject {

	static alloc(): VTPStoreTransactionRecord; // inherited from NSObject

	static new(): VTPStoreTransactionRecord; // inherited from NSObject

	response: NSObject;

	state: VTPStoreTransactionState;

	totalAmount: string;

	tpId: string;

	transactionId: string;

	transactionType: VTPTransactionType;
}

declare const enum VTPStoreTransactionState {

	Stored = 0,

	StoredPendingGenac2 = 1,

	Processing = 2,

	Processed = 3,

	Deleted = 4
}

declare const enum VTPTerminalType {

	_VTPTerminalTypeMinimum = 0,

	VTPTerminalTypeUnknown = 0,

	VTPTerminalTypePointOfSale = 1,

	VTPTerminalTypeECommerce = 2,

	VTPTerminalTypeMoto = 3,

	VTPTerminalTypeFuelPump = 4,

	VTPTerminalTypeAtm = 5,

	VTPTerminalTypeVoice = 6,

	VTPTerminalTypeMobile = 7,

	_VTPTerminalTypeMaximum = 8
}

declare class VTPTransactionConfiguration extends NSObject {

	static alloc(): VTPTransactionConfiguration; // inherited from NSObject

	static new(): VTPTransactionConfiguration; // inherited from NSObject

	addressVerificationCondition: VTPAddressVerificationCondition;

	areDuplicateTransactionsAllowed: boolean;

	arePartialApprovalsAllowed: boolean;

	cashbackEntryIncrement: number;

	cashbackSelections: NSArray<number>;

	currencyCode: VTPCurrencyCode;

	isCashbackAllowed: boolean;

	isCashbackEntryAllowed: boolean;

	isDebitAllowed: boolean;

	isEmvAllowed: boolean;

	isGiftCardAllowed: boolean;

	isTipAllowed: boolean;

	isTipEntryAllowed: boolean;

	marketCode: VTPMarketCode;

	maximumCashbackEntry: number;

	shouldConfirmAmount: boolean;

	shouldPromptForKeyedSecurityCode: boolean;

	tipAmounts: NSArray<number>;

	tipPercentages: NSArray<number>;

	validateConfiguration(): boolean;
}

declare const enum VTPTransactionStatus {

	Unknown = 0,

	Approved = 1,

	PartiallyApproved = 2,

	ApprovedExceptCashback = 3,

	ApprovedByMerchant = 4,

	CallIssuer = 5,

	Declined = 6,

	NeedsToBeReversed = 7
}

declare class VTPTransactionStatusUtility extends NSObject {

	static alloc(): VTPTransactionStatusUtility; // inherited from NSObject

	static isTransactionStatusApproved(transactionStatus: VTPTransactionStatus): boolean;

	static new(): VTPTransactionStatusUtility; // inherited from NSObject
}

declare const enum VTPTransactionType {

	Unknown = 0,

	Sale = 1,

	Refund = 2,

	AuthorizationOnly = 3,

	Force = 4,

	FullReversal = 5,

	GiftCardActivate = 6,

	GiftCardBalanceInquiry = 7,

	GiftCardReload = 8
}

declare class VXP extends NSObject {

	static alloc(): VXP; // inherited from NSObject

	static checkConnectionToHost(host: string | interop.Pointer | interop.Reference<any>): boolean;

	static new(): VXP; // inherited from NSObject

	TestCertification: boolean;

	checkConnectionToExpress(): boolean;

	sendRequestTimeoutAutoReversalCompletionHandlerErrorHandler(request: VXPRequest, timeout: number, autoReversal: boolean, completionHandler: (p1: VXPResponse) => void, errorHandler: (p1: NSError) => void): void;

	sendRequestTimeoutCompletionHandlerErrorHandler(request: VXPRequest, timeout: number, completionHandler: (p1: VXPResponse) => void, errorHandler: (p1: NSError) => void): void;
}

declare class VXPAddress extends VXPBase {

	static alloc(): VXPAddress; // inherited from NSObject

	static new(): VXPAddress; // inherited from NSObject

	BillingAddress1: string;

	BillingAddress2: string;

	BillingCity: string;

	BillingEmail: string;

	BillingName: string;

	BillingPhone: string;

	BillingState: string;

	BillingZipcode: string;

	ShippingAddress1: string;

	ShippingAddress2: string;

	ShippingCity: string;

	ShippingEmail: string;

	ShippingName: string;

	ShippingPhone: string;

	ShippingState: string;

	ShippingZipcode: string;
}

declare class VXPApplication extends VXPBase {

	static alloc(): VXPApplication; // inherited from NSObject

	static applicationWithValuesApplicationNameApplicationVersion(applicationID: string, applicationName: string, applicationVersion: string): VXPApplication;

	static new(): VXPApplication; // inherited from NSObject

	ApplicationID: string;

	ApplicationName: string;

	ApplicationVersion: string;

	constructor(o: { values: string; applicationName: string; applicationVersion: string; });

	initWithValuesApplicationNameApplicationVersion(applicationID: string, applicationName: string, applicationVersion: string): this;
}

declare class VXPBIN extends VXPBase {

	static alloc(): VXPBIN; // inherited from NSObject

	static new(): VXPBIN; // inherited from NSObject

	BINDecorator: string;

	BINTypeCode: VXPBINTypeCode;

	BINTypeValue: string;
}

declare const enum VXPBINTypeCode {

	NotSet = -2147483648,

	NotFound = 0,

	Debit = 1,

	HealthCare = 2,

	Commercial = 3,

	Other = 4,

	PrepaidDebit = 5
}

declare class VXPBase extends NSObject {

	static alloc(): VXPBase; // inherited from NSObject

	static new(): VXPBase; // inherited from NSObject

	dateFromStringsTime(date: string, time: string): Date;

	dateFromStringsTimeTimezone(date: string, time: string, timezone: string): Date;

	dateToStrings(dateTime: Date): NSArray<any>;
}

declare class VXPBatch extends VXPBase {

	static alloc(): VXPBatch; // inherited from NSObject

	static new(): VXPBatch; // inherited from NSObject

	BatchCloseType: VXPBatchCloseType;

	BatchGroupingCode: VXPBatchGroupingCode;

	BatchIndexCode: VXPBatchIndexCode;

	BatchQueryType: VXPBatchQueryType;

	HostBatchAmount: NSDecimalNumber;

	HostBatchCount: number;

	HostBatchID: string;

	HostBatchItems: string;

	HostCreditReturnAmount: NSDecimalNumber;

	HostCreditReturnCount: number;

	HostCreditSaleAmount: NSDecimalNumber;

	HostCreditSaleCount: number;

	HostDebitReturnAmount: NSDecimalNumber;

	HostDebitReturnCount: number;

	HostDebitSaleAmount: NSDecimalNumber;

	HostDebitSaleCount: number;

	HostItemID: string;

	HostReversalQueueID: string;
}

declare const enum VXPBatchCloseType {

	NotSet = -2147483648,

	Regular = 0,

	Force = 1
}

declare const enum VXPBatchGroupingCode {

	NotSet = -2147483648,

	Full = 0,

	Single = 1
}

declare const enum VXPBatchIndexCode {

	NotSet = -2147483648,

	Current = 0,

	FirstPrevious = 1
}

declare const enum VXPBatchQueryType {

	NotSet = -2147483648,

	Total = 0,

	Item = 1
}

declare const enum VXPBooleanType {

	NotSet = -2147483648,

	Null = -1,

	False = 0,

	True = 1
}

declare const enum VXPCVVPresenceCode {

	NotSet = -2147483648,

	Default = 0,

	NotProvided = 1,

	Provided = 2,

	Illegible = 3,

	CustomerIllegible = 4
}

declare const enum VXPCVVResponseType {

	NotSet = -2147483648,

	Regular = 0,

	Extended = 1
}

declare class VXPCard extends VXPBase {

	static alloc(): VXPCard; // inherited from NSObject

	static new(): VXPCard; // inherited from NSObject

	AVSResponseCode: string;

	CAVV: string;

	CAVVResponseCode: string;

	CVV: string;

	CVVResponseCode: string;

	CardDataKeySerialNumber: string;

	CardLogo: string;

	CardNumber: string;

	CardNumberMasked: string;

	CardholderName: string;

	EMVData: string;

	EMVDataKeySerialNumber: string;

	EncryptedCardData: string;

	EncryptedEMVData: string;

	EncryptedEMVFormat: VXPEncryptedEmvFormat;

	EncryptedFormat: VXPCardEncryptedFormat;

	EncryptedTrack1Data: string;

	EncryptedTrack2Data: string;

	ExpirationMonth: string;

	ExpirationYear: string;

	GiftCardSecurityCode: string;

	KeySerialNumber: string;

	MagneprintData: string;

	PINBlock: string;

	Track1Data: string;

	Track2Data: string;

	Track3Data: string;

	TruncatedCardNumber: string;

	XID: string;
}

declare const enum VXPCardEncryptedFormat {

	FormatNotSet = -2147483648,

	FormatDefault = 0,

	Format1 = 1,

	Format2 = 2,

	Format3 = 3,

	Format4 = 4,

	Format5 = 5,

	Format6 = 6,

	Format7 = 7
}

declare const enum VXPCardHolderPresentCode {

	NotSet = -2147483648,

	Default = 0,

	Unknown = 1,

	Present = 2,

	NotPresent = 3,

	MailOrder = 4,

	PhoneOrder = 5,

	StandingAuthorization = 6,

	ECommerce = 7
}

declare const enum VXPCardInputCode {

	NotSet = -2147483648,

	Default = 0,

	Unknown = 1,

	MagstripeRead = 2,

	ContactlessMagstripeRead = 3,

	ManualKeyed = 4,

	ManualKeyedMagstripeFailure = 5,

	ChipRead = 6,

	ContactlessChipRead = 7,

	ManualKeyedChipReadFailure = 8,

	MagstripeReadChipReadFailure = 9
}

declare const enum VXPCardPresentCode {

	NotSet = -2147483648,

	Default = 0,

	Unknown = 1,

	Present = 2,

	NotPresent = 3
}

declare const enum VXPConsentCode {

	NotSet = -2147483648,

	NotSpecified = 0,

	FaceToFace = 1,

	Phone = 2,

	Internet = 3
}

declare class VXPCredentials extends VXPBase {

	static alloc(): VXPCredentials; // inherited from NSObject

	static credentialsWithValuesAccountTokenAcceptorID(accountID: string, accountToken: string, acceptorID: string): VXPCredentials;

	static new(): VXPCredentials; // inherited from NSObject

	AcceptorID: string;

	AccountID: string;

	AccountToken: string;

	NewAccountToken: string;

	constructor(o: { values: string; accountToken: string; acceptorID: string; });

	initWithValuesAccountTokenAcceptorID(accountID: string, accountToken: string, acceptorID: string): this;
}

declare const enum VXPDeviceInputCode {

	NotSet = -2147483648,

	NotUsed = 0,

	Unknown = 1,

	Terminal = 2,

	Keyboard = 3
}

declare class VXPEBT extends VXPBase {

	static alloc(): VXPEBT; // inherited from NSObject

	static new(): VXPEBT; // inherited from NSObject

	EBTTypeIndex: VXPEBTTypeIndex;

	VoucherNumber: string;
}

declare const enum VXPEBTTypeIndex {

	NotSet = -2147483648,

	FoodStamp = 1,

	CashBenefit = 2
}

declare const enum VXPEncryptedEmvFormat {

	FormatNotSet = -2147483648,

	FormatDefault = 0,

	Format1 = 1,

	Format2 = 2,

	Format3 = 3
}

declare const enum VXPError {

	None = 0,

	Unknown = 1,

	Reversed = 2,

	NeedsReversal = 3,

	SerializeError = 4,

	SendReceiveError = 5,

	StatusCodeError = 6,

	DecodeError = 7,

	DeserializeError = 8,

	HostedPaymentsCancelled = 9,

	HostedPaymentsError = 10
}

declare var VXPErrorDomain: string;

declare class VXPExtendedParameters extends VXPBase {

	static alloc(): VXPExtendedParameters; // inherited from NSObject

	static new(): VXPExtendedParameters; // inherited from NSObject

	PaymentAccount: VXPPaymentAccount;

	Token: VXPToken;
}

declare const enum VXPMarketCode {

	NotSet = -2147483648,

	Default = 0,

	AutoRental = 1,

	DirectMarketing = 2,

	ECommerce = 3,

	FoodRestaurant = 4,

	HotelLodging = 5,

	Petroleum = 6,

	Retail = 7,

	QSR = 8
}

declare const enum VXPMotoECICode {

	NotSet = -2147483648,

	Default = 0,

	NotUsed = 1,

	Single = 2,

	Recurring = 3,

	Installment = 4,

	SecureElectronicCommerce = 5,

	NonAuthenticatedSecureTransaction = 6,

	NonAuthenticatedSecureECommerceTransaction = 7,

	NonSecureECommerceTransaction = 8
}

declare const enum VXPPASSUpdaterBatchStatus {

	NotSet = -2147483648,

	Null = 0,

	IncludedInNextBatch = 1,

	NotIncludedInNextBatch = 2
}

declare const enum VXPPASSUpdaterOption {

	NotSet = -2147483648,

	Null = 0,

	AutoUpdateEnabled = 1,

	AutoUpdateDisabled = 2
}

declare const enum VXPPASSUpdaterStatus {

	NotSet = -2147483648,

	Null = 0,

	UpdateInProgress = 1,

	MatchNoChanges = 2,

	MatchAccountChange = 3,

	MatchExpirationChange = 4,

	MatchAccountClosed = 5,

	MatchContactCardholder = 6,

	NoMatchParticipating = 7,

	NoMatchNonParticipating = 8,

	InvalidInfo = 9,

	NoResponse = 10,

	NotAllowed = 11,

	Error = 12,

	PASSUpdaterDisabled = 13,

	NotUpdated = 14
}

declare class VXPPaging extends VXPBase {

	static alloc(): VXPPaging; // inherited from NSObject

	static new(): VXPPaging; // inherited from NSObject

	Page: number;
}

declare class VXPParameters extends VXPBase {

	static alloc(): VXPParameters; // inherited from NSObject

	static new(): VXPParameters; // inherited from NSObject

	ApplicationID: string;

	ApprovalNumber: string;

	ApprovedAmount: NSDecimalNumber;

	ExpressTransactionDate: string;

	ExpressTransactionDateTimeEx: Date;

	ExpressTransactionTime: string;

	HostBatchID: string;

	HostItemID: string;

	HostReversalQueueID: string;

	OriginalAuthorizedAmount: NSDecimalNumber;

	ReferenceNumber: string;

	ReverseOrder: VXPBooleanType;

	ShiftID: string;

	SourceTransactionID: string;

	TerminalID: string;

	TerminalType: VXPTerminalType;

	TrackingID: string;

	TransactionAmount: NSDecimalNumber;

	TransactionDateTimeBegin: string;

	readonly TransactionDateTimeBeginEx: Date;

	TransactionDateTimeEnd: string;

	readonly TransactionDateTimeEndEx: Date;

	readonly TransactionID: string;

	TransactionSetupID: string;

	TransactionStatus: string;

	TransactionType: string;

	XID: string;
}

declare class VXPPaymentAccount extends VXPBase {

	static alloc(): VXPPaymentAccount; // inherited from NSObject

	static new(): VXPPaymentAccount; // inherited from NSObject

	static parseQueryData(queryData: string): NSArray<any>;

	static parseQueryItems(queryData: string): NSArray<any>;

	static parseRecordCount(queryData: string): NSArray<any>;

	static parseTokenReport(queryData: string): NSArray<any>;

	PASSUpdaterBatchStatus: VXPPASSUpdaterBatchStatus;

	PASSUpdaterOption: VXPPASSUpdaterOption;

	PaymentAccountID: string;

	PaymentAccountReferenceNumber: string;

	PaymentAccountType: VXPPaymentAccountType;

	TransactionSetupID: string;
}

declare class VXPPaymentAccountParameters extends VXPBase {

	static alloc(): VXPPaymentAccountParameters; // inherited from NSObject

	static new(): VXPPaymentAccountParameters; // inherited from NSObject

	ExpirationMonthBegin: string;

	ExpirationMonthEnd: string;

	ExpirationYearBegin: string;

	ExpirationYearEnd: string;

	PASSUpdaterBatchStatus: VXPPASSUpdaterBatchStatus;

	PASSUpdaterDateTimeBegin: string;

	readonly PASSUpdaterDateTimeBeginEx: Date;

	PASSUpdaterDateTimeEnd: string;

	readonly PASSUpdaterDateTimeEndEx: Date;

	PASSUpdaterStatus: VXPPASSUpdaterStatus;

	PaymentAccountID: string;

	PaymentAccountReferenceNumber: string;

	PaymentAccountType: VXPPaymentAccountType;

	PaymentBrand: string;

	TransactionSetupID: string;
}

declare class VXPPaymentAccountQueryItem extends VXPBase {

	static alloc(): VXPPaymentAccountQueryItem; // inherited from NSObject

	static new(): VXPPaymentAccountQueryItem; // inherited from NSObject

	ExpirationMonth: string;

	ExpirationYear: string;

	PASSUpdaterBatchStatus: VXPPASSUpdaterBatchStatus;

	PASSUpdaterStatus: VXPPASSUpdaterStatus;

	PaymentAccountID: string;

	PaymentAccountReferenceNumber: string;

	PaymentAccountType: VXPPaymentAccountType;

	PaymentBrand: string;

	TruncatedCardNumber: string;
}

declare class VXPPaymentAccountQueryRecordCountItem extends VXPBase {

	static alloc(): VXPPaymentAccountQueryRecordCountItem; // inherited from NSObject

	static new(): VXPPaymentAccountQueryRecordCountItem; // inherited from NSObject

	PageCount: number;

	RecordCount: number;
}

declare class VXPPaymentAccountTokenReportItem extends VXPBase {

	static alloc(): VXPPaymentAccountTokenReportItem; // inherited from NSObject

	static new(): VXPPaymentAccountTokenReportItem; // inherited from NSObject

	R: string;

	T: string;
}

declare const enum VXPPaymentAccountType {

	NotSet = -2147483648,

	CreditCard = 0,

	Checking = 1,

	Savings = 2,

	ACH = 3,

	Other = 4
}

declare class VXPReportingData extends VXPBase {

	static alloc(): VXPReportingData; // inherited from NSObject

	static new(): VXPReportingData; // inherited from NSObject

	static parseReportItems(reportingData: string): NSArray<any>;
}

declare class VXPReportingDataItem extends VXPBase {

	static alloc(): VXPReportingDataItem; // inherited from NSObject

	static new(): VXPReportingDataItem; // inherited from NSObject

	AVSResponseCode: string;

	AcceptorID: string;

	AccountID: string;

	ApplicationID: string;

	ApprovalNumber: string;

	ApprovedAmount: NSDecimalNumber;

	CVVResponseCode: string;

	CardLogo: string;

	CardNumberMasked: string;

	CardType: string;

	CashBackAmount: NSDecimalNumber;

	ExpirationMonth: string;

	ExpirationYear: string;

	ExpressResponseCode: VXPResponseCode;

	ExpressResponseMessage: string;

	ExpressTransactionDate: string;

	ExpressTransactionTime: string;

	HostBatchID: string;

	HostItemID: string;

	HostResponseCode: string;

	HostResponseMessage: string;

	Name: string;

	ReferenceNumber: string;

	SalesTaxAmount: NSDecimalNumber;

	TerminalID: string;

	TerminalType: string;

	TicketNumber: string;

	TimeStamp: string;

	TipAmount: NSDecimalNumber;

	TrackDataPresent: boolean;

	TrackingID: string;

	TransactionAmount: NSDecimalNumber;

	TransactionID: string;

	TransactionStatus: string;

	TransactionStatusCode: VXPTransactionStatusCode;

	TransactionType: string;

	readonly TransactionTypeEx: VXPRequestType;

	UndefinedItems: NSDictionary<any, any>;
}

declare class VXPRequest extends NSObject {

	static alloc(): VXPRequest; // inherited from NSObject

	static cstringFromRequestType(type: VXPRequestType): string;

	static new(): VXPRequest; // inherited from NSObject

	static requestTypeFromCString(cstring: string | interop.Pointer | interop.Reference<any>): VXPRequestType;

	static requestTypeFromString(string: string): VXPRequestType;

	static requestWithRequestTypeCredentialsApplication(requestType: VXPRequestType, credentials: VXPCredentials, application: VXPApplication): VXPRequest;

	static stringFromRequestType(type: VXPRequestType): string;

	Address: VXPAddress;

	Application: VXPApplication;

	Batch: VXPBatch;

	Card: VXPCard;

	Credentials: VXPCredentials;

	EBT: VXPEBT;

	ExtendedParameters: VXPExtendedParameters;

	Paging: VXPPaging;

	Parameters: VXPParameters;

	PaymentAccount: VXPPaymentAccount;

	PaymentAccountParameters: VXPPaymentAccountParameters;

	Terminal: VXPTerminal;

	Token: VXPToken;

	Transaction: VXPTransaction;

	TransactionSetup: VXPTransactionSetup;

	Type: VXPRequestType;

	constructor(o: { requestType: VXPRequestType; credentials: VXPCredentials; application: VXPApplication; });

	getXmlString(): string;

	initWithRequestTypeCredentialsApplication(requestType: VXPRequestType, credentials: VXPCredentials, application: VXPApplication): this;
}

declare const enum VXPRequestType {

	VXPRequestTypeUnknown = -1,

	_VXPRequestTypeMin = 0,

	VXPRequestTypeAccountTokenActivate = 0,

	VXPRequestTypeAccountTokenCreate = 1,

	VXPRequestTypeBatchClose = 2,

	VXPRequestTypeBatchItemQuery = 3,

	VXPRequestTypeBatchTotalsQuery = 4,

	VXPRequestTypeCreditCardAvsOnly = 5,

	VXPRequestTypeCreditCardAdjustment = 6,

	VXPRequestTypeCreditCardAuthorization = 7,

	VXPRequestTypeCreditCardIncrementalAuthorization = 8,

	VXPRequestTypeCreditCardAuthorizationCompletion = 9,

	VXPRequestTypeCreditCardCredit = 10,

	VXPRequestTypeCreditCardForce = 11,

	VXPRequestTypeCreditCardReturn = 12,

	VXPRequestTypeCreditCardReversal = 13,

	VXPRequestTypeCreditCardSale = 14,

	VXPRequestTypeCreditCardVoid = 15,

	VXPRequestTypeDebitCardReturn = 16,

	VXPRequestTypeDebitCardReversal = 17,

	VXPRequestTypeDebitCardSale = 18,

	VXPRequestTypeCheckSale = 19,

	VXPRequestTypeCheckCredit = 20,

	VXPRequestTypeCheckVerification = 21,

	VXPRequestTypeCheckReturn = 22,

	VXPRequestTypeCheckVoid = 23,

	VXPRequestTypeCheckReversal = 24,

	VXPRequestTypeHealthCheck = 25,

	VXPRequestTypeTimeCheck = 26,

	VXPRequestTypeTransactionSetup = 27,

	VXPRequestTypeBinQuery = 28,

	VXPRequestTypeCreditCardBalanceInquiry = 29,

	VXPRequestTypeTransactionSetupExpire = 30,

	VXPRequestTypeTransactionQuery = 31,

	VXPRequestTypePaymentAccountCreate = 32,

	VXPRequestTypePaymentAccountUpdate = 33,

	VXPRequestTypePaymentAccountDelete = 34,

	VXPRequestTypePaymentAccountQuery = 35,

	VXPRequestTypePaymentAccountAutoUpdate = 36,

	VXPRequestTypePaymentAccountCreateWithTransId = 37,

	VXPRequestTypePaymentAccountQueryRecordCount = 38,

	VXPRequestTypePaymentAccountQueryTokenReport = 39,

	VXPRequestTypeEnhancedBinQuery = 40,

	VXPRequestTypeTokenCreate = 41,

	VXPRequestTypeTokenCreateWithTransId = 42,

	VXPRequestTypeGiftCardSale = 43,

	VXPRequestTypeGiftCardCredit = 44,

	VXPRequestTypeGiftCardReversal = 45,

	VXPRequestTypeGiftCardActivate = 46,

	VXPRequestTypeGiftCardBalanceInquiry = 47,

	VXPRequestTypeGiftCardReturn = 48,

	VXPRequestTypeGiftCardReload = 49,

	VXPRequestTypeEbtSale = 50,

	VXPRequestTypeEbtCredit = 51,

	VXPRequestTypeEbtVoucher = 52,

	VXPRequestTypeEbtBalanceInquiry = 53,

	VXPRequestTypeEbtReversal = 54,

	_VXPRequestTypeMax = 55
}

declare class VXPResponse extends VXPBase {

	static alloc(): VXPResponse; // inherited from NSObject

	static cstringFromResponseType(type: VXPResponseType): string;

	static hostedPaymentsUrlWithTransactionSetupIDTestCertification(transactionSetupID: string, testCertification: boolean): NSURL;

	static new(): VXPResponse; // inherited from NSObject

	static responseWithHostedPaymentsReturnUrl(returnUrl: NSURL): VXPResponse;

	static responseWithString(message: string): VXPResponse;

	static stringFromResponseType(type: VXPResponseType): string;

	Address: VXPAddress;

	BIN: VXPBIN;

	Batch: VXPBatch;

	Card: VXPCard;

	Credentials: VXPCredentials;

	ExpressResponseCode: VXPResponseCode;

	ExpressResponseMessage: string;

	ExpressTransactionDate: string;

	readonly ExpressTransactionDateTimeEx: Date;

	ExpressTransactionTime: string;

	ExpressTransactionTimezone: string;

	HostResponseCode: string;

	HostResponseMessage: string;

	HostTransactionDateTime: string;

	readonly HostTransactionDateTimeEx: Date;

	HostedPaymentsUrl: NSURL;

	PaymentAccount: VXPPaymentAccount;

	QueryData: string;

	QueryDataEx: NSArray<any>;

	RawResponse: string;

	ReportingData: string;

	readonly ReportingDataEx: NSArray<any>;

	ReportingID: string;

	ServicesID: string;

	Token: VXPToken;

	Transaction: VXPTransaction;

	TransactionSetup: VXPTransactionSetup;

	Type: VXPResponseType;

	constructor(o: { hostedPaymentsReturnUrl: NSURL; });

	constructor(o: { string: string; });

	getXmlString(): string;

	initWithHostedPaymentsReturnUrl(returnUrl: NSURL): this;

	initWithString(message: string): this;
}

declare const enum VXPResponseCode {

	NotSet = -2147483648,

	Approved = 0,

	PartialApproval = 5,

	ApprovedExceptCashback = 6,

	Decline = 20,

	ExpiredCard = 21,

	DuplicateApproved = 22,

	Duplicate = 23,

	PickUpCard = 24,

	ReferralCallIssuer = 25,

	BalanceNotAvailable = 30,

	NotDefined = 90,

	InvalidData = 101,

	InvalidAccount = 102,

	InvalidRequest = 103,

	AuthorizationFailed = 104,

	NotAllowed = 105,

	OutOfBalance = 120,

	CommunicationError = 1001,

	HostError = 1002,

	Error = 1009,

	HostedPaymentsCancelled = 10000,

	Genac2DeclineReversalFailed = 10001
}

declare const enum VXPResponseType {

	VXPResponseTypeUnknown = -1,

	_VXPResponseTypeMin = 0,

	VXPResponseTypeGeneric = 0,

	VXPResponseTypeAccountTokenActivate = 1,

	VXPResponseTypeAccountTokenCreate = 2,

	VXPResponseTypeBatchClose = 3,

	VXPResponseTypeBatchItemQuery = 4,

	VXPResponseTypeBatchTotalsQuery = 5,

	VXPResponseTypeCreditCardAvsOnly = 6,

	VXPResponseTypeCreditCardAdjustment = 7,

	VXPResponseTypeCreditCardAuthorization = 8,

	VXPResponseTypeCreditCardIncrementalAuthorization = 9,

	VXPResponseTypeCreditCardAuthorizationCompletion = 10,

	VXPResponseTypeCreditCardCredit = 11,

	VXPResponseTypeCreditCardForce = 12,

	VXPResponseTypeCreditCardReturn = 13,

	VXPResponseTypeCreditCardReversal = 14,

	VXPResponseTypeCreditCardSale = 15,

	VXPResponseTypeCreditCardVoid = 16,

	VXPResponseTypeDebitCardReturn = 17,

	VXPResponseTypeDebitCardReversal = 18,

	VXPResponseTypeDebitCardSale = 19,

	VXPResponseTypeCheckSale = 20,

	VXPResponseTypeCheckCredit = 21,

	VXPResponseTypeCheckVerification = 22,

	VXPResponseTypeCheckReturn = 23,

	VXPResponseTypeCheckVoid = 24,

	VXPResponseTypeCheckReversal = 25,

	VXPResponseTypeHealthCheck = 26,

	VXPResponseTypeTimeCheck = 27,

	VXPResponseTypeTransactionSetup = 28,

	VXPResponseTypeBinQuery = 29,

	VXPResponseTypeCreditCardBalanceInquiry = 30,

	VXPResponseTypeTransactionSetupExpire = 31,

	VXPResponseTypeTransactionQuery = 32,

	VXPResponseTypePaymentAccountCreate = 33,

	VXPResponseTypePaymentAccountUpdate = 34,

	VXPResponseTypePaymentAccountDelete = 35,

	VXPResponseTypePaymentAccountQuery = 36,

	VXPResponseTypePaymentAccountAutoUpdate = 37,

	VXPResponseTypePaymentAccountCreateWithTransId = 38,

	VXPResponseTypePaymentAccountQueryRecordCount = 39,

	VXPResponseTypePaymentAccountQueryTokenReport = 40,

	VXPResponseTypeEnhancedBinQuery = 41,

	VXPResponseTypeTokenCreate = 42,

	VXPResponseTypeTokenCreateWithTransId = 43,

	VXPResponseTypeGiftCardSale = 44,

	VXPResponseTypeGiftCardCredit = 45,

	VXPResponseTypeGiftCardReversal = 46,

	VXPResponseTypeGiftCardActivate = 47,

	VXPResponseTypeGiftCardBalanceInquiry = 48,

	VXPResponseTypeGiftCardReturn = 49,

	VXPResponseTypeGiftCardReload = 50,

	VXPResponseTypeEbtSale = 51,

	VXPResponseTypeEbtCredit = 52,

	VXPResponseTypeEbtVoucher = 53,

	VXPResponseTypeEbtBalanceInquiry = 54,

	VXPResponseTypeEbtReversal = 55,

	VXPResponseTypeHostedPayments = 10000,

	_VXPResponseTypeMax = 10001
}

declare const enum VXPReversalType {

	NotSet = -2147483648,

	System = 0,

	Full = 1,

	Partial = 2
}

declare class VXPTerminal extends VXPBase {

	static alloc(): VXPTerminal; // inherited from NSObject

	static new(): VXPTerminal; // inherited from NSObject

	CVVPresenceCode: VXPCVVPresenceCode;

	CVVResponseType: VXPCVVResponseType;

	CardInputCode: VXPCardInputCode;

	CardPresentCode: VXPCardPresentCode;

	CardholderPresentCode: VXPCardHolderPresentCode;

	ConsentCode: VXPConsentCode;

	LaneNumber: string;

	MotoECICode: VXPMotoECICode;

	StoreCardID: string;

	StoreCardPassword: string;

	TerminalCapabilityCode: VXPTerminalCapabilityCode;

	TerminalEMVKernelVersion: string;

	TerminalEncryptionFormat: VXPTerminalEncryptionFormat;

	TerminalEnvironmentCode: VXPTerminalEnvironmentCode;

	TerminalID: string;

	TerminalModel: string;

	TerminalSerialNumber: string;

	TerminalType: VXPTerminalType;
}

declare const enum VXPTerminalCapabilityCode {

	NotSet = -2147483648,

	Default = 0,

	Unknown = 1,

	NoTerminal = 2,

	MagstripeReader = 3,

	ContactlessMagstripeReader = 4,

	KeyEntered = 5,

	ChipReader = 6,

	ContactlessChipReader = 7
}

declare const enum VXPTerminalEncryptionFormat {

	FormatNotSet = -2147483648,

	FormatDefault = 0,

	Format1 = 1,

	Format2 = 2,

	Format3 = 3,

	Format4 = 4
}

declare const enum VXPTerminalEnvironmentCode {

	NotSet = -2147483648,

	Default = 0,

	NoTerminal = 1,

	LocalAttended = 2,

	LocalUnattended = 3,

	RemoteAttended = 4,

	RemoteUnattended = 5,

	ECommerce = 6
}

declare const enum VXPTerminalType {

	NotSet = -2147483648,

	Unknown = 0,

	PointOfSale = 1,

	ECommerce = 2,

	Moto = 3,

	FuelPump = 4,

	Atm = 5,

	Voice = 6,

	Mobile = 7
}

declare class VXPToken extends VXPBase {

	static alloc(): VXPToken; // inherited from NSObject

	static new(): VXPToken; // inherited from NSObject

	TAProviderID: string;

	TokenID: string;

	TokenProvider: VXPTokenProvider;

	VaultID: string;
}

declare const enum VXPTokenProvider {

	NotSet = -2147483648,

	Null = 0,

	ExpressPass = 1,

	OmniToken = 2,

	Paymetric = 3,

	TransArmor = 4
}

declare class VXPTransaction extends VXPBase {

	static alloc(): VXPTransaction; // inherited from NSObject

	static new(): VXPTransaction; // inherited from NSObject

	AcquirerData: string;

	ApprovalNumber: string;

	ApprovedAmount: NSDecimalNumber;

	BalanceAmount: NSDecimalNumber;

	BalanceCurrencyCode: string;

	BillPaymentFlag: VXPBooleanType;

	CashBackAmount: NSDecimalNumber;

	ClerkNumber: string;

	CommercialCardCustomerCode: string;

	CommercialCardResponseCode: string;

	ConvenienceFeeAmount: NSDecimalNumber;

	CurrencyCode: string;

	DuplicateCheckDisableFlag: VXPBooleanType;

	DuplicateOverrideFlag: VXPBooleanType;

	HostTransactionID: string;

	MarketCode: VXPMarketCode;

	MerchantVerificationValue: string;

	OriginalAuthorizedAmount: NSDecimalNumber;

	PartialApprovedFlag: VXPBooleanType;

	ProcessorName: string;

	RecurringFlag: VXPBooleanType;

	ReferenceNumber: string;

	ReversalType: VXPReversalType;

	SalesTaxAmount: NSDecimalNumber;

	ShiftID: string;

	TicketNumber: string;

	TipAmount: NSDecimalNumber;

	TotalAuthorizedAmount: NSDecimalNumber;

	TransactionAmount: NSDecimalNumber;

	TransactionID: string;

	TransactionSetupID: string;

	TransactionStatus: string;

	TransactionStatusCode: VXPTransactionStatusCode;
}

declare class VXPTransactionSetup extends VXPBase {

	static alloc(): VXPTransactionSetup; // inherited from NSObject

	static new(): VXPTransactionSetup; // inherited from NSObject

	AutoReturn: VXPBooleanType;

	CVVRequired: VXPBooleanType;

	CompanyName: string;

	Device: VXPTransactionSetupDevice;

	DeviceInputCode: VXPDeviceInputCode;

	Embedded: VXPBooleanType;

	LogoURL: string;

	OrderDetails: string;

	ProcessTransactionTitle: string;

	ReturnURL: string;

	ReturnURLTitle: string;

	Tagline: string;

	TransactionSetupID: string;

	TransactionSetupMethod: VXPTransactionSetupMethod;

	ValidationCode: string;

	WelcomeMessage: string;
}

declare const enum VXPTransactionSetupDevice {

	NotSet = -2147483648,

	Default = 0,

	MagtekEncryptedSwipe = 1,

	EncryptedInputDevice = 2
}

declare const enum VXPTransactionSetupMethod {

	NotSet = -2147483648,

	Default = 0,

	CreditCardSale = 1,

	CreditCardAuthorization = 2,

	CreditCardAVSOnly = 3,

	CreditCardForce = 4,

	DebitCardSale = 5,

	CheckSale = 6,

	PaymentAccountCreate = 7,

	PaymentAccountUpdate = 8,

	Sale = 9
}

declare const enum VXPTransactionStatusCode {

	NotSet = -2147483648,

	InProcess = 0,

	Approved = 1,

	Declined = 2,

	Duplicate = 3,

	Voided = 4,

	Authorized = 5,

	AuthComplete = 6,

	Reversed = 7,

	Success = 8,

	Returned = 9,

	Pending = 10,

	Queued = 11,

	Unknown = 12,

	Error = 13,

	Originated = 14,

	Settled = 15,

	PartialApproved = 16,

	Rejected = 17
}

declare class triPOSMobileSDK extends NSObject {

	static alloc(): triPOSMobileSDK; // inherited from NSObject

	static new(): triPOSMobileSDK; // inherited from NSObject

	static sharedVtp(): any;
}

declare var triPOSMobileSDKVersionNumber: number;

declare var triPOSMobileSDKVersionString: interop.Reference<number>;
