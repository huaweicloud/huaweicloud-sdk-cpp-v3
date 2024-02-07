#ifndef HUAWEICLOUD_SDK_EIP_V3_EipMeta_H_
#define HUAWEICLOUD_SDK_EIP_V3_EipMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/eip/v3/EipExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_EIP_V3_EXPORT  EipMeta {
public:
    static HttpRequestDef genRequestDefForListBandwidth();
    static HttpRequestDef genRequestDefForListBandwidthsLimit();
    static HttpRequestDef genRequestDefForListCommonPools();
    static HttpRequestDef genRequestDefForListEipBandwidths();
    static HttpRequestDef genRequestDefForListPublicBorderGroups();
    static HttpRequestDef genRequestDefForListPublicipPool();
    static HttpRequestDef genRequestDefForListShareBandwidthTypes();
    static HttpRequestDef genRequestDefForShowPublicipPool();
    static HttpRequestDef genRequestDefForListProjectGeipBindings();
    static HttpRequestDef genRequestDefForCreateTenantVpcIgw();
    static HttpRequestDef genRequestDefForDeleteTenantVpcIgw();
    static HttpRequestDef genRequestDefForListTenantVpcIgws();
    static HttpRequestDef genRequestDefForShowInternalVpcIgw();
    static HttpRequestDef genRequestDefForUpdateTenantVpcIgw();
    static HttpRequestDef genRequestDefForAssociatePublicips();
    static HttpRequestDef genRequestDefForAttachBatchPublicIp();
    static HttpRequestDef genRequestDefForAttachShareBandwidth();
    static HttpRequestDef genRequestDefForCountEipAvailableResources();
    static HttpRequestDef genRequestDefForDetachBatchPublicIp();
    static HttpRequestDef genRequestDefForDetachShareBandwidth();
    static HttpRequestDef genRequestDefForDisableNat64();
    static HttpRequestDef genRequestDefForDisassociatePublicips();
    static HttpRequestDef genRequestDefForEnableNat64();
    static HttpRequestDef genRequestDefForListPublicips();
    static HttpRequestDef genRequestDefForShowPublicip();
    static HttpRequestDef genRequestDefForUpdatePublicip();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_EipMeta_H_
