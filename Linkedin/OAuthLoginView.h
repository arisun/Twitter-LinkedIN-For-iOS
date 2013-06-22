
#import <UIKit/UIKit.h>
#import "JSONKit.h"
#import <Linkedin_Oauth/Linkedin_Oauth.h>


@interface OAuthLoginView : UIViewController <UIWebViewDelegate>
{
    IBOutlet UIWebView *webView;
    IBOutlet UIActivityIndicatorView *activityIndicator;
    IBOutlet UITextField *addressBar;
    
    OAToken *requestToken;
    OAToken *accessToken;
    OAConsumer *consumer;
    
    NSDictionary *profile;
    
    // Theses ivars could be made into a provider class
    // Then you could pass in different providers for Twitter, LinkedIn, etc
    NSString *apikey;
    NSString *secretkey;
    NSString *requestTokenURLString;
    NSURL *requestTokenURL;
    NSString *accessTokenURLString;
    NSURL *accessTokenURL;
    NSString *userLoginURLString;
    NSURL *userLoginURL;
    NSString *linkedInCallbackURL;
	IBOutlet UIToolbar *toolbarLnkDn;
	IBOutlet UIBarButtonItem *brbtnItmCancel;
}

@property(nonatomic, retain) OAToken *requestToken;
@property(nonatomic, retain) OAToken *accessToken;
@property(nonatomic, retain) NSDictionary *profile;
@property(nonatomic, retain) OAConsumer *consumer;
@property (nonatomic,retain) IBOutlet UIToolbar *toolbarLnkDn;
@property (nonatomic,retain) IBOutlet UIBarButtonItem *brbtnItmCancel;

- (void)initLinkedInApi;
- (void)requestTokenFromProvider;
- (void)allowUserToLogin;
- (void)accessTokenFromProvider;
-(IBAction)clickBarBtn:(id)sender;                                                                  

@end
