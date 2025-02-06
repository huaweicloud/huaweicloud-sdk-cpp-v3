
#include <huaweicloud/identitycenter/v1/IdentityCenterMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateAccountAssignment() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteAccountAssignment() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribeAccountAssignmentCreationStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribeAccountAssignmentDeletionStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListAccountAssignmentCreationStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
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

HttpRequestDef IdentityCenterMeta::genRequestDefForListAccountAssignmentDeletionStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
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

HttpRequestDef IdentityCenterMeta::genRequestDefForListAccountAssignments() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccountId")
                  .withJsonTag("account_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PermissionSetId")
                  .withJsonTag("permission_set_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListInstances() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateInstanceAccessControlAttributeConfiguration() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteInstanceAccessControlAttributeConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribeInstanceAccessControlAttributeConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateInstanceAccessControlAttributeConfiguration() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForAttachManagedPolicyToPermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForCreatePermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteCustomPolicyFromPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteCustomRoleFromPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeletePermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribePermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribePermissionSetProvisioningStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDetachManagedPolicyFromPermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForGetCustomPolicyForPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetCustomRoleForPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListAccountsForProvisionedPermissionSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProvisioningStatus")
                  .withJsonTag("provisioning_status")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListManagedPoliciesInPermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForListPermissionSetProvisioningStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListPermissionSets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PermissionSetId")
                  .withJsonTag("permission_set_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PermissionUrn")
                  .withJsonTag("permission_urn")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListPermissionSetsProvisionedToAccount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccountId")
                  .withJsonTag("account_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProvisioningStatus")
                  .withJsonTag("provisioning_status")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForProvisionPermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForPutCustomPolicyToPermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForPutCustomRoleToPermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdatePermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateTagResource() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteTagResource() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForListTagResources() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForAttachManagedRoleToPermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForDetachManagedRoleFromPermissionSet() {
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

HttpRequestDef IdentityCenterMeta::genRequestDefForListManagedRolesInPermissionSet() {
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


}
}
}
}

