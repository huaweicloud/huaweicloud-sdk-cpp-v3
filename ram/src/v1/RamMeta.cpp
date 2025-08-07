
#include <huaweicloud/ram/v1/RamMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef RamMeta::genRequestDefForAssociateResourceSharePermission() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForDisassociateResourceSharePermission() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForListResourceSharePermissions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PermissionName")
                  .withJsonTag("permission_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForListQuota() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForListResourceTypes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForDisableOrganizationShare() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForEnableOrganizationShare() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForShowOrganizationShare() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForListPermissionVersions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForListPermissions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResourceType")
                  .withJsonTag("resource_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PermissionType")
                  .withJsonTag("permission_type")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForShowPermission() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PermissionVersion")
                  .withJsonTag("permission_version")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForSearchDistinctPrincipals() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForSearchSharedPrincipals() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForSearchDistinctSharedResources() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForSearchSharedResources() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForCreateResourceShare() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForDeleteResourceShare() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForSearchResourceShares() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForUpdateResourceShare() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForAssociateResourceShare() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForDisassociateResourceShare() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForSearchResourceShareAssociations() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForAcceptResourceShareInvitation() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForRejectResourceShareInvitation() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForSearchResourceShareInvitation() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForBatchCreateResourceShareTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForBatchDeleteResourceShareTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForListResourceShareTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForListResourceSharesByTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef RamMeta::genRequestDefForSearchResourceShareCountByTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
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

