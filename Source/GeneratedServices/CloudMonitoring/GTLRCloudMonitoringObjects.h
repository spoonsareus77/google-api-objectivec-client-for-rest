// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Monitoring API (cloudmonitoring/v2beta2)
// Description:
//   Accesses Google Cloud Monitoring data.
// Documentation:
//   https://cloud.google.com/monitoring/v2beta2/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudMonitoring_MetricDescriptor;
@class GTLRCloudMonitoring_MetricDescriptorLabelDescriptor;
@class GTLRCloudMonitoring_MetricDescriptorTypeDescriptor;
@class GTLRCloudMonitoring_Point;
@class GTLRCloudMonitoring_PointDistribution;
@class GTLRCloudMonitoring_PointDistributionBucket;
@class GTLRCloudMonitoring_PointDistributionOverflowBucket;
@class GTLRCloudMonitoring_PointDistributionUnderflowBucket;
@class GTLRCloudMonitoring_Timeseries;
@class GTLRCloudMonitoring_TimeseriesDescriptor;
@class GTLRCloudMonitoring_TimeseriesDescriptorLabels;
@class GTLRCloudMonitoring_TimeseriesPoint;
@class GTLRCloudMonitoring_WriteTimeseriesRequestCommonLabels;

NS_ASSUME_NONNULL_BEGIN

/**
 *  The response of cloudmonitoring.metricDescriptors.delete.
 */
@interface GTLRCloudMonitoring_DeleteMetricDescriptorResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "cloudmonitoring#deleteMetricDescriptorResponse".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The request of cloudmonitoring.metricDescriptors.list.
 */
@interface GTLRCloudMonitoring_ListMetricDescriptorsRequest : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "cloudmonitoring#listMetricDescriptorsRequest".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The response of cloudmonitoring.metricDescriptors.list.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "metrics" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudMonitoring_ListMetricDescriptorsResponse : GTLRCollectionObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "cloudmonitoring#listMetricDescriptorsResponse".
 */
@property(copy, nullable) NSString *kind;

/**
 *  The returned metric descriptors.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(strong, nullable) NSArray<GTLRCloudMonitoring_MetricDescriptor *> *metrics;

/**
 *  Pagination token. If present, indicates that additional results are
 *  available for retrieval. To access the results past the pagination limit,
 *  pass this value to the pageToken query parameter.
 */
@property(copy, nullable) NSString *nextPageToken;

@end


/**
 *  The request of cloudmonitoring.timeseriesDescriptors.list
 */
@interface GTLRCloudMonitoring_ListTimeseriesDescriptorsRequest : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "cloudmonitoring#listTimeseriesDescriptorsRequest".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The response of cloudmonitoring.timeseriesDescriptors.list
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "timeseries" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudMonitoring_ListTimeseriesDescriptorsResponse : GTLRCollectionObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "cloudmonitoring#listTimeseriesDescriptorsResponse".
 */
@property(copy, nullable) NSString *kind;

/**
 *  Pagination token. If present, indicates that additional results are
 *  available for retrieval. To access the results past the pagination limit,
 *  set this value to the pageToken query parameter.
 */
@property(copy, nullable) NSString *nextPageToken;

/**
 *  The oldest timestamp of the interval of this query, as an RFC 3339 string.
 */
@property(strong, nullable) GTLRDateTime *oldest;

/**
 *  The returned time series descriptors.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(strong, nullable) NSArray<GTLRCloudMonitoring_TimeseriesDescriptor *> *timeseries;

/**
 *  The youngest timestamp of the interval of this query, as an RFC 3339 string.
 */
@property(strong, nullable) GTLRDateTime *youngest;

@end


/**
 *  The request of cloudmonitoring.timeseries.list
 */
@interface GTLRCloudMonitoring_ListTimeseriesRequest : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "cloudmonitoring#listTimeseriesRequest".
 */
@property(copy, nullable) NSString *kind;

@end


/**
 *  The response of cloudmonitoring.timeseries.list
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "timeseries" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudMonitoring_ListTimeseriesResponse : GTLRCollectionObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "cloudmonitoring#listTimeseriesResponse".
 */
@property(copy, nullable) NSString *kind;

/**
 *  Pagination token. If present, indicates that additional results are
 *  available for retrieval. To access the results past the pagination limit,
 *  set the pageToken query parameter to this value. All of the points of a time
 *  series will be returned before returning any point of the subsequent time
 *  series.
 */
@property(copy, nullable) NSString *nextPageToken;

/**
 *  The oldest timestamp of the interval of this query as an RFC 3339 string.
 */
@property(strong, nullable) GTLRDateTime *oldest;

/**
 *  The returned time series.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(strong, nullable) NSArray<GTLRCloudMonitoring_Timeseries *> *timeseries;

/**
 *  The youngest timestamp of the interval of this query as an RFC 3339 string.
 */
@property(strong, nullable) GTLRDateTime *youngest;

@end


/**
 *  A metricDescriptor defines the name, label keys, and data type of a
 *  particular metric.
 */
@interface GTLRCloudMonitoring_MetricDescriptor : GTLRObject

/**
 *  Description of this metric.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(copy, nullable) NSString *descriptionProperty;

/** Labels defined for this metric. */
@property(strong, nullable) NSArray<GTLRCloudMonitoring_MetricDescriptorLabelDescriptor *> *labels;

/** The name of this metric. */
@property(copy, nullable) NSString *name;

/** The project ID to which the metric belongs. */
@property(copy, nullable) NSString *project;

/** Type description for this metric. */
@property(strong, nullable) GTLRCloudMonitoring_MetricDescriptorTypeDescriptor *typeDescriptor;

@end


/**
 *  A label in a metric is a description of this metric, including the key of
 *  this description (what the description is), and the value for this
 *  description.
 */
@interface GTLRCloudMonitoring_MetricDescriptorLabelDescriptor : GTLRObject

/**
 *  Label description.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(copy, nullable) NSString *descriptionProperty;

/** Label key. */
@property(copy, nullable) NSString *key;

@end


/**
 *  A type in a metric contains information about how the metric is collected
 *  and what its data points look like.
 */
@interface GTLRCloudMonitoring_MetricDescriptorTypeDescriptor : GTLRObject

/** The method of collecting data for the metric. See Metric types. */
@property(copy, nullable) NSString *metricType;

/**
 *  The data type of of individual points in the metric's time series. See
 *  Metric value types.
 */
@property(copy, nullable) NSString *valueType;

@end


/**
 *  Point is a single point in a time series. It consists of a start time, an
 *  end time, and a value.
 */
@interface GTLRCloudMonitoring_Point : GTLRObject

/**
 *  The value of this data point. Either "true" or "false".
 *
 *  Uses NSNumber of boolValue.
 */
@property(strong, nullable) NSNumber *boolValue;

/**
 *  The value of this data point as a distribution. A distribution value can
 *  contain a list of buckets and/or an underflowBucket and an overflowBucket.
 *  The values of these points can be used to create a histogram.
 */
@property(strong, nullable) GTLRCloudMonitoring_PointDistribution *distributionValue;

/**
 *  The value of this data point as a double-precision floating-point number.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(strong, nullable) NSNumber *doubleValue;

/**
 *  The interval [start, end] is the time period to which the point's value
 *  applies. For gauge metrics, whose values are instantaneous measurements,
 *  this interval should be empty (start should equal end). For cumulative
 *  metrics (of which deltas and rates are special cases), the interval should
 *  be non-empty. Both start and end are RFC 3339 strings.
 */
@property(strong, nullable) GTLRDateTime *end;

/**
 *  The value of this data point as a 64-bit integer.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *int64Value;

/**
 *  The interval [start, end] is the time period to which the point's value
 *  applies. For gauge metrics, whose values are instantaneous measurements,
 *  this interval should be empty (start should equal end). For cumulative
 *  metrics (of which deltas and rates are special cases), the interval should
 *  be non-empty. Both start and end are RFC 3339 strings.
 */
@property(strong, nullable) GTLRDateTime *start;

/** The value of this data point in string format. */
@property(copy, nullable) NSString *stringValue;

@end


/**
 *  Distribution data point value type. When writing distribution points, try to
 *  be consistent with the boundaries of your buckets. If you must modify the
 *  bucket boundaries, then do so by merging, partitioning, or appending rather
 *  than skewing them.
 */
@interface GTLRCloudMonitoring_PointDistribution : GTLRObject

/** The finite buckets. */
@property(strong, nullable) NSArray<GTLRCloudMonitoring_PointDistributionBucket *> *buckets;

/** The overflow bucket. */
@property(strong, nullable) GTLRCloudMonitoring_PointDistributionOverflowBucket *overflowBucket;

/** The underflow bucket. */
@property(strong, nullable) GTLRCloudMonitoring_PointDistributionUnderflowBucket *underflowBucket;

@end


/**
 *  The histogram's bucket. Buckets that form the histogram of a distribution
 *  value. If the upper bound of a bucket, say U1, does not equal the lower
 *  bound of the next bucket, say L2, this means that there is no event in [U1,
 *  L2).
 */
@interface GTLRCloudMonitoring_PointDistributionBucket : GTLRObject

/**
 *  The number of events whose values are in the interval defined by this
 *  bucket.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *count;

/**
 *  The lower bound of the value interval of this bucket (inclusive).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(strong, nullable) NSNumber *lowerBound;

/**
 *  The upper bound of the value interval of this bucket (exclusive).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(strong, nullable) NSNumber *upperBound;

@end


/**
 *  The overflow bucket is a special bucket that does not have the upperBound
 *  field; it includes all of the events that are no less than its lower bound.
 */
@interface GTLRCloudMonitoring_PointDistributionOverflowBucket : GTLRObject

/**
 *  The number of events whose values are in the interval defined by this
 *  bucket.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *count;

/**
 *  The lower bound of the value interval of this bucket (inclusive).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(strong, nullable) NSNumber *lowerBound;

@end


/**
 *  The underflow bucket is a special bucket that does not have the lowerBound
 *  field; it includes all of the events that are less than its upper bound.
 */
@interface GTLRCloudMonitoring_PointDistributionUnderflowBucket : GTLRObject

/**
 *  The number of events whose values are in the interval defined by this
 *  bucket.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(strong, nullable) NSNumber *count;

/**
 *  The upper bound of the value interval of this bucket (exclusive).
 *
 *  Uses NSNumber of doubleValue.
 */
@property(strong, nullable) NSNumber *upperBound;

@end


/**
 *  The monitoring data is organized as metrics and stored as data points that
 *  are recorded over time. Each data point represents information like the CPU
 *  utilization of your virtual machine. A historical record of these data
 *  points is called a time series.
 */
@interface GTLRCloudMonitoring_Timeseries : GTLRObject

/**
 *  The data points of this time series. The points are listed in order of their
 *  end timestamp, from younger to older.
 */
@property(strong, nullable) NSArray<GTLRCloudMonitoring_Point *> *points;

/** The descriptor of this time series. */
@property(strong, nullable) GTLRCloudMonitoring_TimeseriesDescriptor *timeseriesDesc;

@end


/**
 *  TimeseriesDescriptor identifies a single time series.
 */
@interface GTLRCloudMonitoring_TimeseriesDescriptor : GTLRObject

/** The label's name. */
@property(strong, nullable) GTLRCloudMonitoring_TimeseriesDescriptorLabels *labels;

/** The name of the metric. */
@property(copy, nullable) NSString *metric;

/**
 *  The Developers Console project number to which this time series belongs.
 */
@property(copy, nullable) NSString *project;

@end


/**
 *  The label's name.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudMonitoring_TimeseriesDescriptorLabels : GTLRObject
@end


/**
 *  GTLRCloudMonitoring_TimeseriesDescriptorLabel
 */
@interface GTLRCloudMonitoring_TimeseriesDescriptorLabel : GTLRObject

/** The label's name. */
@property(copy, nullable) NSString *key;

/** The label's value. */
@property(copy, nullable) NSString *value;

@end


/**
 *  When writing time series, TimeseriesPoint should be used instead of
 *  Timeseries, to enforce single point for each time series in the
 *  timeseries.write request.
 */
@interface GTLRCloudMonitoring_TimeseriesPoint : GTLRObject

/** The data point in this time series snapshot. */
@property(strong, nullable) GTLRCloudMonitoring_Point *point;

/** The descriptor of this time series. */
@property(strong, nullable) GTLRCloudMonitoring_TimeseriesDescriptor *timeseriesDesc;

@end


/**
 *  The request of cloudmonitoring.timeseries.write
 */
@interface GTLRCloudMonitoring_WriteTimeseriesRequest : GTLRObject

/** The label's name. */
@property(strong, nullable) GTLRCloudMonitoring_WriteTimeseriesRequestCommonLabels *commonLabels;

/**
 *  Provide time series specific labels and the data points for each time
 *  series. The labels in timeseries and the common_labels should form a
 *  complete list of labels that required by the metric.
 */
@property(strong, nullable) NSArray<GTLRCloudMonitoring_TimeseriesPoint *> *timeseries;

@end


/**
 *  The label's name.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudMonitoring_WriteTimeseriesRequestCommonLabels : GTLRObject
@end


/**
 *  The response of cloudmonitoring.timeseries.write
 */
@interface GTLRCloudMonitoring_WriteTimeseriesResponse : GTLRObject

/**
 *  Identifies what kind of resource this is. Value: the fixed string
 *  "cloudmonitoring#writeTimeseriesResponse".
 */
@property(copy, nullable) NSString *kind;

@end

NS_ASSUME_NONNULL_END
