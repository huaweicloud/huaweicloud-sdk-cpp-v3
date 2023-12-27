#ifndef HUAWEICLOUD_SDK_AAD_V1_AadMeta_H_
#define HUAWEICLOUD_SDK_AAD_V1_AadMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/aad/v1/AadExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_AAD_V1_EXPORT  AadMeta {
public:
    static HttpRequestDef genRequestDefForExecuteUnblockIp();
    static HttpRequestDef genRequestDefForListBlockIps();
    static HttpRequestDef genRequestDefForListUnblockQuotaStatistics();
    static HttpRequestDef genRequestDefForShowBlockStatistics();
    static HttpRequestDef genRequestDefForShowUnblockRecord();
    static HttpRequestDef genRequestDefForAddBlackWhiteIpList();
    static HttpRequestDef genRequestDefForAddPolicyBlackAndWhiteIpList();
    static HttpRequestDef genRequestDefForAssociateIpToPolicy();
    static HttpRequestDef genRequestDefForBatchCreateInstanceIpRule();
    static HttpRequestDef genRequestDefForBatchDeleteInstanceIpRule();
    static HttpRequestDef genRequestDefForCreateAadDomain();
    static HttpRequestDef genRequestDefForCreateCertificate();
    static HttpRequestDef genRequestDefForCreatePolicy();
    static HttpRequestDef genRequestDefForDeleteAlarmConfig();
    static HttpRequestDef genRequestDefForDeleteBlackWhiteIpList();
    static HttpRequestDef genRequestDefForDeletePolicy();
    static HttpRequestDef genRequestDefForDeletePolicyBlackAndWhiteIpList();
    static HttpRequestDef genRequestDefForDisassociateIpFromPolicy();
    static HttpRequestDef genRequestDefForListDomain();
    static HttpRequestDef genRequestDefForListInstance();
    static HttpRequestDef genRequestDefForListInstanceId();
    static HttpRequestDef genRequestDefForListInstanceIpRule();
    static HttpRequestDef genRequestDefForListPackage();
    static HttpRequestDef genRequestDefForListPeak();
    static HttpRequestDef genRequestDefForListPolicy();
    static HttpRequestDef genRequestDefForListProtectedIp();
    static HttpRequestDef genRequestDefForListSourceIps();
    static HttpRequestDef genRequestDefForListUnboundProtectedIp();
    static HttpRequestDef genRequestDefForModifyDomainWebSwitch();
    static HttpRequestDef genRequestDefForShowAlarmConfig();
    static HttpRequestDef genRequestDefForShowPolicy();
    static HttpRequestDef genRequestDefForUpdateAlarmConfig();
    static HttpRequestDef genRequestDefForUpdateDomain();
    static HttpRequestDef genRequestDefForUpdateInstanceIpRule();
    static HttpRequestDef genRequestDefForUpdatePackageIp();
    static HttpRequestDef genRequestDefForUpdatePackageName();
    static HttpRequestDef genRequestDefForUpdatePolicy();
    static HttpRequestDef genRequestDefForUpdateTagForProtectedIp();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_AadMeta_H_
