
#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForCreateGroup() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDeleteGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDescribeGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDescribeGroups() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForGetGroupId() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DisplayName")
                  .withJsonTag("display_name")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForUpdateGroup() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForCreateGroupMembership() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDeleteGroupMembership() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDescribeGroupMembership() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForGetGroupMembershipId() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForIsMemberInGroups() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListGroupMemberships() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("GroupId")
                  .withJsonTag("group_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListGroupMembershipsForMember() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserId")
                  .withJsonTag("user_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForCreateExternalIdPConfigurationForDirectory() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDeleteExternalIdPCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDeleteExternalIdPConfigurationForDirectory() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDisableExternalIdPConfigurationForDirectory() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForEnableExternalIdPConfigurationForDirectory() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForImportExternalIdPCertificate() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListExternalIdPCertificates() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListExternalIdPConfigurationsForDirectory() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForUpdateExternalIdPConfigurationForDirectory() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDescribePasswordPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForUpdatePasswordPolicy() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForCreateSpCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDeleteSpCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForGetSpConfigurationForDirectory() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListSpCertificates() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForUpdateSpActiveCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForGetIdentityStoreSummary() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForCreateBearerToken() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForCreateProvisioningTenant() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDeleteBearerToken() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDeleteProvisioningTenant() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListBearerTokens() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListProvisioningTenants() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForBatchDeleteSessions() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForBatchListMfaDevicesForUser() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForCreateUser() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDeleteMfaDeviceForUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDeleteUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDescribeUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDescribeUsers() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForDisableUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForEnableUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForGetUserId() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListSessions() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForListUsers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserName")
                  .withJsonTag("user_name")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForRegisterMfaDeviceForUser() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForResetPwdMode() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForUpdateMfaDeviceForUser() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForUpdateUser() {
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

HttpRequestDef IdentityCenterStoreMeta::genRequestDefForVerifyEmail() {
    HttpRequestDef reqDefBuilder;
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

