#ifndef HUAWEICLOUD_SDK_AAD_V2_AadMeta_H_
#define HUAWEICLOUD_SDK_AAD_V2_AadMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/aad/v2/AadExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_AAD_V2_EXPORT  AadMeta {
public:
    static HttpRequestDef genRequestDefForAddWafWhiteIpRule();
    static HttpRequestDef genRequestDefForCreateDomain();
    static HttpRequestDef genRequestDefForDeleteDomain();
    static HttpRequestDef genRequestDefForDeleteWafWhiteIpRule();
    static HttpRequestDef genRequestDefForListDDoSAttackEvent();
    static HttpRequestDef genRequestDefForListDDoSBlackHoleEvent();
    static HttpRequestDef genRequestDefForListDDoSConnectionNumber();
    static HttpRequestDef genRequestDefForListDDoSFlow();
    static HttpRequestDef genRequestDefForListFrequencyControlRule();
    static HttpRequestDef genRequestDefForListGlobalConfig();
    static HttpRequestDef genRequestDefForListInstanceDomains();
    static HttpRequestDef genRequestDefForListSourceIp();
    static HttpRequestDef genRequestDefForListWafAttackEvent();
    static HttpRequestDef genRequestDefForListWafBandwidth();
    static HttpRequestDef genRequestDefForListWafCustomRule();
    static HttpRequestDef genRequestDefForListWafGeoIpRule();
    static HttpRequestDef genRequestDefForListWafQps();
    static HttpRequestDef genRequestDefForListWafWhiteIpRule();
    static HttpRequestDef genRequestDefForListWhiteBlackIpRule();
    static HttpRequestDef genRequestDefForShowAlarmConfig();
    static HttpRequestDef genRequestDefForShowDDoSPeak();
    static HttpRequestDef genRequestDefForShowDomainCertificate();
    static HttpRequestDef genRequestDefForShowDomainDetail();
    static HttpRequestDef genRequestDefForShowDomainNameConfig();
    static HttpRequestDef genRequestDefForShowFlowBlock();
    static HttpRequestDef genRequestDefForShowInstanceByInstanceId();
    static HttpRequestDef genRequestDefForShowWafPolicy();
    static HttpRequestDef genRequestDefForShowWafQps();
    static HttpRequestDef genRequestDefForUpdateDomainConfig();
    static HttpRequestDef genRequestDefForUpdateForwardRule();
    static HttpRequestDef genRequestDefForUpgradeInstanceSpec();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_AadMeta_H_
