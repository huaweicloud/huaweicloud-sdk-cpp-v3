#ifndef HUAWEICLOUD_SDK_CPCS_V1_CpcsMeta_H_
#define HUAWEICLOUD_SDK_CPCS_V1_CpcsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cpcs/v1/CpcsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CPCS_V1_EXPORT  CpcsMeta {
public:
    static HttpRequestDef genRequestDefForAssociateApps();
    static HttpRequestDef genRequestDefForAuthorizeAccessKeys();
    static HttpRequestDef genRequestDefForBatchDisableAccessKeys();
    static HttpRequestDef genRequestDefForBatchEnableAccessKeys();
    static HttpRequestDef genRequestDefForCancelAuthorizeAccessKeys();
    static HttpRequestDef genRequestDefForCreateApp();
    static HttpRequestDef genRequestDefForCreateAppAccessKey();
    static HttpRequestDef genRequestDefForCreateCluster();
    static HttpRequestDef genRequestDefForDeleteAccessKey();
    static HttpRequestDef genRequestDefForDeleteApp();
    static HttpRequestDef genRequestDefForDeleteCcspCluster();
    static HttpRequestDef genRequestDefForDisableCcspInstance();
    static HttpRequestDef genRequestDefForDisassociateApps();
    static HttpRequestDef genRequestDefForEnableCcspInstance();
    static HttpRequestDef genRequestDefForListCcspTenantImages();
    static HttpRequestDef genRequestDefForShowAccessKey();
    static HttpRequestDef genRequestDefForShowAppAccessKeyList();
    static HttpRequestDef genRequestDefForShowAppList();
    static HttpRequestDef genRequestDefForShowAssociationList();
    static HttpRequestDef genRequestDefForShowAvailableAz();
    static HttpRequestDef genRequestDefForShowCcspCluster();
    static HttpRequestDef genRequestDefForShowCcspClusterList();
    static HttpRequestDef genRequestDefForShowCcspInstanceInfo();
    static HttpRequestDef genRequestDefForShowClusterAccessKeyList();
    static HttpRequestDef genRequestDefForShowClusterUri();
    static HttpRequestDef genRequestDefForShowResourceInfo();
    static HttpRequestDef genRequestDefForShowVmMonitor();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_CpcsMeta_H_
