// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Datastore API (datastore/v1beta3)
// Description:
//   Google Cloud Datastore is a schemaless NoSQL datastore providing robust,
//   scalable storage for your application.
// Documentation:
//   https://cloud.google.com/datastore/

#import "GTLRDatastore.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeDatastore              = @"https://www.googleapis.com/auth/datastore";
NSString * const kGTLRAuthScopeDatastoreCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRDatastoreService
//

@implementation GTLRDatastoreService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://datastore.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint", @"pp" ];
  }
  return self;
}

@end
