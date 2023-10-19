#ifndef HUAWEICLOUD_SDK_CFW_V1_CfwMeta_H_
#define HUAWEICLOUD_SDK_CFW_V1_CfwMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cfw/v1/CfwExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CFW_V1_EXPORT  CfwMeta {
public:
    static HttpRequestDef genRequestDefForAddAddressItem();
    static HttpRequestDef genRequestDefForAddAddressSet();
    static HttpRequestDef genRequestDefForAddBlackWhiteList();
    static HttpRequestDef genRequestDefForAddDomainSet();
    static HttpRequestDef genRequestDefForAddDomains();
    static HttpRequestDef genRequestDefForAddServiceItems();
    static HttpRequestDef genRequestDefForAddServiceSet();
    static HttpRequestDef genRequestDefForBatchDeleteAddressItems();
    static HttpRequestDef genRequestDefForBatchDeleteServiceItems();
    static HttpRequestDef genRequestDefForChangeEastWestFirewallStatus();
    static HttpRequestDef genRequestDefForDeleteAddressItem();
    static HttpRequestDef genRequestDefForDeleteAddressSet();
    static HttpRequestDef genRequestDefForDeleteBlackWhiteList();
    static HttpRequestDef genRequestDefForDeleteDomainSet();
    static HttpRequestDef genRequestDefForDeleteDomains();
    static HttpRequestDef genRequestDefForDeleteServiceItem();
    static HttpRequestDef genRequestDefForDeleteServiceSet();
    static HttpRequestDef genRequestDefForListAccessControlLogs();
    static HttpRequestDef genRequestDefForListAddressItems();
    static HttpRequestDef genRequestDefForListAddressSetDetail();
    static HttpRequestDef genRequestDefForListAddressSets();
    static HttpRequestDef genRequestDefForListAttackLogs();
    static HttpRequestDef genRequestDefForListBlackWhiteLists();
    static HttpRequestDef genRequestDefForListDnsServers();
    static HttpRequestDef genRequestDefForListDomainParseDetail();
    static HttpRequestDef genRequestDefForListDomainSets();
    static HttpRequestDef genRequestDefForListDomains();
    static HttpRequestDef genRequestDefForListEastWestFirewall();
    static HttpRequestDef genRequestDefForListFirewallDetail();
    static HttpRequestDef genRequestDefForListFirewallList();
    static HttpRequestDef genRequestDefForListFlowLogs();
    static HttpRequestDef genRequestDefForListProtectedVpcs();
    static HttpRequestDef genRequestDefForListServiceItems();
    static HttpRequestDef genRequestDefForListServiceSetDetail();
    static HttpRequestDef genRequestDefForListServiceSets();
    static HttpRequestDef genRequestDefForUpdateAddressSet();
    static HttpRequestDef genRequestDefForUpdateBlackWhiteList();
    static HttpRequestDef genRequestDefForUpdateDnsServers();
    static HttpRequestDef genRequestDefForUpdateDomainSet();
    static HttpRequestDef genRequestDefForUpdateServiceSet();
    static HttpRequestDef genRequestDefForAddAclRule();
    static HttpRequestDef genRequestDefForBatchDeleteAclRules();
    static HttpRequestDef genRequestDefForBatchUpdateAclRuleActions();
    static HttpRequestDef genRequestDefForDeleteAclRule();
    static HttpRequestDef genRequestDefForDeleteAclRuleHitCount();
    static HttpRequestDef genRequestDefForListAclRuleHitCount();
    static HttpRequestDef genRequestDefForListAclRules();
    static HttpRequestDef genRequestDefForListRuleAclTags();
    static HttpRequestDef genRequestDefForUpdateAclRule();
    static HttpRequestDef genRequestDefForUpdateAclRuleOrder();
    static HttpRequestDef genRequestDefForChangeEipStatus();
    static HttpRequestDef genRequestDefForListEipCount();
    static HttpRequestDef genRequestDefForListEips();
    static HttpRequestDef genRequestDefForChangeIpsProtectMode();
    static HttpRequestDef genRequestDefForChangeIpsSwitchStatus();
    static HttpRequestDef genRequestDefForListIpsProtectMode();
    static HttpRequestDef genRequestDefForListIpsSwitchStatus();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_CfwMeta_H_
