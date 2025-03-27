
#include <huaweicloud/ecs/v2/EcsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef EcsMeta::genRequestDefForAddServerGroupMember() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForAssociateServerVirtualIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForAttachServerVolume() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchAddServerNics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchAttachSharableVolumes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchCreateServerTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchDeleteServerNics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchDeleteServerTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchRebootServers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchResetServersPassword() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchStartServers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchStopServers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForBatchUpdateServersName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForChangeServerChargeMode() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForChangeServerNetworkInterface() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForChangeServerOsWithCloudInit() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForChangeServerOsWithoutCloudInit() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForChangeVpc() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForCreatePostPaidServers() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXClientToken;
    reqDefBuilder.withRequestField(headerParamXClientToken
                  .withName("XClientToken")
                  .withJsonTag("X-Client-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForCreateServerGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForCreateServers() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXClientToken;
    reqDefBuilder.withRequestField(headerParamXClientToken
                  .withName("XClientToken")
                  .withJsonTag("X-Client-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForDeleteServerGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForDeleteServerGroupMember() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForDeleteServerMetadata() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForDeleteServerPassword() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForDeleteServers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForDetachServerVolume() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteFlag")
                  .withJsonTag("delete_flag")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForDisassociateServerVirtualIp() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListCloudServers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InRecycleBin")
                  .withJsonTag("in_recycle_bin")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SpodId")
                  .withJsonTag("spod_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FlavorName")
                  .withJsonTag("flavor_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ImageId")
                  .withJsonTag("image_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Metadata")
                  .withJsonTag("metadata")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MetadataKey")
                  .withJsonTag("metadata-key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NotTags")
                  .withJsonTag("not-tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AvailabilityZone")
                  .withJsonTag("availability_zone")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AvailabilityZoneEq")
                  .withJsonTag("availability_zone_eq")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ChargingMode")
                  .withJsonTag("charging_mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyName")
                  .withJsonTag("key_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LaunchedSince")
                  .withJsonTag("launched_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExpectFields")
                  .withJsonTag("expect-fields")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListFlavorSellPolicies() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FlavorId")
                  .withJsonTag("flavor_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SellStatus")
                  .withJsonTag("sell_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SellMode")
                  .withJsonTag("sell_mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AvailabilityZoneId")
                  .withJsonTag("availability_zone_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LongestSpotDurationHoursGt")
                  .withJsonTag("longest_spot_duration_hours_gt")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LargestSpotDurationCountGt")
                  .withJsonTag("largest_spot_duration_count_gt")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LongestSpotDurationHours")
                  .withJsonTag("longest_spot_duration_hours")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LargestSpotDurationCount")
                  .withJsonTag("largest_spot_duration_count")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InterruptionPolicy")
                  .withJsonTag("interruption_policy")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListFlavors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AvailabilityZone")
                  .withJsonTag("availability_zone")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListResizeFlavors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceUuid")
                  .withJsonTag("instance_uuid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceFlavorId")
                  .withJsonTag("source_flavor_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceFlavorName")
                  .withJsonTag("source_flavor_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListScheduledEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("InstanceId")
                  .withJsonTag("instance_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublishSince")
                  .withJsonTag("publish_since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublishUntil")
                  .withJsonTag("publish_until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListServerAzInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListServerBlockDevices() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListServerGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListServerInterfaces() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListServerTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListServerVolumeAttachments() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListServersByTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForListServersDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Flavor")
                  .withJsonTag("flavor")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NotTags")
                  .withJsonTag("not-tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ReservationId")
                  .withJsonTag("reservation_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IpEq")
                  .withJsonTag("ip_eq")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerId")
                  .withJsonTag("server_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForMigrateServer() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaAssociateSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaAttachInterface() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaCreateKeypair() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamOpenStackAPIVersion;
    reqDefBuilder.withRequestField(headerParamOpenStackAPIVersion
                  .withName("OpenStackAPIVersion")
                  .withJsonTag("OpenStack-API-Version")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaCreateServers() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamOpenStackAPIVersion;
    reqDefBuilder.withRequestField(headerParamOpenStackAPIVersion
                  .withName("OpenStackAPIVersion")
                  .withJsonTag("OpenStack-API-Version")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaDeleteKeypair() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaDeleteServer() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaDisassociateSecurityGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaListAvailabilityZones() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaListKeypairs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamOpenStackAPIVersion;
    reqDefBuilder.withRequestField(headerParamOpenStackAPIVersion
                  .withName("OpenStackAPIVersion")
                  .withJsonTag("OpenStack-API-Version")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaListServerSecurityGroups() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaListServersDetails() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ChangesSince")
                  .withJsonTag("changes-since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Flavor")
                  .withJsonTag("flavor")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Image")
                  .withJsonTag("image")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ip")
                  .withJsonTag("ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NotTags")
                  .withJsonTag("not-tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ReservationId")
                  .withJsonTag("reservation_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    FieldDef headerParamOpenStackAPIVersion;
    reqDefBuilder.withRequestField(headerParamOpenStackAPIVersion
                  .withName("OpenStackAPIVersion")
                  .withJsonTag("OpenStack-API-Version")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaShowFlavorExtraSpecs() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaShowKeypair() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamOpenStackAPIVersion;
    reqDefBuilder.withRequestField(headerParamOpenStackAPIVersion
                  .withName("OpenStackAPIVersion")
                  .withJsonTag("OpenStack-API-Version")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaShowServer() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamOpenStackAPIVersion;
    reqDefBuilder.withRequestField(headerParamOpenStackAPIVersion
                  .withName("OpenStackAPIVersion")
                  .withJsonTag("OpenStack-API-Version")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaShowServerInterface() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForRegisterServerMonitor() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForReinstallServerWithCloudInit() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForReinstallServerWithoutCloudInit() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForResetServerPassword() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForResizePostPaidServer() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForResizeServer() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForShowResetPasswordFlag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForShowServer() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForShowServerBlockDevice() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForShowServerGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForShowServerLimits() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForShowServerPassword() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForShowServerRemoteConsole() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForShowServerTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForUpdateServer() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForUpdateServerAutoTerminateTime() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForUpdateServerBlockDevice() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForUpdateServerInterface() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForUpdateServerMetadata() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaListVersions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForNovaShowVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EcsMeta::genRequestDefForShowJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}


}
}
}
}

