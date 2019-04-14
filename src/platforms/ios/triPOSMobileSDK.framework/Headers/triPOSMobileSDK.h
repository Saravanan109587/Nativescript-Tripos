///
/// \file  triPOSMobileSDK.h
///

///
/// \mainpage Worldpay Integrated Payments triPOS® Mobile SDK
///
/// \section overview Overview
///
/// The Worldpay triPOS® Mobile SDK Framework is designed to allow iOS applications rapid integration for EMV support, point-of-interaction device support, and the Worldpay Integrated Payments Express platform. While the framework has been certified for EMV and to the Express platform, the application to which it is being integrated must also complete testing with Worldpay Integrated Payments and the Express platform to ensure all necessary fields are populated with the correct data and receipts are generated with the required information.
///
/// \section requirements Requirements
///
/// \subsection requirementsAppleMFi Apple MFi Program
///
/// For each manufacturer whose accessory is supported in the application, that manufacturer must add the application to their MFi PPID (Made for iOS product plan ID). Without this, the App Store submission will be rejected. In other words, for each accessory protocol used (see @ref projectSettingsExternalAccessories), the application must be added to that manufacturers MFi PPID.<br /><br /><strong>NOTE: MFi PPID's only apply to 30-pin/Lightning or Bluetooth connected accessories. It does not apply to audio jack, TCP/IP, nor Bluetooth Low Power connected accessories.</strong>
///
/// \subsection requirementsiOSDeveloper iOS developer
///
/// <ul>
///
/// <li>You must have an Intel-based Mac running Mac OS X El Capitan or later.</li>
///
/// <li>You must be <a href='https://developer.apple.com/programs/register/'>registered</a> as an Apple Developer. For more information on the iOS Developer Program, go to <a href='https://developer.apple.com/support/ios'>https://developer.apple.com/support/ios</a>.</li>
///
/// <li>You must have <a href='https://itunes.apple.com/us/app/xcode/id497799835?mt=12'>Xcode</a> installed.</li>
///
/// </ul>
///
/// \subsection requirementsiOSVersion iOS version
///
/// The Worldpay triPOS® Mobile SDK Framework was developed for and tested using the following iOS's:
///
/// <ul>
///
/// <li>iOS 9</li>
///
/// <li>iOS 10</li>
///
/// <li>iOS 11</li>
///
/// </ul>
///
/// \subsection requirementsiOSDevices iOS devices
///
/// The Worldpay triPOS® Mobile SDK Framework has been tested for use with the following devices:
///
/// <ul>
///
/// <li>iPhone 6</li>
///
/// <li>iPod touch (5th generation)</li>
///
/// <li>iPad Air 2</li>
///
/// <li>iPad mini (1st generation)</li>
///
/// <li>TBD</li>
///
/// </ul>
///
/// If a particular device is not in the list above, it does not mean the framework will not work with the device. However, Worldpay Ingetrated Payments has not tested non-listed devices and makes no guarantees they will operate in the desired manner.
///
/// \subsection requirementsFramework Framework
///
/// <ul>
///
/// <li>The iOS device being used requires a data connection. The data connection does not have to be always available, but it does have to be available at the time a transaction is processed. This connection may be Wi-Fi, mobile data, or any other data connection available that allows an HTTPS connection to the Express host.</li>
///
/// <li>You must have credentials assigned by Worldpay Integrated Payments to use this framework. For development and certification, you may sign up for a free test account by <a href='http://www.elementps.com/Create-a-Test-Account'>clicking here</a> or visiting <a href='https://developer.vantiv.com'>www.vantivintegratedpayments.com</a>. For production use, contact your Worldpay Integrated Payments sales representative.</li>
///
/// </ul>
///
/// \section gettingStarted Getting started
///
/// \subsection addFramework Adding the framework to your project
///
/// <ol>
///
/// <li>Copy triPOSMobileSDK.framework to your local project folder.</li>
///
/// <li>Open the project settings and select the application target.</li>
///
/// <li>Open the 'General' tab.</li>
///
/// <li>Scroll down to 'Embedded Binaries' and click the '+' symbol under the list.</li>
///
/// <li>Click 'Add Other'.</li>
///
/// <li>Browse to the location where the Worldpay triPOS® Mobile SDK Framework was copied in the first step.</li>
///
/// <li>Select the triPOSMobileSDK.framework folder.</li>
///
/// <li>Click 'Open'.</li>
///
/// <li>Scroll down to 'Linked Frameworks and Libraries' and click the '+' symbol under the list.</li>
///
/// <li>Find and select ExternalAccessory.framework.</li>
///
/// <li>Click 'Add'.</li>
///
/// </ol>
///
/// \subsubsection projectSettingsExternalAccessories External accessories
///
/// To use the supported external devices, the appropriate protocols must be added to the project settings.
///
/// <ol>
///
/// <li>Open the project settings and select the application target.</li>
///
/// <li>Open the 'Info' tab.
///
/// <li>In the 'Custom iOS Target Properties' section, add the 'Supported external accessory protocols' setting.</li>
///
/// <li>Add each of the protocols listed below for the necessary devices:</li>
///
/// <ul>
///
/// <li>Ingenico</li>
/// <ul>
/// <li>com.ingenico.easypayemv.spm-transaction</li>
/// <li>com.ingenico.easypayemv.spm-networkaccess</li>
/// <li>com.ingenico.easypayemv.spm-sppchannel</li>
/// </ul>
///
/// </ul>
///
/// </ol>
///
/// \subsection useFramework Using the framework
///
/// The Worldpay triPOS® Mobile SDK Framework is used including <triPOSMobileSDK/triPOSMobileSDK.h> then accessing the SDK functionality through the sharedVtp singleton. The SDK must be initialized before performing any functions and if those functions require the device, the application must wait for the device to become connected.<br /><br /><strong style="color:red;">NOTE: If necessary, the triPOS® Mobile SDK will update device firmware and settings. If a firmware update is required, the first initialization may take 10 or more minutes depending on the connection type.</strong>
///
/// \section submittingToTestFlightOrAppStore Submitting to TestFlight or App Store
///
/// <ul>
///
/// <li>In order to submit your app to TestFlight or the App Store you must first strip unneeded architectures from your project.</li>
///
/// <li>See: <a href="../How to remove unneeded architectures from XCode projects.doc">How to remove unneeded architectures from XCode projects</a></li>
///
/// </ul>
///
/// \section support Support
///
/// Please contact <a href="mailto:MobilePOSSDKSupport@vantiv.com?body=Please complete the following:%0D%0A%0D%0AYour name:%20%0D%0ACompany name:%20%0D%0APhone number:%20%0D%0AE-mail if different from sending e-mail:%20%0D%0A%0D%0ADescription of the problem:%20">triPOS® Mobile SDK support</a>.
///
/// \section license SDK License Agreement
///
/// <a href="triPOS%C2%AE%20SDK%20LICENSE%20AGREEMENT%20-%20v7.2018.pdf">triPOS® SDK LICENSE AGREEMENT - v7.2018.pdf</a>.
///
/// \section releaseNotes Release Notes
///
/// <a href="../changelog.txt">changelog.txt</a>
///

#import <Foundation/Foundation.h>

//! Project version number for triPOSMobileSDK.
FOUNDATION_EXPORT double triPOSMobileSDKVersionNumber;

//! Project version string for triPOSMobileSDK.
FOUNDATION_EXPORT const unsigned char triPOSMobileSDKVersionString[];

#import "VTP.h"
#import "VTP+Sale.h"
#import "VTP+Refund.h"
#import "VTP+Authorization.h"
#import "VTP+GiftCardActivate.h"
#import "VTP+GiftCardBalanceInquiry.h"
#import "VTP+GiftCardReload.h"
#import "VTP+ManuallyForward.h"
#import "VTP+QueryStoreDatabase.h"
#import "VPD.h"
#import "VXP.h"

@interface triPOSMobileSDK : NSObject

///
/// \brief The singleton instance of the triPOS Mobile SDK
///
/// Provides access to the singleton instance of the triPOS Mobile SDK.
///
+(id)sharedVtp;

///
/// \brief Gets the version of the triPOS Mobile SDK
///
/// Gets the version of the triPOS Mobile SDK.
///
+(NSString *)version;

@end
