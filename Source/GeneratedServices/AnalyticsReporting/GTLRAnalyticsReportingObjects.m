// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Analytics Reporting API (analyticsreporting/v4)
// Description:
//   Accesses Analytics report data.
// Documentation:
//   https://developers.google.com/analytics/devguides/reporting/core/v4/

#import "GTLRAnalyticsReportingObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRAnalyticsReporting_Cohort.type
NSString * const kGTLRAnalyticsReporting_Cohort_Type_FirstVisitDate = @"FIRST_VISIT_DATE";
NSString * const kGTLRAnalyticsReporting_Cohort_Type_UnspecifiedCohortType = @"UNSPECIFIED_COHORT_TYPE";

// GTLRAnalyticsReporting_DimensionFilter.operatorProperty
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_BeginsWith = @"BEGINS_WITH";
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_EndsWith = @"ENDS_WITH";
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_Exact = @"EXACT";
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_InList = @"IN_LIST";
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_NumericEqual = @"NUMERIC_EQUAL";
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_NumericGreaterThan = @"NUMERIC_GREATER_THAN";
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_NumericLessThan = @"NUMERIC_LESS_THAN";
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_OperatorUnspecified = @"OPERATOR_UNSPECIFIED";
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_Partial = @"PARTIAL";
NSString * const kGTLRAnalyticsReporting_DimensionFilter_OperatorProperty_Regexp = @"REGEXP";

// GTLRAnalyticsReporting_DimensionFilterClause.operatorProperty
NSString * const kGTLRAnalyticsReporting_DimensionFilterClause_OperatorProperty_And = @"AND";
NSString * const kGTLRAnalyticsReporting_DimensionFilterClause_OperatorProperty_OperatorUnspecified = @"OPERATOR_UNSPECIFIED";
NSString * const kGTLRAnalyticsReporting_DimensionFilterClause_OperatorProperty_Or = @"OR";

// GTLRAnalyticsReporting_Metric.formattingType
NSString * const kGTLRAnalyticsReporting_Metric_FormattingType_Currency = @"CURRENCY";
NSString * const kGTLRAnalyticsReporting_Metric_FormattingType_Float = @"FLOAT";
NSString * const kGTLRAnalyticsReporting_Metric_FormattingType_Integer = @"INTEGER";
NSString * const kGTLRAnalyticsReporting_Metric_FormattingType_MetricTypeUnspecified = @"METRIC_TYPE_UNSPECIFIED";
NSString * const kGTLRAnalyticsReporting_Metric_FormattingType_Percent = @"PERCENT";
NSString * const kGTLRAnalyticsReporting_Metric_FormattingType_Time = @"TIME";

// GTLRAnalyticsReporting_MetricFilter.operatorProperty
NSString * const kGTLRAnalyticsReporting_MetricFilter_OperatorProperty_Equal = @"EQUAL";
NSString * const kGTLRAnalyticsReporting_MetricFilter_OperatorProperty_GreaterThan = @"GREATER_THAN";
NSString * const kGTLRAnalyticsReporting_MetricFilter_OperatorProperty_IsMissing = @"IS_MISSING";
NSString * const kGTLRAnalyticsReporting_MetricFilter_OperatorProperty_LessThan = @"LESS_THAN";
NSString * const kGTLRAnalyticsReporting_MetricFilter_OperatorProperty_OperatorUnspecified = @"OPERATOR_UNSPECIFIED";

// GTLRAnalyticsReporting_MetricFilterClause.operatorProperty
NSString * const kGTLRAnalyticsReporting_MetricFilterClause_OperatorProperty_And = @"AND";
NSString * const kGTLRAnalyticsReporting_MetricFilterClause_OperatorProperty_OperatorUnspecified = @"OPERATOR_UNSPECIFIED";
NSString * const kGTLRAnalyticsReporting_MetricFilterClause_OperatorProperty_Or = @"OR";

// GTLRAnalyticsReporting_MetricHeaderEntry.type
NSString * const kGTLRAnalyticsReporting_MetricHeaderEntry_Type_Currency = @"CURRENCY";
NSString * const kGTLRAnalyticsReporting_MetricHeaderEntry_Type_Float = @"FLOAT";
NSString * const kGTLRAnalyticsReporting_MetricHeaderEntry_Type_Integer = @"INTEGER";
NSString * const kGTLRAnalyticsReporting_MetricHeaderEntry_Type_MetricTypeUnspecified = @"METRIC_TYPE_UNSPECIFIED";
NSString * const kGTLRAnalyticsReporting_MetricHeaderEntry_Type_Percent = @"PERCENT";
NSString * const kGTLRAnalyticsReporting_MetricHeaderEntry_Type_Time = @"TIME";

// GTLRAnalyticsReporting_OrderBy.orderType
NSString * const kGTLRAnalyticsReporting_OrderBy_OrderType_Delta = @"DELTA";
NSString * const kGTLRAnalyticsReporting_OrderBy_OrderType_DimensionAsInteger = @"DIMENSION_AS_INTEGER";
NSString * const kGTLRAnalyticsReporting_OrderBy_OrderType_HistogramBucket = @"HISTOGRAM_BUCKET";
NSString * const kGTLRAnalyticsReporting_OrderBy_OrderType_OrderTypeUnspecified = @"ORDER_TYPE_UNSPECIFIED";
NSString * const kGTLRAnalyticsReporting_OrderBy_OrderType_Smart = @"SMART";
NSString * const kGTLRAnalyticsReporting_OrderBy_OrderType_Value = @"VALUE";

// GTLRAnalyticsReporting_OrderBy.sortOrder
NSString * const kGTLRAnalyticsReporting_OrderBy_SortOrder_Ascending = @"ASCENDING";
NSString * const kGTLRAnalyticsReporting_OrderBy_SortOrder_Descending = @"DESCENDING";
NSString * const kGTLRAnalyticsReporting_OrderBy_SortOrder_SortOrderUnspecified = @"SORT_ORDER_UNSPECIFIED";

// GTLRAnalyticsReporting_ReportRequest.samplingLevel
NSString * const kGTLRAnalyticsReporting_ReportRequest_SamplingLevel_Default = @"DEFAULT";
NSString * const kGTLRAnalyticsReporting_ReportRequest_SamplingLevel_Large = @"LARGE";
NSString * const kGTLRAnalyticsReporting_ReportRequest_SamplingLevel_SamplingUnspecified = @"SAMPLING_UNSPECIFIED";
NSString * const kGTLRAnalyticsReporting_ReportRequest_SamplingLevel_Small = @"SMALL";

// GTLRAnalyticsReporting_SegmentDimensionFilter.operatorProperty
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_BeginsWith = @"BEGINS_WITH";
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_EndsWith = @"ENDS_WITH";
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_Exact = @"EXACT";
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_InList = @"IN_LIST";
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_NumericBetween = @"NUMERIC_BETWEEN";
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_NumericGreaterThan = @"NUMERIC_GREATER_THAN";
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_NumericLessThan = @"NUMERIC_LESS_THAN";
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_OperatorUnspecified = @"OPERATOR_UNSPECIFIED";
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_Partial = @"PARTIAL";
NSString * const kGTLRAnalyticsReporting_SegmentDimensionFilter_OperatorProperty_Regexp = @"REGEXP";

// GTLRAnalyticsReporting_SegmentMetricFilter.operatorProperty
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_OperatorProperty_Between = @"BETWEEN";
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_OperatorProperty_Equal = @"EQUAL";
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_OperatorProperty_GreaterThan = @"GREATER_THAN";
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_OperatorProperty_LessThan = @"LESS_THAN";
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_OperatorProperty_UnspecifiedOperator = @"UNSPECIFIED_OPERATOR";

// GTLRAnalyticsReporting_SegmentMetricFilter.scope
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_Scope_Hit = @"HIT";
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_Scope_Product = @"PRODUCT";
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_Scope_Session = @"SESSION";
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_Scope_UnspecifiedScope = @"UNSPECIFIED_SCOPE";
NSString * const kGTLRAnalyticsReporting_SegmentMetricFilter_Scope_User = @"USER";

// GTLRAnalyticsReporting_SegmentSequenceStep.matchType
NSString * const kGTLRAnalyticsReporting_SegmentSequenceStep_MatchType_ImmediatelyPrecedes = @"IMMEDIATELY_PRECEDES";
NSString * const kGTLRAnalyticsReporting_SegmentSequenceStep_MatchType_Precedes = @"PRECEDES";
NSString * const kGTLRAnalyticsReporting_SegmentSequenceStep_MatchType_UnspecifiedMatchType = @"UNSPECIFIED_MATCH_TYPE";

// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_Cohort
//

@implementation GTLRAnalyticsReporting_Cohort
@dynamic dateRange, name, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_CohortGroup
//

@implementation GTLRAnalyticsReporting_CohortGroup
@dynamic cohorts, lifetimeValue;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"cohorts" : [GTLRAnalyticsReporting_Cohort class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_ColumnHeader
//

@implementation GTLRAnalyticsReporting_ColumnHeader
@dynamic dimensions, metricHeader;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dimensions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_DateRange
//

@implementation GTLRAnalyticsReporting_DateRange
@dynamic endDate, startDate;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_DateRangeValues
//

@implementation GTLRAnalyticsReporting_DateRangeValues
@dynamic pivotValueRegions, values;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"pivotValueRegions" : [GTLRAnalyticsReporting_PivotValueRegion class],
    @"values" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_Dimension
//

@implementation GTLRAnalyticsReporting_Dimension
@dynamic histogramBuckets, name;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"histogramBuckets" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_DimensionFilter
//

@implementation GTLRAnalyticsReporting_DimensionFilter
@dynamic caseSensitive, dimensionName, expressions, notProperty,
         operatorProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"notProperty" : @"not",
    @"operatorProperty" : @"operator"
  };
  return map;
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"expressions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_DimensionFilterClause
//

@implementation GTLRAnalyticsReporting_DimensionFilterClause
@dynamic filters, operatorProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"operatorProperty" : @"operator" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"filters" : [GTLRAnalyticsReporting_DimensionFilter class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_DynamicSegment
//

@implementation GTLRAnalyticsReporting_DynamicSegment
@dynamic name, sessionSegment, userSegment;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_GetReportsRequest
//

@implementation GTLRAnalyticsReporting_GetReportsRequest
@dynamic reportRequests;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"reportRequests" : [GTLRAnalyticsReporting_ReportRequest class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_GetReportsResponse
//

@implementation GTLRAnalyticsReporting_GetReportsResponse
@dynamic reports;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"reports" : [GTLRAnalyticsReporting_Report class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_Metric
//

@implementation GTLRAnalyticsReporting_Metric
@dynamic alias, expression, formattingType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_MetricFilter
//

@implementation GTLRAnalyticsReporting_MetricFilter
@dynamic comparisonValue, metricName, notProperty, operatorProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"notProperty" : @"not",
    @"operatorProperty" : @"operator"
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_MetricFilterClause
//

@implementation GTLRAnalyticsReporting_MetricFilterClause
@dynamic filters, operatorProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"operatorProperty" : @"operator" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"filters" : [GTLRAnalyticsReporting_MetricFilter class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_MetricHeader
//

@implementation GTLRAnalyticsReporting_MetricHeader
@dynamic metricHeaderEntries, pivotHeaders;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"metricHeaderEntries" : [GTLRAnalyticsReporting_MetricHeaderEntry class],
    @"pivotHeaders" : [GTLRAnalyticsReporting_PivotHeader class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_MetricHeaderEntry
//

@implementation GTLRAnalyticsReporting_MetricHeaderEntry
@dynamic name, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_OrderBy
//

@implementation GTLRAnalyticsReporting_OrderBy
@dynamic fieldName, orderType, sortOrder;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_OrFiltersForSegment
//

@implementation GTLRAnalyticsReporting_OrFiltersForSegment
@dynamic segmentFilterClauses;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"segmentFilterClauses" : [GTLRAnalyticsReporting_SegmentFilterClause class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_Pivot
//

@implementation GTLRAnalyticsReporting_Pivot
@dynamic dimensionFilterClauses, dimensions, maxGroupCount, metrics, startGroup;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dimensionFilterClauses" : [GTLRAnalyticsReporting_DimensionFilterClause class],
    @"dimensions" : [GTLRAnalyticsReporting_Dimension class],
    @"metrics" : [GTLRAnalyticsReporting_Metric class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_PivotHeader
//

@implementation GTLRAnalyticsReporting_PivotHeader
@dynamic pivotHeaderEntries, totalPivotGroupsCount;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"pivotHeaderEntries" : [GTLRAnalyticsReporting_PivotHeaderEntry class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_PivotHeaderEntry
//

@implementation GTLRAnalyticsReporting_PivotHeaderEntry
@dynamic dimensionNames, dimensionValues, metric;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dimensionNames" : [NSString class],
    @"dimensionValues" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_PivotValueRegion
//

@implementation GTLRAnalyticsReporting_PivotValueRegion
@dynamic values;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"values" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_Report
//

@implementation GTLRAnalyticsReporting_Report
@dynamic columnHeader, data, nextPageToken;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_ReportData
//

@implementation GTLRAnalyticsReporting_ReportData
@dynamic isDataGolden, maximums, minimums, rowCount, rows, samplesReadCounts,
         samplingSpaceSizes, totals;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"maximums" : [GTLRAnalyticsReporting_DateRangeValues class],
    @"minimums" : [GTLRAnalyticsReporting_DateRangeValues class],
    @"rows" : [GTLRAnalyticsReporting_ReportRow class],
    @"samplesReadCounts" : [NSNumber class],
    @"samplingSpaceSizes" : [NSNumber class],
    @"totals" : [GTLRAnalyticsReporting_DateRangeValues class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_ReportRequest
//

@implementation GTLRAnalyticsReporting_ReportRequest
@dynamic cohortGroup, dateRanges, dimensionFilterClauses, dimensions,
         filtersExpression, hideTotals, hideValueRanges, includeEmptyRows,
         metricFilterClauses, metrics, orderBys, pageSize, pageToken, pivots,
         samplingLevel, segments, viewId;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dateRanges" : [GTLRAnalyticsReporting_DateRange class],
    @"dimensionFilterClauses" : [GTLRAnalyticsReporting_DimensionFilterClause class],
    @"dimensions" : [GTLRAnalyticsReporting_Dimension class],
    @"metricFilterClauses" : [GTLRAnalyticsReporting_MetricFilterClause class],
    @"metrics" : [GTLRAnalyticsReporting_Metric class],
    @"orderBys" : [GTLRAnalyticsReporting_OrderBy class],
    @"pivots" : [GTLRAnalyticsReporting_Pivot class],
    @"segments" : [GTLRAnalyticsReporting_Segment class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_ReportRow
//

@implementation GTLRAnalyticsReporting_ReportRow
@dynamic dimensions, metrics;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dimensions" : [NSString class],
    @"metrics" : [GTLRAnalyticsReporting_DateRangeValues class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_Segment
//

@implementation GTLRAnalyticsReporting_Segment
@dynamic dynamicSegment, segmentId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_SegmentDefinition
//

@implementation GTLRAnalyticsReporting_SegmentDefinition
@dynamic segmentFilters;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"segmentFilters" : [GTLRAnalyticsReporting_SegmentFilter class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_SegmentDimensionFilter
//

@implementation GTLRAnalyticsReporting_SegmentDimensionFilter
@dynamic caseSensitive, dimensionName, expressions, maxComparisonValue,
         minComparisonValue, operatorProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"operatorProperty" : @"operator" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"expressions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_SegmentFilter
//

@implementation GTLRAnalyticsReporting_SegmentFilter
@dynamic notProperty, sequenceSegment, simpleSegment;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"notProperty" : @"not" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_SegmentFilterClause
//

@implementation GTLRAnalyticsReporting_SegmentFilterClause
@dynamic dimensionFilter, metricFilter, notProperty;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"notProperty" : @"not" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_SegmentMetricFilter
//

@implementation GTLRAnalyticsReporting_SegmentMetricFilter
@dynamic comparisonValue, maxComparisonValue, metricName, operatorProperty,
         scope;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"operatorProperty" : @"operator" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_SegmentSequenceStep
//

@implementation GTLRAnalyticsReporting_SegmentSequenceStep
@dynamic matchType, orFiltersForSegment;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"orFiltersForSegment" : [GTLRAnalyticsReporting_OrFiltersForSegment class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_SequenceSegment
//

@implementation GTLRAnalyticsReporting_SequenceSegment
@dynamic firstStepShouldMatchFirstHit, segmentSequenceSteps;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"segmentSequenceSteps" : [GTLRAnalyticsReporting_SegmentSequenceStep class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsReporting_SimpleSegment
//

@implementation GTLRAnalyticsReporting_SimpleSegment
@dynamic orFiltersForSegment;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"orFiltersForSegment" : [GTLRAnalyticsReporting_OrFiltersForSegment class]
  };
  return map;
}

@end
