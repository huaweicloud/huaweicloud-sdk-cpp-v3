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
    static HttpRequestDef genRequestDefForCreateDomain();
    static HttpRequestDef genRequestDefForListDDoSAttackEvent();
    static HttpRequestDef genRequestDefForListDDoSConnectionNumber();
    static HttpRequestDef genRequestDefForListDDoSFlow();
    static HttpRequestDef genRequestDefForListFrequencyControlRule();
    static HttpRequestDef genRequestDefForListInstanceDomains();
    static HttpRequestDef genRequestDefForListWafAttackEvent();
    static HttpRequestDef genRequestDefForListWafBandwidth();
    static HttpRequestDef genRequestDefForListWafCustomRule();
    static HttpRequestDef genRequestDefForListWafGeoIpRule();
    static HttpRequestDef genRequestDefForListWafQps();
    static HttpRequestDef genRequestDefForListWafWhiteIpRule();
    static HttpRequestDef genRequestDefForListWhiteBlackIpRule();
    static HttpRequestDef genRequestDefForShowDomainCertificate();
    static HttpRequestDef genRequestDefForShowFlowBlock();
    static HttpRequestDef genRequestDefForShowWafPolicy();
    static HttpRequestDef genRequestDefForShowWafQps();
    static HttpRequestDef genRequestDefForUpgradeInstanceSpec();
    static HttpRequestDef genRequestDefForDeleteDomain();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_AadMeta_H_
