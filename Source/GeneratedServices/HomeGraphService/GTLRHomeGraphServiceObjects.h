// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   HomeGraph API (homegraph/v1)
// Documentation:
//   https://developers.google.com/actions/smarthome/create-app#request-sync

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRHomeGraphService_AgentDeviceId;
@class GTLRHomeGraphService_AgentOtherDeviceId;
@class GTLRHomeGraphService_Device;
@class GTLRHomeGraphService_Device_Attributes;
@class GTLRHomeGraphService_Device_CustomData;
@class GTLRHomeGraphService_DeviceInfo;
@class GTLRHomeGraphService_DeviceNames;
@class GTLRHomeGraphService_NonLocalTrait;
@class GTLRHomeGraphService_QueryRequestInput;
@class GTLRHomeGraphService_QueryRequestPayload;
@class GTLRHomeGraphService_QueryResponsePayload;
@class GTLRHomeGraphService_QueryResponsePayload_Devices;
@class GTLRHomeGraphService_QueryResponsePayload_Devices_Device;
@class GTLRHomeGraphService_ReportStateAndNotificationDevice;
@class GTLRHomeGraphService_ReportStateAndNotificationDevice_Notifications;
@class GTLRHomeGraphService_ReportStateAndNotificationDevice_States;
@class GTLRHomeGraphService_RequestLinkRequestPayload;
@class GTLRHomeGraphService_StateAndNotificationPayload;
@class GTLRHomeGraphService_SyncResponsePayload;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Third-party device ID for one device.
 */
@interface GTLRHomeGraphService_AgentDeviceId : GTLRObject

/**
 *  Third-party device ID.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

@end


/**
 *  Alternate third-party device ID.
 */
@interface GTLRHomeGraphService_AgentOtherDeviceId : GTLRObject

/** Project ID for your smart home Action. */
@property(nonatomic, copy, nullable) NSString *agentId;

/** Unique third-party device ID. */
@property(nonatomic, copy, nullable) NSString *deviceId;

@end


/**
 *  Third-party device definition. Next ID = 14
 */
@interface GTLRHomeGraphService_Device : GTLRObject

/** Attributes for the traits supported by the device. */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_Device_Attributes *attributes;

/**
 *  Custom device attributes stored in Home Graph and provided to your smart
 *  home Action in each
 *  [QUERY](https://developers.google.com/assistant/smarthome/reference/intent/query)
 *  and
 *  [EXECUTE](https://developers.google.com/assistant/smarthome/reference/intent/execute)
 *  intent. Data in this object has a few constraints: No sensitive information,
 *  including but not limited to Personally Identifiable Information.
 */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_Device_CustomData *customData;

/** Device manufacturer, model, hardware version, and software version. */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_DeviceInfo *deviceInfo;

/**
 *  Third-party device ID.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Names given to this device by your smart home Action. */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_DeviceNames *name;

/**
 *  See description for "traits". For Smart Home Entertainment Devices (SHED)
 *  devices, some traits can only be executed on 3P cloud, e.g.
 *  "non_local_traits": [ { "trait": "action.devices.traits.MediaInitiation" },
 *  { "trait": "action.devices.traits.Channel" } ] go/shed-per-trait-routing.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRHomeGraphService_NonLocalTrait *> *nonLocalTraits;

/**
 *  Indicates whether your smart home Action will report notifications to Google
 *  for this device via ReportStateAndNotification. If your smart home Action
 *  enables users to control device notifications, you should update this field
 *  and call RequestSyncDevices.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *notificationSupportedByAgent;

/**
 *  Alternate IDs associated with this device. This is used to identify cloud
 *  synced devices enabled for [local
 *  fulfillment](https://developers.google.com/assistant/smarthome/concepts/local).
 */
@property(nonatomic, strong, nullable) NSArray<GTLRHomeGraphService_AgentOtherDeviceId *> *otherDeviceIds;

/**
 *  Suggested name for the room where this device is installed. Google attempts
 *  to use this value during user setup.
 */
@property(nonatomic, copy, nullable) NSString *roomHint;

/**
 *  Suggested name for the structure where this device is installed. Google
 *  attempts to use this value during user setup.
 */
@property(nonatomic, copy, nullable) NSString *structureHint;

/**
 *  Traits supported by the device. See [device
 *  traits](https://developers.google.com/assistant/smarthome/traits).
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *traits;

/**
 *  Hardware type of the device. See [device
 *  types](https://developers.google.com/assistant/smarthome/guides).
 */
@property(nonatomic, copy, nullable) NSString *type;

/**
 *  Indicates whether your smart home Action will report state of this device to
 *  Google via ReportStateAndNotification.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *willReportState;

@end


/**
 *  Attributes for the traits supported by the device.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRHomeGraphService_Device_Attributes : GTLRObject
@end


/**
 *  Custom device attributes stored in Home Graph and provided to your smart
 *  home Action in each
 *  [QUERY](https://developers.google.com/assistant/smarthome/reference/intent/query)
 *  and
 *  [EXECUTE](https://developers.google.com/assistant/smarthome/reference/intent/execute)
 *  intent. Data in this object has a few constraints: No sensitive information,
 *  including but not limited to Personally Identifiable Information.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRHomeGraphService_Device_CustomData : GTLRObject
@end


/**
 *  Device information.
 */
@interface GTLRHomeGraphService_DeviceInfo : GTLRObject

/** Device hardware version. */
@property(nonatomic, copy, nullable) NSString *hwVersion;

/** Device manufacturer. */
@property(nonatomic, copy, nullable) NSString *manufacturer;

/** Device model. */
@property(nonatomic, copy, nullable) NSString *model;

/** Device software version. */
@property(nonatomic, copy, nullable) NSString *swVersion;

@end


/**
 *  Identifiers used to describe the device.
 */
@interface GTLRHomeGraphService_DeviceNames : GTLRObject

/**
 *  List of names provided by the manufacturer rather than the user, such as
 *  serial numbers, SKUs, etc.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *defaultNames;

/** Primary name of the device, generally provided by the user. */
@property(nonatomic, copy, nullable) NSString *name;

/** Additional names provided by the user for the device. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *nicknames;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance: service Foo { rpc
 *  Bar(google.protobuf.Empty) returns (google.protobuf.Empty); } The JSON
 *  representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRHomeGraphService_Empty : GTLRObject
@end


/**
 *  LINT.IfChange go/shed-per-trait-routing. Making it object to allow for
 *  extendible design, where we can add attributes in future.
 */
@interface GTLRHomeGraphService_NonLocalTrait : GTLRObject

/**
 *  Trait name, e.g., "action.devices.traits.MediaInitiation". See [device
 *  traits](https://developers.google.com/assistant/smarthome/traits).
 */
@property(nonatomic, copy, nullable) NSString *trait;

@end


/**
 *  Request type for the
 *  [`Query`](#google.home.graph.v1.HomeGraphApiService.Query) call.
 */
@interface GTLRHomeGraphService_QueryRequest : GTLRObject

/** Required. Third-party user ID. */
@property(nonatomic, copy, nullable) NSString *agentUserId;

/**
 *  Required. Inputs containing third-party device IDs for which to get the
 *  device states.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRHomeGraphService_QueryRequestInput *> *inputs;

/** Request ID used for debugging. */
@property(nonatomic, copy, nullable) NSString *requestId;

@end


/**
 *  Device ID inputs to QueryRequest.
 */
@interface GTLRHomeGraphService_QueryRequestInput : GTLRObject

/** Payload containing third-party device IDs. */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_QueryRequestPayload *payload;

@end


/**
 *  Payload containing device IDs.
 */
@interface GTLRHomeGraphService_QueryRequestPayload : GTLRObject

/** Third-party device IDs for which to get the device states. */
@property(nonatomic, strong, nullable) NSArray<GTLRHomeGraphService_AgentDeviceId *> *devices;

@end


/**
 *  Response type for the
 *  [`Query`](#google.home.graph.v1.HomeGraphApiService.Query) call. This should
 *  follow the same format as the Google smart home `action.devices.QUERY`
 *  [response](https://developers.google.com/assistant/smarthome/reference/intent/query).
 *  # Example ```json { "requestId": "ff36a3cc-ec34-11e6-b1a0-64510650abcf",
 *  "payload": { "devices": { "123": { "on": true, "online": true }, "456": {
 *  "on": true, "online": true, "brightness": 80, "color": { "name": "cerulean",
 *  "spectrumRGB": 31655 } } } } } ```
 */
@interface GTLRHomeGraphService_QueryResponse : GTLRObject

/** Device states for the devices given in the request. */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_QueryResponsePayload *payload;

/** Request ID used for debugging. Copied from the request. */
@property(nonatomic, copy, nullable) NSString *requestId;

@end


/**
 *  Payload containing device states information.
 */
@interface GTLRHomeGraphService_QueryResponsePayload : GTLRObject

/**
 *  States of the devices. Map of third-party device ID to struct of device
 *  states.
 */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_QueryResponsePayload_Devices *devices;

@end


/**
 *  States of the devices. Map of third-party device ID to struct of device
 *  states.
 *
 *  @note This class is documented as having more properties of
 *        GTLRHomeGraphService_QueryResponsePayload_Devices_Device. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRHomeGraphService_QueryResponsePayload_Devices : GTLRObject
@end


/**
 *  GTLRHomeGraphService_QueryResponsePayload_Devices_Device
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRHomeGraphService_QueryResponsePayload_Devices_Device : GTLRObject
@end


/**
 *  The states and notifications specific to a device.
 */
@interface GTLRHomeGraphService_ReportStateAndNotificationDevice : GTLRObject

/**
 *  Notifications metadata for devices. See the **Device NOTIFICATIONS** section
 *  of the individual trait [reference
 *  guides](https://developers.google.com/assistant/smarthome/traits).
 */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_ReportStateAndNotificationDevice_Notifications *notifications;

/**
 *  States of devices to update. See the **Device STATES** section of the
 *  individual trait [reference
 *  guides](https://developers.google.com/assistant/smarthome/traits).
 */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_ReportStateAndNotificationDevice_States *states;

@end


/**
 *  Notifications metadata for devices. See the **Device NOTIFICATIONS** section
 *  of the individual trait [reference
 *  guides](https://developers.google.com/assistant/smarthome/traits).
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRHomeGraphService_ReportStateAndNotificationDevice_Notifications : GTLRObject
@end


/**
 *  States of devices to update. See the **Device STATES** section of the
 *  individual trait [reference
 *  guides](https://developers.google.com/assistant/smarthome/traits).
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRHomeGraphService_ReportStateAndNotificationDevice_States : GTLRObject
@end


/**
 *  Request type for the
 *  [`ReportStateAndNotification`](#google.home.graph.v1.HomeGraphApiService.ReportStateAndNotification)
 *  call. It may include states, notifications, or both. States and
 *  notifications are defined per `device_id` (for example, "123" and "456" in
 *  the following example). # Example ```json { "requestId":
 *  "ff36a3cc-ec34-11e6-b1a0-64510650abcf", "agentUserId": "1234", "payload": {
 *  "devices": { "states": { "123": { "on": true }, "456": { "on": true,
 *  "brightness": 10 } }, } } } ```
 */
@interface GTLRHomeGraphService_ReportStateAndNotificationRequest : GTLRObject

/** Required. Third-party user ID. */
@property(nonatomic, copy, nullable) NSString *agentUserId;

/** Unique identifier per event (for example, a doorbell press). */
@property(nonatomic, copy, nullable) NSString *eventId;

/**
 *  Token to maintain state in the follow up notification response. Deprecated.
 *  See the [notifications
 *  guide](https://developers.google.com/assistant/smarthome/develop/notifications)
 *  for details on implementing follow up notifications.
 */
@property(nonatomic, copy, nullable) NSString *followUpToken;

/**
 *  Required. State of devices to update and notification metadata for devices.
 */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_StateAndNotificationPayload *payload;

/** Request ID used for debugging. */
@property(nonatomic, copy, nullable) NSString *requestId;

@end


/**
 *  Response type for the
 *  [`ReportStateAndNotification`](#google.home.graph.v1.HomeGraphApiService.ReportStateAndNotification)
 *  call.
 */
@interface GTLRHomeGraphService_ReportStateAndNotificationResponse : GTLRObject

/** Request ID copied from ReportStateAndNotificationRequest. */
@property(nonatomic, copy, nullable) NSString *requestId;

@end


/**
 *  Request type for the
 *  [`RequestLink`](#google.home.graph.v1.HomeGraphApiService.RequestLink) call.
 */
@interface GTLRHomeGraphService_RequestLinkRequest : GTLRObject

/** Required. ID(s) and detection time of potential Cast devices. */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_RequestLinkRequestPayload *payload;

/** Required. Request ID used for debugging. */
@property(nonatomic, copy, nullable) NSString *requestId;

@end


/**
 *  Payload containing potential devices detected and when they were detected.
 */
@interface GTLRHomeGraphService_RequestLinkRequestPayload : GTLRObject

/**
 *  Required. Time at which devices represented in `potential_cast_device_ids`
 *  were detected.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *detectionTime;

/**
 *  Required. List of device IDs detected that may potentially be for Cast
 *  devices.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *potentialCastDeviceIds;

@end


/**
 *  Request type for the
 *  [`RequestSyncDevices`](#google.home.graph.v1.HomeGraphApiService.RequestSyncDevices)
 *  call.
 */
@interface GTLRHomeGraphService_RequestSyncDevicesRequest : GTLRObject

/** Required. Third-party user ID. */
@property(nonatomic, copy, nullable) NSString *agentUserId;

/**
 *  Optional. If set, the request will be added to a queue and a response will
 *  be returned immediately. This enables concurrent requests for the given
 *  `agent_user_id`, but the caller will not receive any error responses.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *async;

@end


/**
 *  Response type for the
 *  [`RequestSyncDevices`](#google.home.graph.v1.HomeGraphApiService.RequestSyncDevices)
 *  call. Intentionally empty upon success. An HTTP response code is returned
 *  with more details upon failure.
 */
@interface GTLRHomeGraphService_RequestSyncDevicesResponse : GTLRObject
@end


/**
 *  Payload containing the state and notification information for devices.
 */
@interface GTLRHomeGraphService_StateAndNotificationPayload : GTLRObject

/** The devices for updating state and sending notifications. */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_ReportStateAndNotificationDevice *devices;

@end


/**
 *  Request type for the
 *  [`Sync`](#google.home.graph.v1.HomeGraphApiService.Sync) call.
 */
@interface GTLRHomeGraphService_SyncRequest : GTLRObject

/** Required. Third-party user ID. */
@property(nonatomic, copy, nullable) NSString *agentUserId;

/** Request ID used for debugging. */
@property(nonatomic, copy, nullable) NSString *requestId;

@end


/**
 *  Response type for the
 *  [`Sync`](#google.home.graph.v1.HomeGraphApiService.Sync) call. This should
 *  follow the same format as the Google smart home `action.devices.SYNC`
 *  [response](https://developers.google.com/assistant/smarthome/reference/intent/sync).
 *  # Example ```json { "requestId": "ff36a3cc-ec34-11e6-b1a0-64510650abcf",
 *  "payload": { "agentUserId": "1836.15267389", "devices": [{ "id": "123",
 *  "type": "action.devices.types.OUTLET", "traits": [
 *  "action.devices.traits.OnOff" ], "name": { "defaultNames": ["My Outlet
 *  1234"], "name": "Night light", "nicknames": ["wall plug"] },
 *  "willReportState": false, "deviceInfo": { "manufacturer": "lights-out-inc",
 *  "model": "hs1234", "hwVersion": "3.2", "swVersion": "11.4" }, "customData":
 *  { "fooValue": 74, "barValue": true, "bazValue": "foo" } }] } } ```
 */
@interface GTLRHomeGraphService_SyncResponse : GTLRObject

/** Devices associated with the third-party user. */
@property(nonatomic, strong, nullable) GTLRHomeGraphService_SyncResponsePayload *payload;

/** Request ID used for debugging. Copied from the request. */
@property(nonatomic, copy, nullable) NSString *requestId;

@end


/**
 *  Payload containing device information.
 */
@interface GTLRHomeGraphService_SyncResponsePayload : GTLRObject

/** Third-party user ID */
@property(nonatomic, copy, nullable) NSString *agentUserId;

/** Devices associated with the third-party user. */
@property(nonatomic, strong, nullable) NSArray<GTLRHomeGraphService_Device *> *devices;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
