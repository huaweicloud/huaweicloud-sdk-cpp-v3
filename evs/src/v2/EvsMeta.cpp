
#include <huaweicloud/evs/v2/EvsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef EvsMeta::genRequestDefForBatchCreateVolumeTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForBatchDeleteVolumeTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCinderAcceptVolumeTransfer() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCinderCreateVolumeTransfer() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCinderDeleteVolumeTransfer() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCinderListAvailabilityZones() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCinderListQuotas() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Usage")
                  .withJsonTag("usage")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCinderListVolumeTransfers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCinderListVolumeTypes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCinderShowVolumeTransfer() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCreateSnapshot() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForCreateVolume() {
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

HttpRequestDef EvsMeta::genRequestDefForDeleteSnapshot() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForDeleteVolume() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForListSnapshots() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VolumeId")
                  .withJsonTag("volume_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AvailabilityZone")
                  .withJsonTag("availability_zone")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DedicatedStorageName")
                  .withJsonTag("dedicated_storage_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DedicatedStorageId")
                  .withJsonTag("dedicated_storage_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForListVolumeTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForListVolumes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Metadata")
                  .withJsonTag("metadata")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AvailabilityZone")
                  .withJsonTag("availability_zone")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Multiattach")
                  .withJsonTag("multiattach")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DedicatedStorageId")
                  .withJsonTag("dedicated_storage_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DedicatedStorageName")
                  .withJsonTag("dedicated_storage_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VolumeTypeId")
                  .withJsonTag("volume_type_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ids")
                  .withJsonTag("ids")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServerId")
                  .withJsonTag("server_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForListVolumesByTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForModifyVolumeQoS() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForResizeVolume() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForRetypeVolume() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForRollbackSnapshot() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForShowJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForShowSnapshot() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForShowVolume() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForShowVolumeTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForUpdateSnapshot() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForUpdateVolume() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForListVersions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef EvsMeta::genRequestDefForShowVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}


}
}
}
}

