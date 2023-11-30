#ifndef HUAWEICLOUD_SDK_EIP_V2_EipMeta_H_
#define HUAWEICLOUD_SDK_EIP_V2_EipMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/eip/v2/EipExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_EIP_V2_EXPORT  EipMeta {
public:
    static HttpRequestDef genRequestDefForAddPublicipsIntoSharedBandwidth();
    static HttpRequestDef genRequestDefForBatchCreateSharedBandwidths();
    static HttpRequestDef genRequestDefForBatchModifyBandwidth();
    static HttpRequestDef genRequestDefForChangeBandwidthToPeriod();
    static HttpRequestDef genRequestDefForCreateSharedBandwidth();
    static HttpRequestDef genRequestDefForDeleteSharedBandwidth();
    static HttpRequestDef genRequestDefForListBandwidthPkg();
    static HttpRequestDef genRequestDefForListBandwidths();
    static HttpRequestDef genRequestDefForListQuotas();
    static HttpRequestDef genRequestDefForRemovePublicipsFromSharedBandwidth();
    static HttpRequestDef genRequestDefForShowBandwidth();
    static HttpRequestDef genRequestDefForUpdateBandwidth();
    static HttpRequestDef genRequestDefForUpdatePrePaidBandwidth();
    static HttpRequestDef genRequestDefForBatchCreatePublicipTags();
    static HttpRequestDef genRequestDefForBatchCreatePublicips();
    static HttpRequestDef genRequestDefForBatchDeletePublicIp();
    static HttpRequestDef genRequestDefForBatchDeletePublicipTags();
    static HttpRequestDef genRequestDefForBatchDisassociatePublicips();
    static HttpRequestDef genRequestDefForChangePublicipToPeriod();
    static HttpRequestDef genRequestDefForCountPublicIp();
    static HttpRequestDef genRequestDefForCountPublicIpInstance();
    static HttpRequestDef genRequestDefForCreatePrePaidPublicip();
    static HttpRequestDef genRequestDefForCreatePublicip();
    static HttpRequestDef genRequestDefForCreatePublicipTag();
    static HttpRequestDef genRequestDefForDeletePublicip();
    static HttpRequestDef genRequestDefForDeletePublicipTag();
    static HttpRequestDef genRequestDefForListPublicipTags();
    static HttpRequestDef genRequestDefForListPublicips();
    static HttpRequestDef genRequestDefForListPublicipsByTags();
    static HttpRequestDef genRequestDefForShowPublicIpType();
    static HttpRequestDef genRequestDefForShowPublicip();
    static HttpRequestDef genRequestDefForShowPublicipTags();
    static HttpRequestDef genRequestDefForUpdatePublicip();
    static HttpRequestDef genRequestDefForShowResourcesJobDetail();
    static HttpRequestDef genRequestDefForNeutronCreateFloatingIp();
    static HttpRequestDef genRequestDefForNeutronDeleteFloatingIp();
    static HttpRequestDef genRequestDefForNeutronListFloatingIps();
    static HttpRequestDef genRequestDefForNeutronShowFloatingIp();
    static HttpRequestDef genRequestDefForNeutronUpdateFloatingIp();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_EipMeta_H_
