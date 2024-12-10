
#include <huaweicloud/csms/v1/CsmsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CsmsMeta::genRequestDefForBatchCreateOrDeleteTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForCreateAgency() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForCreateGrants() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForCreateSecret() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForCreateSecretEvent() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForCreateSecretTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForCreateSecretVersion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForDeleteGrant() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GranteeUser")
                  .withJsonTag("grantee_user")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceId")
                  .withJsonTag("resource_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForDeleteSecret() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForDeleteSecretEvent() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForDeleteSecretForSchedule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForDeleteSecretStage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForDeleteSecretTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForDownloadSecretBlob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForGenerateRandomPassword() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListGrants() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceId")
                  .withJsonTag("resource_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListNotificationRecords() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListProjectSecretsTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListResourceInstances() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListSecretEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListSecretTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListSecretTask() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SecretName")
                  .withJsonTag("secret_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TaskId")
                  .withJsonTag("task_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListSecretVersions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListSecrets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EventName")
                  .withJsonTag("event_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForListUsers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("OrgId")
                  .withJsonTag("org_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserName")
                  .withJsonTag("user_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForRestoreSecret() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForRotateSecret() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForShowAgency() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SecretType")
                  .withJsonTag("secret_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForShowSecret() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForShowSecretEvent() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForShowSecretFunctionTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SecretType")
                  .withJsonTag("secret_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SecretSubType")
                  .withJsonTag("secret_sub_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Engine")
                  .withJsonTag("engine")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForShowSecretStage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForShowSecretVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForUpdateGrant() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceId")
                  .withJsonTag("resource_id")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForUpdateSecret() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForUpdateSecretEvent() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForUpdateSecretStage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForUpdateVersion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CsmsMeta::genRequestDefForUploadSecretBlob() {
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

