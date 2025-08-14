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
    static HttpRequestDef genRequestDefForDisassociateProfile();
    static HttpRequestDef genRequestDefForListAccountAssignmentCreationStatus();
    static HttpRequestDef genRequestDefForListAccountAssignmentDeletionStatus();
    static HttpRequestDef genRequestDefForListAccountAssignments();
    static HttpRequestDef genRequestDefForListAccountAssignmentsForPrincipal();
    static HttpRequestDef genRequestDefForCreateApplicationInstance();
    static HttpRequestDef genRequestDefForDeleteApplicationInstance();
    static HttpRequestDef genRequestDefForDeleteProfile();
    static HttpRequestDef genRequestDefForDescribeApplication();
    static HttpRequestDef genRequestDefForDescribeApplicationProvider();
    static HttpRequestDef genRequestDefForGetApplicationAssignmentConfiguration();
    static HttpRequestDef genRequestDefForGetApplicationInstance();
    static HttpRequestDef genRequestDefForImportApplicationInstanceServiceProviderMetadata();
    static HttpRequestDef genRequestDefForListApplicationInstances();
    static HttpRequestDef genRequestDefForListApplicationProviders();
    static HttpRequestDef genRequestDefForListApplicationTemplates();
    static HttpRequestDef genRequestDefForListApplications();
    static HttpRequestDef genRequestDefForListCatalogApplications();
    static HttpRequestDef genRequestDefForListProfiles();
    static HttpRequestDef genRequestDefForUpdateApplicationInstanceDisplayData();
    static HttpRequestDef genRequestDefForUpdateApplicationInstanceResponseConfiguration();
    static HttpRequestDef genRequestDefForUpdateApplicationInstanceResponseSchemaConfiguration();
    static HttpRequestDef genRequestDefForUpdateApplicationInstanceSecurityConfiguration();
    static HttpRequestDef genRequestDefForUpdateApplicationInstanceServiceProviderConfiguration();
    static HttpRequestDef genRequestDefForUpdateApplicationInstanceStatus();
    static HttpRequestDef genRequestDefForCreateApplicationAssignment();
    static HttpRequestDef genRequestDefForDeleteApplicationAssignment();
    static HttpRequestDef genRequestDefForListApplicationAssignments();
    static HttpRequestDef genRequestDefForListApplicationAssignmentsForPrincipal();
    static HttpRequestDef genRequestDefForCreateApplicationInstanceCertificate();
    static HttpRequestDef genRequestDefForDeleteApplicationInstanceCertificate();
    static HttpRequestDef genRequestDefForListApplicationInstanceCertificates();
    static HttpRequestDef genRequestDefForUpdateApplicationInstanceActiveCertificate();
    static HttpRequestDef genRequestDefForGetSsoConfiguration();
    static HttpRequestDef genRequestDefForUpdateSsoConfiguration();
    static HttpRequestDef genRequestDefForCreateAlias();
    static HttpRequestDef genRequestDefForDeleteIdentityCenter();
    static HttpRequestDef genRequestDefForDescribeRegisteredRegions();
    static HttpRequestDef genRequestDefForGetHaConfiguration();
    static HttpRequestDef genRequestDefForGetIdentityCenterServiceStatus();
    static HttpRequestDef genRequestDefForListIdentityStoreAssociation();
    static HttpRequestDef genRequestDefForListInstances();
    static HttpRequestDef genRequestDefForRegisterRegion();
    static HttpRequestDef genRequestDefForStartIdentityCenter();
    static HttpRequestDef genRequestDefForUpdateHaConfiguration();
    static HttpRequestDef genRequestDefForCreateInstanceAccessControlAttributeConfiguration();
    static HttpRequestDef genRequestDefForDeleteInstanceAccessControlAttributeConfiguration();
    static HttpRequestDef genRequestDefForDescribeInstanceAccessControlAttributeConfiguration();
    static HttpRequestDef genRequestDefForUpdateInstanceAccessControlAttributeConfiguration();
    static HttpRequestDef genRequestDefForGetMfaDeviceManagementForIdentityStore();
    static HttpRequestDef genRequestDefForPutMfaDeviceManagementForIdentityStore();
    static HttpRequestDef genRequestDefForAttachManagedPolicyToPermissionSet();
    static HttpRequestDef genRequestDefForAttachManagedRoleToPermissionSet();
    static HttpRequestDef genRequestDefForCreatePermissionSet();
    static HttpRequestDef genRequestDefForDeleteCustomPolicyFromPermissionSet();
    static HttpRequestDef genRequestDefForDeleteCustomRoleFromPermissionSet();
    static HttpRequestDef genRequestDefForDeletePermissionSet();
    static HttpRequestDef genRequestDefForDescribePermissionSet();
    static HttpRequestDef genRequestDefForDescribePermissionSetProvisioningStatus();
    static HttpRequestDef genRequestDefForDetachManagedPolicyFromPermissionSet();
    static HttpRequestDef genRequestDefForDetachManagedRoleFromPermissionSet();
    static HttpRequestDef genRequestDefForGetCustomPolicyForPermissionSet();
    static HttpRequestDef genRequestDefForGetCustomRoleForPermissionSet();
    static HttpRequestDef genRequestDefForGetPermissionSetSummary();
    static HttpRequestDef genRequestDefForListAccountsForProvisionedPermissionSet();
    static HttpRequestDef genRequestDefForListManagedPoliciesInPermissionSet();
    static HttpRequestDef genRequestDefForListManagedRolesInPermissionSet();
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
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_IdentityCenterMeta_H_
