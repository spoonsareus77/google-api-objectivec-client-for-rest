// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud DNS API (dns/v1)
// Description:
//   Configures and serves authoritative DNS records.
// Documentation:
//   https://developers.google.com/cloud-dns

#import "GTLRDns.h"

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeDnsCloudPlatform         = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeDnsCloudPlatformReadOnly = @"https://www.googleapis.com/auth/cloud-platform.read-only";
NSString * const kGTLRAuthScopeDnsNdevClouddnsReadonly  = @"https://www.googleapis.com/auth/ndev.clouddns.readonly";
NSString * const kGTLRAuthScopeDnsNdevClouddnsReadwrite = @"https://www.googleapis.com/auth/ndev.clouddns.readwrite";

// ----------------------------------------------------------------------------
//   GTLRDnsService
//

@implementation GTLRDnsService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://www.googleapis.com/";
    self.servicePath = @"dns/v1/projects/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

+ (NSDictionary<NSString *, Class> *)kindStringToClassMap {
  return @{
    @"dns#change" : [GTLRDns_Change class],
    @"dns#changesListResponse" : [GTLRDns_ChangesListResponse class],
    @"dns#managedZone" : [GTLRDns_ManagedZone class],
    @"dns#managedZonesListResponse" : [GTLRDns_ManagedZonesListResponse class],
    @"dns#project" : [GTLRDns_Project class],
    @"dns#quota" : [GTLRDns_Quota class],
    @"dns#resourceRecordSet" : [GTLRDns_ResourceRecordSet class],
    @"dns#resourceRecordSetsListResponse" : [GTLRDns_ResourceRecordSetsListResponse class],
  };
}

@end
