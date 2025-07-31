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
    static HttpRequestDef genRequestDefForAddLogConfig();
    static HttpRequestDef genRequestDefForAddServiceItems();
    static HttpRequestDef genRequestDefForAddServiceSet();
    static HttpRequestDef genRequestDefForBatchDeleteAddressItems();
    static HttpRequestDef genRequestDefForBatchDeleteDomainSet();
    static HttpRequestDef genRequestDefForBatchDeleteServiceItems();
    static HttpRequestDef genRequestDefForCancelCaptureTask();
    static HttpRequestDef genRequestDefForChangeEastWestFirewallStatus();
    static HttpRequestDef genRequestDefForCreateCaptureTask();
    static HttpRequestDef genRequestDefForCreateEastWestFirewall();
    static HttpRequestDef genRequestDefForCreateFirewall();
    static HttpRequestDef genRequestDefForCreateTag();
    static HttpRequestDef genRequestDefForDeleteAddressItem();
    static HttpRequestDef genRequestDefForDeleteAddressSet();
    static HttpRequestDef genRequestDefForDeleteBlackWhiteList();
    static HttpRequestDef genRequestDefForDeleteCaptureTask();
    static HttpRequestDef genRequestDefForDeleteDomainSet();
    static HttpRequestDef genRequestDefForDeleteDomains();
    static HttpRequestDef genRequestDefForDeleteFirewall();
    static HttpRequestDef genRequestDefForDeleteIpBlacklist();
    static HttpRequestDef genRequestDefForDeleteServiceItem();
    static HttpRequestDef genRequestDefForDeleteServiceSet();
    static HttpRequestDef genRequestDefForDeleteTag();
    static HttpRequestDef genRequestDefForEnableIpBlacklist();
    static HttpRequestDef genRequestDefForExportIpBlacklist();
    static HttpRequestDef genRequestDefForImportIpBlacklist();
    static HttpRequestDef genRequestDefForListAccessControlLogs();
    static HttpRequestDef genRequestDefForListAddressItems();
    static HttpRequestDef genRequestDefForListAddressSetDetail();
    static HttpRequestDef genRequestDefForListAddressSets();
    static HttpRequestDef genRequestDefForListAttackLogs();
    static HttpRequestDef genRequestDefForListAttackStatistic();
    static HttpRequestDef genRequestDefForListBlackWhiteLists();
    static HttpRequestDef genRequestDefForListCaptureResult();
    static HttpRequestDef genRequestDefForListCaptureTask();
    static HttpRequestDef genRequestDefForListDnsServers();
    static HttpRequestDef genRequestDefForListDomainParseDetail();
    static HttpRequestDef genRequestDefForListDomainParseIp();
    static HttpRequestDef genRequestDefForListDomainSets();
    static HttpRequestDef genRequestDefForListDomains();
    static HttpRequestDef genRequestDefForListEastWestFirewall();
    static HttpRequestDef genRequestDefForListFirewallDetail();
    static HttpRequestDef genRequestDefForListFirewallList();
    static HttpRequestDef genRequestDefForListFlowLogs();
    static HttpRequestDef genRequestDefForListIpBlacklist();
    static HttpRequestDef genRequestDefForListIpBlacklistSwitch();
    static HttpRequestDef genRequestDefForListJob();
    static HttpRequestDef genRequestDefForListLogConfig();
    static HttpRequestDef genRequestDefForListProjectTags();
    static HttpRequestDef genRequestDefForListProtectedVpcs();
    static HttpRequestDef genRequestDefForListResourceTags();
    static HttpRequestDef genRequestDefForListServiceItems();
    static HttpRequestDef genRequestDefForListServiceSetDetail();
    static HttpRequestDef genRequestDefForListServiceSets();
    static HttpRequestDef genRequestDefForRetryIpBlacklist();
    static HttpRequestDef genRequestDefForSaveTags();
    static HttpRequestDef genRequestDefForShowAccessTop();
    static HttpRequestDef genRequestDefForShowAlarmConfig();
    static HttpRequestDef genRequestDefForShowAntiVirusRule();
    static HttpRequestDef genRequestDefForShowAntiVirusSwitch();
    static HttpRequestDef genRequestDefForShowAttackTotal();
    static HttpRequestDef genRequestDefForShowAttackTrend();
    static HttpRequestDef genRequestDefForShowDomainSetDetail();
    static HttpRequestDef genRequestDefForShowTrafficTrend();
    static HttpRequestDef genRequestDefForUpdateAddressSet();
    static HttpRequestDef genRequestDefForUpdateAlarmConfig();
    static HttpRequestDef genRequestDefForUpdateAntiVirusRule();
    static HttpRequestDef genRequestDefForUpdateAntiVirusSwitch();
    static HttpRequestDef genRequestDefForUpdateBlackWhiteList();
    static HttpRequestDef genRequestDefForUpdateDnsServers();
    static HttpRequestDef genRequestDefForUpdateDomainSet();
    static HttpRequestDef genRequestDefForUpdateLogConfig();
    static HttpRequestDef genRequestDefForUpdateObjectConfigDesc();
    static HttpRequestDef genRequestDefForUpdateServiceSet();
    static HttpRequestDef genRequestDefForAddAclRule();
    static HttpRequestDef genRequestDefForBatchDeleteAclRules();
    static HttpRequestDef genRequestDefForBatchUpdateAclRuleActions();
    static HttpRequestDef genRequestDefForDeleteAclRule();
    static HttpRequestDef genRequestDefForDeleteAclRuleHitCount();
    static HttpRequestDef genRequestDefForListAclRuleHitCount();
    static HttpRequestDef genRequestDefForListAclRules();
    static HttpRequestDef genRequestDefForListRegions();
    static HttpRequestDef genRequestDefForListRuleAclTags();
    static HttpRequestDef genRequestDefForShowImportStatus();
    static HttpRequestDef genRequestDefForUpdateAclRule();
    static HttpRequestDef genRequestDefForUpdateAclRuleOrder();
    static HttpRequestDef genRequestDefForChangeEipStatus();
    static HttpRequestDef genRequestDefForListAlarmWhitelist();
    static HttpRequestDef genRequestDefForListEipCount();
    static HttpRequestDef genRequestDefForListEips();
    static HttpRequestDef genRequestDefForShowAutoProtectStatus();
    static HttpRequestDef genRequestDefForSwitchAutoProtectStatus();
    static HttpRequestDef genRequestDefForChangeIpsProtectMode();
    static HttpRequestDef genRequestDefForChangeIpsRuleMode();
    static HttpRequestDef genRequestDefForChangeIpsSwitchStatus();
    static HttpRequestDef genRequestDefForListCustomerIps();
    static HttpRequestDef genRequestDefForListIpsProtectMode();
    static HttpRequestDef genRequestDefForListIpsRules();
    static HttpRequestDef genRequestDefForListIpsRules1();
    static HttpRequestDef genRequestDefForListIpsSwitchStatus();
    static HttpRequestDef genRequestDefForShowCustomerIpsInfo();
    static HttpRequestDef genRequestDefForShowIpsUpdateTime();
    static HttpRequestDef genRequestDefForUpdateAdvancedIpsRule();
    static HttpRequestDef genRequestDefForUpdateCustomerIps();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_CfwMeta_H_
