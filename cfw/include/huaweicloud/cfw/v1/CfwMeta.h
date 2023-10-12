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
    static HttpRequestDef genRequestDefForAddAddressItemsUsingPost();
    static HttpRequestDef genRequestDefForAddAddressSetInfoUsingPost();
    static HttpRequestDef genRequestDefForAddBlackWhiteListUsingPost();
    static HttpRequestDef genRequestDefForAddServiceItemsUsingPost();
    static HttpRequestDef genRequestDefForAddServiceSetUsingPost();
    static HttpRequestDef genRequestDefForChangeEwProtectStatus();
    static HttpRequestDef genRequestDefForChangeIpsProtectModeUsingPost();
    static HttpRequestDef genRequestDefForDeleteAclRuleCount();
    static HttpRequestDef genRequestDefForDeleteAddressItemUsingDelete();
    static HttpRequestDef genRequestDefForDeleteAddressSetInfoUsingDelete();
    static HttpRequestDef genRequestDefForDeleteBlackWhiteListUsingDelete();
    static HttpRequestDef genRequestDefForDeleteServiceItemUsingDelete();
    static HttpRequestDef genRequestDefForDeleteServiceSetUsingDelete();
    static HttpRequestDef genRequestDefForListAccessControlLogs();
    static HttpRequestDef genRequestDefForListAddressItemsUsingGet();
    static HttpRequestDef genRequestDefForListAddressSetDetailUsingGet();
    static HttpRequestDef genRequestDefForListAddressSetListUsingGet();
    static HttpRequestDef genRequestDefForListAttackLogs();
    static HttpRequestDef genRequestDefForListBlackWhiteListsUsingGet();
    static HttpRequestDef genRequestDefForListDnsServers();
    static HttpRequestDef genRequestDefForListEastWestFirewall();
    static HttpRequestDef genRequestDefForListFirewallUsingGet();
    static HttpRequestDef genRequestDefForListFlowLogs();
    static HttpRequestDef genRequestDefForListIpsProtectModeUsingPost();
    static HttpRequestDef genRequestDefForListParseDomainDetails();
    static HttpRequestDef genRequestDefForListRuleHitCount();
    static HttpRequestDef genRequestDefForListServiceItemsDetails();
    static HttpRequestDef genRequestDefForListServiceSet();
    static HttpRequestDef genRequestDefForListServiceSetDetails();
    static HttpRequestDef genRequestDefForUpdateAddressSetInfoUsingPut();
    static HttpRequestDef genRequestDefForUpdateBlackWhiteListUsingPut();
    static HttpRequestDef genRequestDefForUpdateDnsServers();
    static HttpRequestDef genRequestDefForUpdateServiceSetUsingPut();
    static HttpRequestDef genRequestDefForAddRuleAclUsingPost();
    static HttpRequestDef genRequestDefForDeleteRuleAclUsingDelete();
    static HttpRequestDef genRequestDefForListRuleAclUsingPut();
    static HttpRequestDef genRequestDefForListRuleAclsUsingGet();
    static HttpRequestDef genRequestDefForUpdateRuleAclUsingPut();
    static HttpRequestDef genRequestDefForChangeProtectEip();
    static HttpRequestDef genRequestDefForCountEips();
    static HttpRequestDef genRequestDefForListEipResources();
    static HttpRequestDef genRequestDefForChangeIpsSwitchUsingPost();
    static HttpRequestDef genRequestDefForListIpsSwitchStatusUsingGet();
    static HttpRequestDef genRequestDefForListVpcProtects();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_CfwMeta_H_
