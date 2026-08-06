
#include <huaweicloud/modelarts/v1/ModelArtsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef ModelArtsMeta::genRequestDefForAcceptScheduledEvent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspaceId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspaceId")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-request-id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForAttachDynamicStorage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchBindInferApiKeys() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchBindPoolNodes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchCreatePoolTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchDeleteInferIntranetConnections() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchDeleteInferServices() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchDeletePoolNodes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchDeletePoolTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchLockPoolNodes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchMigratePoolNodes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchRebootPoolNodes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchResetPoolNodes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchResizePoolNodes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchUnbindInferApiKeys() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchUnlockPoolNodes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchUpdatePoolNodes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBindInferApiKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCancelInferDeployment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForChangeAlgorithm() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForChangeTrainingExperiment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForChangeTrainingJobDescription() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCheckTrainingExperiment() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ExperimentName")
                  .withJsonTag("experiment_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCountInferServicesByTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateAlgorithm() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateAlgorithmVersionToGallery() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateAuthorization() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateInferApiKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateInferDeployment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateInferIntranetConnection() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateInferService() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef headerParamXAuthTokenProvider;
    reqDefBuilder.withRequestField(headerParamXAuthTokenProvider
                  .withName("XAuthTokenProvider")
                  .withJsonTag("X-Auth-Token-Provider")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateInferServiceTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateModelArtsAgency() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateNetwork() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateNodePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateOrderId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ActionType")
                  .withJsonTag("actionType")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspaceId")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreatePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXModelArtsUserID;
    reqDefBuilder.withRequestField(headerParamXModelArtsUserID
                  .withName("XModelArtsUserID")
                  .withJsonTag("X-ModelArts-User-ID")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreatePoolPlugin() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateSaveImageJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateTrainJobTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateTrainingExperiment() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateTrainingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateWorkspace() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteAlgorithm() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteAuthorizations() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserId")
                  .withJsonTag("user_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteImageGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteInferApiKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteInferDeployment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteInferDeploymentInstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Force")
                  .withJsonTag("force")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Operation")
                  .withJsonTag("operation")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteInferDeploymentPod() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Force")
                  .withJsonTag("force")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteInferDeploymentVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteInferServiceTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteNetwork() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteNodePool() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeletePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXModelArtsUserID;
    reqDefBuilder.withRequestField(headerParamXModelArtsUserID
                  .withName("XModelArtsUserID")
                  .withJsonTag("X-ModelArts-User-ID")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteTrainJobTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteTrainingExperiment() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteTrainingJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteWorkspace() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDetachDynamicStorage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetAuthorizations() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SortBy")
                  .withJsonTag("sort_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Order")
                  .withJsonTag("order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetHyperinstanceOperation() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListAlgorithms() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortBy")
                  .withJsonTag("sort_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Order")
                  .withJsonTag("order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupBy")
                  .withJsonTag("group_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Searches")
                  .withJsonTag("searches")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListDynamicStorages() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListEventCategories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FlavorType")
                  .withJsonTag("flavor_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Resource")
                  .withJsonTag("resource")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Continue")
                  .withJsonTag("continue")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Since")
                  .withJsonTag("since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Until")
                  .withJsonTag("until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListImage() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NameFuzzyMatch")
                  .withJsonTag("name_fuzzy_match")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Namespace")
                  .withJsonTag("namespace")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceType")
                  .withJsonTag("service_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ShowName")
                  .withJsonTag("show_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ShowTag")
                  .withJsonTag("show_tag")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListImageGroup() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NameFuzzyMatch")
                  .withJsonTag("name_fuzzy_match")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Namespace")
                  .withJsonTag("namespace")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SwrInstanceId")
                  .withJsonTag("swr_instance_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferApiKeys() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Scope")
                  .withJsonTag("scope")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceId")
                  .withJsonTag("service_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceName")
                  .withJsonTag("service_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("KeyId")
                  .withJsonTag("key_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WithUserScope")
                  .withJsonTag("with_user_scope")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferClusterFlavors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FlavorType")
                  .withJsonTag("flavor_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferDeploymentInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PodName")
                  .withJsonTag("pod_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferDeploymentPodEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferDeploymentPods() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PodName")
                  .withJsonTag("pod_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PodId")
                  .withJsonTag("pod_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PodNodeIp")
                  .withJsonTag("pod_node_ip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PodNodeName")
                  .withJsonTag("pod_node_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferDeploymentVersions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferDeployments() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DeleteAfter")
                  .withJsonTag("delete_after")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferIntranetConnectionApplications() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Scene")
                  .withJsonTag("scene")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceId")
                  .withJsonTag("service_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceName")
                  .withJsonTag("service_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcId")
                  .withJsonTag("vpc_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcName")
                  .withJsonTag("vpc_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PoolId")
                  .withJsonTag("pool_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferIntranetConnectionReviews() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Scene")
                  .withJsonTag("scene")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ApplicantDomainId")
                  .withJsonTag("applicant_domain_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceId")
                  .withJsonTag("service_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ApplicantUserName")
                  .withJsonTag("applicant_user_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ServiceName")
                  .withJsonTag("service_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcName")
                  .withJsonTag("vpc_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VpcId")
                  .withJsonTag("vpc_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PoolId")
                  .withJsonTag("pool_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
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
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferServiceEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("EventType")
                  .withJsonTag("event_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EventInfoKey")
                  .withJsonTag("event_info_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferServiceTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferServices() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PoolId")
                  .withJsonTag("pool_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PoolName")
                  .withJsonTag("pool_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AuthType")
                  .withJsonTag("auth_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserName")
                  .withJsonTag("user_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssetId")
                  .withJsonTag("asset_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferServicesByTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Since")
                  .withJsonTag("since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Until")
                  .withJsonTag("until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Resource")
                  .withJsonTag("resource")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListNetworks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("LabelSelector")
                  .withJsonTag("labelSelector")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Continue")
                  .withJsonTag("continue")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListNodePoolNodes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Continue")
                  .withJsonTag("continue")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListNodePools() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListPluginTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateName")
                  .withJsonTag("templateName")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PoolName")
                  .withJsonTag("poolName")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListPoolNodes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Continue")
                  .withJsonTag("continue")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListPoolPlugins() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListPoolTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListPools() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspaceId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LabelSelector")
                  .withJsonTag("labelSelector")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListResourceFlavors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Continue")
                  .withJsonTag("continue")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("LabelSelector")
                  .withJsonTag("labelSelector")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListScheduledEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspaceId")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NodeName")
                  .withJsonTag("nodeName")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PoolName")
                  .withJsonTag("poolName")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublishStartTime")
                  .withJsonTag("publishStartTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PublishEndTime")
                  .withJsonTag("publishEndTime")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-request-id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListTrainingExperiments() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortBy")
                  .withJsonTag("sort_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Order")
                  .withJsonTag("order")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListTrainingJobEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Order")
                  .withJsonTag("order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartTime")
                  .withJsonTag("start_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndTime")
                  .withJsonTag("end_time")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Level")
                  .withJsonTag("level")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Pattern")
                  .withJsonTag("pattern")
                  .withLocationType(Query_));
    FieldDef headerParamXLanguage;
    reqDefBuilder.withRequestField(headerParamXLanguage
                  .withName("XLanguage")
                  .withJsonTag("X-Language")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListTrainingJobStages() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListTrainingJobTasks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ScheduleCount")
                  .withJsonTag("schedule_count")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListTrainingJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListWorkloads() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Hostip")
                  .withJsonTag("hostip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ascend")
                  .withJsonTag("ascend")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListWorkspace() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortBy")
                  .withJsonTag("sort_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Order")
                  .withJsonTag("order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FilterAccessible")
                  .withJsonTag("filter_accessible")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForModifyInferIntranetConnections() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForNotifyTrainingJobInformation() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForPatchNetwork() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForPatchNodePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForPatchPool() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXModelArtsUserID;
    reqDefBuilder.withRequestField(headerParamXModelArtsUserID
                  .withName("XModelArtsUserID")
                  .withJsonTag("X-ModelArts-User-ID")
                  .withLocationType(Header_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForRegisterImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowAlgorithmByUuid() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowAuthmodeDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowAutoSearchParamAnalysisResultPath() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowAutoSearchParamsAnalysis() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowAutoSearchPerTrial() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowAutoSearchTrialEarlyStop() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowAutoSearchTrials() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowAutoSearchYamlTemplateContent() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowAutoSearchYamlTemplatesInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowDynamicStorage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowImage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowInferDeployment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowInferDeploymentVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowInferService() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowInferServiceCluster() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXUserToken;
    reqDefBuilder.withRequestField(headerParamXUserToken
                  .withName("XUserToken")
                  .withJsonTag("X-User-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowInferServiceTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowNetwork() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowNetworkAvailableIp() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("NetworkId")
                  .withJsonTag("network_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowNodeConfigTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowNodePool() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Continue")
                  .withJsonTag("continue")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowObsUrlOfTrainingJobLogs() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowOrder() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowOsConfig() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowOsQuota() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowPluginTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowPool() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXModelArtsUserID;
    reqDefBuilder.withRequestField(headerParamXModelArtsUserID
                  .withName("XModelArtsUserID")
                  .withJsonTag("X-ModelArts-User-ID")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowPoolMonitor() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TimeRange")
                  .withJsonTag("time_range")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Statistics")
                  .withJsonTag("statistics")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Period")
                  .withJsonTag("period")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowPoolNode() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowPoolNodeConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-request-id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowPoolNodeConfigTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-request-id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowPoolRuntimeMetrics() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowPoolStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspaceId")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowPoolTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowSaveImageJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowSearchAlgorithms() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowTrainJobTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowTrainingExperimentDetails() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowTrainingJobDetails() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowTrainingJobEngines() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowTrainingJobFlavors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FlavorType")
                  .withJsonTag("flavor_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowTrainingJobLogsPreview() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowTrainingJobMetrics() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowTrainingQuotas() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UserId")
                  .withJsonTag("user_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Resource")
                  .withJsonTag("resource")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkloadStatistics() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkspace() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkspaceQuotas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStartInferDeployment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStartInferService() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStopInferDeployment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStopInferService() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStopTrainingJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForSwitchInferDeploymentVersion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForSyncImage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUnbindInferApiKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateAuthMode() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateImageGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateInferDeployment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateInferDeploymentScale() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateInferIntranetConnection() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateInferService() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateWorkspace() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateWorkspaceQuotas() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForValidateAuthorization() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateInferDeploymentHpa() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteInferDeploymentHpa() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListInferDeploymentHpaEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowInferDeploymentHpa() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateInferDeploymentHpa() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateInferHra() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowInferHra() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateInferHra() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamContentType;
    reqDefBuilder.withRequestField(headerParamContentType
                  .withName("ContentType")
                  .withJsonTag("Content-Type")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForAttachDevServerVolume() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBatchDevServersAction() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-request-id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForBindDevServerPublicIP() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForChangeDevServerOS() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForChangeHyperinstanceOS() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateDevServer() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateDevServerJob() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateHyperCluster() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateHyperinstanceTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateRoceNetwork() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteDevServer() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteDevServerJobs() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteHyperCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteHyperinstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteHyperinstanceTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDetachDevServerVolume() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetDevServerImage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetDevServerJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetDevServerJobService() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetDevServerJobTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetDevServerOperation() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetHyperCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetHyperinstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetScaleEvaluationsDevServer() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForGetTopologies() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceId")
                  .withJsonTag("resource_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListAllDevServers() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListAllHyperinstances() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListDevServerFlavors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Arch")
                  .withJsonTag("arch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ChargingMode")
                  .withJsonTag("charging_mode")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListDevServerImages() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ServerType")
                  .withJsonTag("server_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FlavorName")
                  .withJsonTag("flavor_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListDevServerJobTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListDevServerJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Visible")
                  .withJsonTag("visible")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListDevServerPublicIP() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListDevServers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Owner")
                  .withJsonTag("owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListHyperCluster() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListHyperinstanceClustersCapacity() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListHyperinstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForQueryHyperinstanceTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForRebootDevServer() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForReinstallDevServerOS() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForScaleDownHyperinstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForScaleUpHyperinstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowDevServer() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStartDevServer() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStartHyperinstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStopDevServer() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStopHyperinstance() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xRequestId").
        withJsonTag("X-Request-Id").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForSyncDevServers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Owner")
                  .withJsonTag("owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateDevServer() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateNotebook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateNotebookTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteNotebook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteNotebookTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListAllNotebooks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Feature")
                  .withJsonTag("feature")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PoolId")
                  .withJsonTag("pool_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Owner")
                  .withJsonTag("owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Flavor")
                  .withJsonTag("flavor")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ImageId")
                  .withJsonTag("image_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Billing")
                  .withJsonTag("billing")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListAuthoringClusters() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Scope")
                  .withJsonTag("scope")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListFeatures() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListFlavors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Category")
                  .withJsonTag("category")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FlavorType")
                  .withJsonTag("flavor_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Feature")
                  .withJsonTag("feature")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListNotebooks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Feature")
                  .withJsonTag("feature")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PoolId")
                  .withJsonTag("pool_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Owner")
                  .withJsonTag("owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Flavor")
                  .withJsonTag("flavor")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ImageId")
                  .withJsonTag("image_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Billing")
                  .withJsonTag("billing")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tags")
                  .withJsonTag("tags")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForRenewLease() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Duration")
                  .withJsonTag("duration")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowCluster() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowLease() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowNotebook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowNotebookTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowSwitchableFlavors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStartNotebook() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Duration")
                  .withJsonTag("duration")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForStopNotebook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateNotebook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateWorkflow() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateWorkflowPurchasePool() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateWorkflowServiceAuth() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteWorkflow() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListWorkflows() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Labels")
                  .withJsonTag("labels")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateId")
                  .withJsonTag("template_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortBy")
                  .withJsonTag("sort_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchType")
                  .withJsonTag("search_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkflow() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkflowLabels() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Order")
                  .withJsonTag("order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortBy")
                  .withJsonTag("sort_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateId")
                  .withJsonTag("template_id")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkflowsOverview() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchType")
                  .withJsonTag("search_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Description")
                  .withJsonTag("description")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkflowsTodolist() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateWorkflow() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateWorkflowExecution() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateWorkflowExecutionsActions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateWorkflowStepExecutionsActions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteWorkflowExecution() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListExecutionLabels() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListWorkflowExecutions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WorkspaceId")
                  .withJsonTag("workspace_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortBy")
                  .withJsonTag("sort_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Labels")
                  .withJsonTag("labels")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SceneId")
                  .withJsonTag("scene_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Order")
                  .withJsonTag("order")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForListWorkflowStepExecution() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Order")
                  .withJsonTag("order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortBy")
                  .withJsonTag("sort_by")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkflowExecution() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkflowStepExecutionMetrics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateWorkflowExecution() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateWorkflowSchedule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteWorkflowScheduleId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkflowSchedule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkflowScheduleList() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateWorkflowSchedule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForCreateWorkflowSubscriptions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForDeleteWorkflowSubscription() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForShowWorkflowSubscription() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ModelArtsMeta::genRequestDefForUpdateWorkflowSubscription() {
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

