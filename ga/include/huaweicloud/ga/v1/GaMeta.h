#ifndef HUAWEICLOUD_SDK_GA_V1_GaMeta_H_
#define HUAWEICLOUD_SDK_GA_V1_GaMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/ga/v1/GaExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_GA_V1_EXPORT  GaMeta {
public:
    static HttpRequestDef genRequestDefForCreateAccelerator();
    static HttpRequestDef genRequestDefForDeleteAccelerator();
    static HttpRequestDef genRequestDefForListAccelerators();
    static HttpRequestDef genRequestDefForShowAccelerator();
    static HttpRequestDef genRequestDefForUpdateAccelerator();
    static HttpRequestDef genRequestDefForListByoipPools();
    static HttpRequestDef genRequestDefForCreateEndpoint();
    static HttpRequestDef genRequestDefForDeleteEndpoint();
    static HttpRequestDef genRequestDefForListEndpoints();
    static HttpRequestDef genRequestDefForShowEndpoint();
    static HttpRequestDef genRequestDefForUpdateEndpoint();
    static HttpRequestDef genRequestDefForCreateEndpointGroup();
    static HttpRequestDef genRequestDefForDeleteEndpointGroup();
    static HttpRequestDef genRequestDefForListEndpointGroups();
    static HttpRequestDef genRequestDefForShowEndpointGroup();
    static HttpRequestDef genRequestDefForUpdateEndpointGroup();
    static HttpRequestDef genRequestDefForCreateHealthCheck();
    static HttpRequestDef genRequestDefForDeleteHealthCheck();
    static HttpRequestDef genRequestDefForListHealthChecks();
    static HttpRequestDef genRequestDefForShowHealthCheck();
    static HttpRequestDef genRequestDefForUpdateHealthCheck();
    static HttpRequestDef genRequestDefForAddIpGroupIp();
    static HttpRequestDef genRequestDefForAssociateListener();
    static HttpRequestDef genRequestDefForCreateIpGroup();
    static HttpRequestDef genRequestDefForDeleteIpGroup();
    static HttpRequestDef genRequestDefForDisassociateListener();
    static HttpRequestDef genRequestDefForListIpGroups();
    static HttpRequestDef genRequestDefForRemoveIpGroupIp();
    static HttpRequestDef genRequestDefForShowIpGroup();
    static HttpRequestDef genRequestDefForUpdateIpGroup();
    static HttpRequestDef genRequestDefForCreateListener();
    static HttpRequestDef genRequestDefForDeleteListener();
    static HttpRequestDef genRequestDefForListListeners();
    static HttpRequestDef genRequestDefForShowListener();
    static HttpRequestDef genRequestDefForUpdateListener();
    static HttpRequestDef genRequestDefForCreateLogtank();
    static HttpRequestDef genRequestDefForDeleteLogtank();
    static HttpRequestDef genRequestDefForListLogtanks();
    static HttpRequestDef genRequestDefForShowLogtank();
    static HttpRequestDef genRequestDefForUpdateLogtank();
    static HttpRequestDef genRequestDefForListAllPops();
    static HttpRequestDef genRequestDefForListTenantQuotas();
    static HttpRequestDef genRequestDefForListRegions();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_GaMeta_H_
