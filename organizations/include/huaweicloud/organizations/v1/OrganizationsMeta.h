#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_OrganizationsMeta_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_OrganizationsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/organizations/v1/OrganizationsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  OrganizationsMeta {
public:
    static HttpRequestDef genRequestDefForCloseAccount();
    static HttpRequestDef genRequestDefForCreateAccount();
    static HttpRequestDef genRequestDefForInviteAccount();
    static HttpRequestDef genRequestDefForListAccounts();
    static HttpRequestDef genRequestDefForListCloseAccountStatuses();
    static HttpRequestDef genRequestDefForListCreateAccountStatuses();
    static HttpRequestDef genRequestDefForMoveAccount();
    static HttpRequestDef genRequestDefForRemoveAccount();
    static HttpRequestDef genRequestDefForShowAccount();
    static HttpRequestDef genRequestDefForShowCreateAccountStatus();
    static HttpRequestDef genRequestDefForDeregisterDelegatedAdministrator();
    static HttpRequestDef genRequestDefForListDelegatedAdministrators();
    static HttpRequestDef genRequestDefForListDelegatedServices();
    static HttpRequestDef genRequestDefForRegisterDelegatedAdministrator();
    static HttpRequestDef genRequestDefForAcceptHandshake();
    static HttpRequestDef genRequestDefForCancelHandshake();
    static HttpRequestDef genRequestDefForDeclineHandshake();
    static HttpRequestDef genRequestDefForListHandshakes();
    static HttpRequestDef genRequestDefForListReceivedHandshakes();
    static HttpRequestDef genRequestDefForShowHandshake();
    static HttpRequestDef genRequestDefForListEntities();
    static HttpRequestDef genRequestDefForListQuotas();
    static HttpRequestDef genRequestDefForListServices();
    static HttpRequestDef genRequestDefForListTagPolicyServices();
    static HttpRequestDef genRequestDefForShowEffectivePolicies();
    static HttpRequestDef genRequestDefForCreateOrganization();
    static HttpRequestDef genRequestDefForDeleteOrganization();
    static HttpRequestDef genRequestDefForLeaveOrganization();
    static HttpRequestDef genRequestDefForListRoots();
    static HttpRequestDef genRequestDefForShowOrganization();
    static HttpRequestDef genRequestDefForCreateOrganizationalUnit();
    static HttpRequestDef genRequestDefForDeleteOrganizationalUnit();
    static HttpRequestDef genRequestDefForListOrganizationalUnits();
    static HttpRequestDef genRequestDefForShowOrganizationalUnit();
    static HttpRequestDef genRequestDefForUpdateOrganizationalUnit();
    static HttpRequestDef genRequestDefForAttachPolicy();
    static HttpRequestDef genRequestDefForCreatePolicy();
    static HttpRequestDef genRequestDefForDeletePolicy();
    static HttpRequestDef genRequestDefForDetachPolicy();
    static HttpRequestDef genRequestDefForDisablePolicyType();
    static HttpRequestDef genRequestDefForEnablePolicyType();
    static HttpRequestDef genRequestDefForListEntitiesForPolicy();
    static HttpRequestDef genRequestDefForListPolicies();
    static HttpRequestDef genRequestDefForShowPolicy();
    static HttpRequestDef genRequestDefForUpdatePolicy();
    static HttpRequestDef genRequestDefForCreateTagResource();
    static HttpRequestDef genRequestDefForDeleteTagResource();
    static HttpRequestDef genRequestDefForListResourceInstances();
    static HttpRequestDef genRequestDefForListResourceTags();
    static HttpRequestDef genRequestDefForListTagResources();
    static HttpRequestDef genRequestDefForListTagsForResource();
    static HttpRequestDef genRequestDefForShowResourceInstancesCount();
    static HttpRequestDef genRequestDefForTagResource();
    static HttpRequestDef genRequestDefForUntagResource();
    static HttpRequestDef genRequestDefForDisableTrustedService();
    static HttpRequestDef genRequestDefForEnableTrustedService();
    static HttpRequestDef genRequestDefForListTrustedServices();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_OrganizationsMeta_H_
