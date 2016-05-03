// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Prediction API (prediction/v1.6)
// Description:
//   Lets you access a cloud hosted machine learning service that makes it easy
//   to build smart apps
// Documentation:
//   https://developers.google.com/prediction/docs/developer-guide

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: Manage your data in the Google Prediction API
 *
 *  Value "https://www.googleapis.com/auth/prediction"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePrediction;
/**
 *  Authorization scope: Manage your data and permissions in Google Cloud
 *  Storage
 *
 *  Value "https://www.googleapis.com/auth/devstorage.full_control"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePredictionDevstorageFullControl;
/**
 *  Authorization scope: View your data in Google Cloud Storage
 *
 *  Value "https://www.googleapis.com/auth/devstorage.read_only"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePredictionDevstorageReadOnly;
/**
 *  Authorization scope: Manage your data in Google Cloud Storage
 *
 *  Value "https://www.googleapis.com/auth/devstorage.read_write"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopePredictionDevstorageReadWrite;

// ----------------------------------------------------------------------------
//   GTLRPredictionService
//

/**
 *  Service for executing Prediction API queries.
 *
 *  Lets you access a cloud hosted machine learning service that makes it easy
 *  to build smart apps
 */
@interface GTLRPredictionService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRPredictionQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
