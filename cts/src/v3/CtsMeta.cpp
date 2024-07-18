
#include <huaweicloud/cts/v3/CtsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CtsMeta::genRequestDefForBatchCreateResourceTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForBatchDeleteResourceTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForCheckObsBuckets() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForCreateNotification() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForCreateTracker() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForDeleteNotification() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("NotificationId")
                  .withJsonTag("notification_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForDeleteTracker() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerName")
                  .withJsonTag("tracker_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerType")
                  .withJsonTag("tracker_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForListNotifications() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("NotificationName")
                  .withJsonTag("notification_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForListOperations() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceType")
                  .withJsonTag("resource_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForListQuotas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForListTraceResources() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForListTraces() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TraceType")
                  .withJsonTag("trace_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Next")
                  .withJsonTag("next")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerName")
                  .withJsonTag("tracker_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("User")
                  .withJsonTag("user")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceId")
                  .withJsonTag("resource_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceName")
                  .withJsonTag("resource_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceType")
                  .withJsonTag("resource_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TraceId")
                  .withJsonTag("trace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TraceName")
                  .withJsonTag("trace_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TraceRating")
                  .withJsonTag("trace_rating")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccessKeyId")
                  .withJsonTag("access_key_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForListTrackers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerName")
                  .withJsonTag("tracker_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerType")
                  .withJsonTag("tracker_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForListUserResources() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForUpdateNotification() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CtsMeta::genRequestDefForUpdateTracker() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}


}
}
}
}

