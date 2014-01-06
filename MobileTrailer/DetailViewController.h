
@interface DetailViewController : UIViewController
<UISplitViewControllerDelegate, UIWebViewDelegate, UIActionSheetDelegate>

@property (strong, nonatomic) NSURL *detailItem;

@property (strong, nonatomic) UIPopoverController *masterPopoverController;
@property (weak, nonatomic) IBOutlet UIWebView *web;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *spinner;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *shareButton;
// copy link, open in safari

+ (DetailViewController *)shared;

@end
