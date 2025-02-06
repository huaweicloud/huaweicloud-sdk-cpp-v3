#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterMeta_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  IdentityCenterMeta {
public:
    static HttpRequestDef genRequestDefForCreateAccountAssignment();
    static HttpRequestDef genRequestDefForDeleteAccountAssignment();
    static HttpRequestDef genRequestDefForDescribeAccountAssignmentCreationStatus();
    static HttpRequestDef genRequestDefForDescribeAccountAssignmentDeletionStatus();
    static HttpRequestDef genRequestDefForListAccountAssignmentCreationStatus();
    static HttpRequestDef genRequestDefForListAccountAssignmentDeletionStatus();
    static HttpRequestDef genRequestDefForListAccountAssignments();
    static HttpRequestDef genRequestDefForListInstances();
    static HttpRequestDef genRequestDefForCreateInstanceAccessControlAttributeConfiguration();
    static HttpRequestDef genRequestDefForDeleteInstanceAccessControlAttributeConfiguration();
    static HttpRequestDef genRequestDefForDescribeInstanceAccessControlAttributeConfiguration();
    static HttpRequestDef genRequestDefForUpdateInstanceAccessControlAttributeConfiguration();
    static HttpRequestDef genRequestDefForAttachManagedPolicyToPermissionSet();
    static HttpRequestDef genRequestDefForCreatePermissionSet();
    static HttpRequestDef genRequestDefForDeleteCustomPolicyFromPermissionSet();
    static HttpRequestDef genRequestDefForDeleteCustomRoleFromPermissionSet();
    static HttpRequestDef genRequestDefForDeletePermissionSet();
    static HttpRequestDef genRequestDefForDescribePermissionSet();
    static HttpRequestDef genRequestDefForDescribePermissionSetProvisioningStatus();
    static HttpRequestDef genRequestDefForDetachManagedPolicyFromPermissionSet();
    static HttpRequestDef genRequestDefForGetCustomPolicyForPermissionSet();
    static HttpRequestDef genRequestDefForGetCustomRoleForPermissionSet();
    static HttpRequestDef genRequestDefForListAccountsForProvisionedPermissionSet();
    static HttpRequestDef genRequestDefForListManagedPoliciesInPermissionSet();
    static HttpRequestDef genRequestDefForListPermissionSetProvisioningStatus();
    static HttpRequestDef genRequestDefForListPermissionSets();
    static HttpRequestDef genRequestDefForListPermissionSetsProvisionedToAccount();
    static HttpRequestDef genRequestDefForProvisionPermissionSet();
    static HttpRequestDef genRequestDefForPutCustomPolicyToPermissionSet();
    static HttpRequestDef genRequestDefForPutCustomRoleToPermissionSet();
    static HttpRequestDef genRequestDefForUpdatePermissionSet();
    static HttpRequestDef genRequestDefForCreateTagResource();
    static HttpRequestDef genRequestDefForDeleteTagResource();
    static HttpRequestDef genRequestDefForListTagResources();
    static HttpRequestDef genRequestDefForAttachManagedRoleToPermissionSet();
    static HttpRequestDef genRequestDefForDetachManagedRoleFromPermissionSet();
    static HttpRequestDef genRequestDefForListManagedRolesInPermissionSet();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterMeta_H_
