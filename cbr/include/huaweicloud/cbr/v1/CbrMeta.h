#ifndef HUAWEICLOUD_SDK_CBR_V1_CbrMeta_H_
#define HUAWEICLOUD_SDK_CBR_V1_CbrMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cbr/v1/CbrExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CBR_V1_EXPORT  CbrMeta {
public:
    static HttpRequestDef genRequestDefForAddAgentPath();
    static HttpRequestDef genRequestDefForAddMember();
    static HttpRequestDef genRequestDefForAddVaultResource();
    static HttpRequestDef genRequestDefForAssociateVaultPolicy();
    static HttpRequestDef genRequestDefForBatchCreateAndDeleteVaultTags();
    static HttpRequestDef genRequestDefForBatchUpdateVault();
    static HttpRequestDef genRequestDefForCheckAgent();
    static HttpRequestDef genRequestDefForCopyBackup();
    static HttpRequestDef genRequestDefForCopyCheckpoint();
    static HttpRequestDef genRequestDefForCreateCheckpoint();
    static HttpRequestDef genRequestDefForCreateOrganizationPolicy();
    static HttpRequestDef genRequestDefForCreatePolicy();
    static HttpRequestDef genRequestDefForCreatePostPaidVault();
    static HttpRequestDef genRequestDefForCreateVault();
    static HttpRequestDef genRequestDefForCreateVaultTags();
    static HttpRequestDef genRequestDefForDeleteBackup();
    static HttpRequestDef genRequestDefForDeleteMember();
    static HttpRequestDef genRequestDefForDeleteOrganizationPolicy();
    static HttpRequestDef genRequestDefForDeletePolicy();
    static HttpRequestDef genRequestDefForDeleteVault();
    static HttpRequestDef genRequestDefForDeleteVaultTag();
    static HttpRequestDef genRequestDefForDisassociateVaultPolicy();
    static HttpRequestDef genRequestDefForImportBackup();
    static HttpRequestDef genRequestDefForImportCheckpoint();
    static HttpRequestDef genRequestDefForListAgent();
    static HttpRequestDef genRequestDefForListBackups();
    static HttpRequestDef genRequestDefForListDomainProjects();
    static HttpRequestDef genRequestDefForListExternalVault();
    static HttpRequestDef genRequestDefForListOpLogs();
    static HttpRequestDef genRequestDefForListOrganizationPolicies();
    static HttpRequestDef genRequestDefForListOrganizationPolicyDetail();
    static HttpRequestDef genRequestDefForListPolicies();
    static HttpRequestDef genRequestDefForListProjects();
    static HttpRequestDef genRequestDefForListProtectable();
    static HttpRequestDef genRequestDefForListVault();
    static HttpRequestDef genRequestDefForMigrateDomain();
    static HttpRequestDef genRequestDefForMigrateVaultResource();
    static HttpRequestDef genRequestDefForRegisterAgent();
    static HttpRequestDef genRequestDefForRemoveAgentPath();
    static HttpRequestDef genRequestDefForRemoveVaultResource();
    static HttpRequestDef genRequestDefForRestoreBackup();
    static HttpRequestDef genRequestDefForSetVaultResource();
    static HttpRequestDef genRequestDefForShowAgent();
    static HttpRequestDef genRequestDefForShowBackup();
    static HttpRequestDef genRequestDefForShowCheckpoint();
    static HttpRequestDef genRequestDefForShowDomain();
    static HttpRequestDef genRequestDefForShowMemberDetail();
    static HttpRequestDef genRequestDefForShowMembersDetail();
    static HttpRequestDef genRequestDefForShowMetadata();
    static HttpRequestDef genRequestDefForShowMigrateStatus();
    static HttpRequestDef genRequestDefForShowOpLog();
    static HttpRequestDef genRequestDefForShowOrganizationPolicy();
    static HttpRequestDef genRequestDefForShowPolicy();
    static HttpRequestDef genRequestDefForShowProtectable();
    static HttpRequestDef genRequestDefForShowReplicationCapabilities();
    static HttpRequestDef genRequestDefForShowStorageUsage();
    static HttpRequestDef genRequestDefForShowSummary();
    static HttpRequestDef genRequestDefForShowVault();
    static HttpRequestDef genRequestDefForShowVaultProjectTag();
    static HttpRequestDef genRequestDefForShowVaultResourceInstances();
    static HttpRequestDef genRequestDefForShowVaultTag();
    static HttpRequestDef genRequestDefForUnregisterAgent();
    static HttpRequestDef genRequestDefForUpdateAgent();
    static HttpRequestDef genRequestDefForUpdateBackup();
    static HttpRequestDef genRequestDefForUpdateMemberStatus();
    static HttpRequestDef genRequestDefForUpdateOrder();
    static HttpRequestDef genRequestDefForUpdateOrganizationPolicy();
    static HttpRequestDef genRequestDefForUpdatePolicy();
    static HttpRequestDef genRequestDefForUpdateVault();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_CbrMeta_H_
