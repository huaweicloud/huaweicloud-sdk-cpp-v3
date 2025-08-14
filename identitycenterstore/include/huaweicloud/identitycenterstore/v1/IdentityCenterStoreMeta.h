#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreMeta_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  IdentityCenterStoreMeta {
public:
    static HttpRequestDef genRequestDefForCreateGroup();
    static HttpRequestDef genRequestDefForDeleteGroup();
    static HttpRequestDef genRequestDefForDescribeGroup();
    static HttpRequestDef genRequestDefForDescribeGroups();
    static HttpRequestDef genRequestDefForGetGroupId();
    static HttpRequestDef genRequestDefForListGroups();
    static HttpRequestDef genRequestDefForUpdateGroup();
    static HttpRequestDef genRequestDefForCreateGroupMembership();
    static HttpRequestDef genRequestDefForDeleteGroupMembership();
    static HttpRequestDef genRequestDefForDescribeGroupMembership();
    static HttpRequestDef genRequestDefForGetGroupMembershipId();
    static HttpRequestDef genRequestDefForIsMemberInGroups();
    static HttpRequestDef genRequestDefForListGroupMemberships();
    static HttpRequestDef genRequestDefForListGroupMembershipsForMember();
    static HttpRequestDef genRequestDefForCreateExternalIdPConfigurationForDirectory();
    static HttpRequestDef genRequestDefForDeleteExternalIdPCertificate();
    static HttpRequestDef genRequestDefForDeleteExternalIdPConfigurationForDirectory();
    static HttpRequestDef genRequestDefForDisableExternalIdPConfigurationForDirectory();
    static HttpRequestDef genRequestDefForEnableExternalIdPConfigurationForDirectory();
    static HttpRequestDef genRequestDefForImportExternalIdPCertificate();
    static HttpRequestDef genRequestDefForListExternalIdPCertificates();
    static HttpRequestDef genRequestDefForListExternalIdPConfigurationsForDirectory();
    static HttpRequestDef genRequestDefForUpdateExternalIdPConfigurationForDirectory();
    static HttpRequestDef genRequestDefForDescribePasswordPolicy();
    static HttpRequestDef genRequestDefForUpdatePasswordPolicy();
    static HttpRequestDef genRequestDefForCreateSpCertificate();
    static HttpRequestDef genRequestDefForDeleteSpCertificate();
    static HttpRequestDef genRequestDefForGetSpConfigurationForDirectory();
    static HttpRequestDef genRequestDefForListSpCertificates();
    static HttpRequestDef genRequestDefForUpdateSpActiveCertificate();
    static HttpRequestDef genRequestDefForGetIdentityStoreSummary();
    static HttpRequestDef genRequestDefForCreateBearerToken();
    static HttpRequestDef genRequestDefForCreateProvisioningTenant();
    static HttpRequestDef genRequestDefForDeleteBearerToken();
    static HttpRequestDef genRequestDefForDeleteProvisioningTenant();
    static HttpRequestDef genRequestDefForListBearerTokens();
    static HttpRequestDef genRequestDefForListProvisioningTenants();
    static HttpRequestDef genRequestDefForBatchDeleteSessions();
    static HttpRequestDef genRequestDefForBatchListMfaDevicesForUser();
    static HttpRequestDef genRequestDefForCreateUser();
    static HttpRequestDef genRequestDefForDeleteMfaDeviceForUser();
    static HttpRequestDef genRequestDefForDeleteUser();
    static HttpRequestDef genRequestDefForDescribeUser();
    static HttpRequestDef genRequestDefForDescribeUsers();
    static HttpRequestDef genRequestDefForDisableUser();
    static HttpRequestDef genRequestDefForEnableUser();
    static HttpRequestDef genRequestDefForGetUserId();
    static HttpRequestDef genRequestDefForListSessions();
    static HttpRequestDef genRequestDefForListUsers();
    static HttpRequestDef genRequestDefForRegisterMfaDeviceForUser();
    static HttpRequestDef genRequestDefForResetPwdMode();
    static HttpRequestDef genRequestDefForUpdateMfaDeviceForUser();
    static HttpRequestDef genRequestDefForUpdateUser();
    static HttpRequestDef genRequestDefForVerifyEmail();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_IdentityCenterStoreMeta_H_
