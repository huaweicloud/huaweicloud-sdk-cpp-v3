
#include <huaweicloud/sdrs/v1/SdrsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef SdrsMeta::genRequestDefForAddProtectedInstanceNic() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForAddProtectedInstanceTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForAttachProtectedInstanceReplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForBatchAddTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForBatchCreateProtectedInstances() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForBatchDeleteProtectedInstances() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForBatchDeleteTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForCreateDisasterRecoveryDrill() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForCreateProtectedInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForCreateProtectionGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForCreateReplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDeleteAllServerGroupFailureJobs() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDeleteDisasterRecoveryDrill() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDeleteFailureJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDeleteProtectedInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDeleteProtectedInstanceNic() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDeleteProtectedInstanceTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDeleteProtectionGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDeleteReplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDeleteServerGroupFailureJobs() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForDetachProtectedInstanceReplication() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForExpandReplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListActiveActiveDomains() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListDisasterRecoveryDrills() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ServerGroupId")
                  .withJsonTag("server_group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DrillVpcId")
                  .withJsonTag("drill_vpc_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListFailureJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FailureStatus")
                  .withJsonTag("failure_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceName")
                  .withJsonTag("resource_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerGroupId")
                  .withJsonTag("server_group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceType")
                  .withJsonTag("resource_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListProtectedInstanceTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListProtectedInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ServerGroupId")
                  .withJsonTag("server_group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerGroupIds")
                  .withJsonTag("server_group_ids")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProtectedInstanceIds")
                  .withJsonTag("protected_instance_ids")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryType")
                  .withJsonTag("query_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AvailabilityZone")
                  .withJsonTag("availability_zone")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListProtectedInstancesByTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListProtectedInstancesProjectTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListProtectionGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryType")
                  .withJsonTag("query_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AvailabilityZone")
                  .withJsonTag("availability_zone")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListReplications() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ServerGroupId")
                  .withJsonTag("server_group_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerGroupIds")
                  .withJsonTag("server_group_ids")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProtectedInstanceId")
                  .withJsonTag("protected_instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProtectedInstanceIds")
                  .withJsonTag("protected_instance_ids")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryType")
                  .withJsonTag("query_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AvailabilityZone")
                  .withJsonTag("availability_zone")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListRpoStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceType")
                  .withJsonTag("resource_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForResizeProtectedInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForShowDisasterRecoveryDrill() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForShowProtectedInstance() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForShowProtectionGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForShowQuota() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForShowReplication() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForStartFailoverProtectionGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForStartProtectionGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForStartReverseProtectionGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForStopProtectionGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForUpdateDisasterRecoveryDrillName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForUpdateProtectedInstanceName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForUpdateProtectionGroupName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForUpdateReplicationName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForListApiVersions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForShowSpecifiedApiVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef SdrsMeta::genRequestDefForShowJobStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}


}
}
}
}

