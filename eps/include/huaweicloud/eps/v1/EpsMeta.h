#ifndef HUAWEICLOUD_SDK_EPS_V1_EpsMeta_H_
#define HUAWEICLOUD_SDK_EPS_V1_EpsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/eps/v1/EpsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_EPS_V1_EXPORT  EpsMeta {
public:
    static HttpRequestDef genRequestDefForCreateEnterpriseProject();
    static HttpRequestDef genRequestDefForDeleteEnterpriseProject();
    static HttpRequestDef genRequestDefForDisableEnterpriseProject();
    static HttpRequestDef genRequestDefForEnableEnterpriseProject();
    static HttpRequestDef genRequestDefForListApiVersions();
    static HttpRequestDef genRequestDefForListEnterpriseProject();
    static HttpRequestDef genRequestDefForListMigrationRecord();
    static HttpRequestDef genRequestDefForListProviders();
    static HttpRequestDef genRequestDefForListResourceMapping();
    static HttpRequestDef genRequestDefForMigrateResource();
    static HttpRequestDef genRequestDefForShowApiVersion();
    static HttpRequestDef genRequestDefForShowAssociatedResources();
    static HttpRequestDef genRequestDefForShowEnterpriseProject();
    static HttpRequestDef genRequestDefForShowEnterpriseProjectQuota();
    static HttpRequestDef genRequestDefForShowEpConfigs();
    static HttpRequestDef genRequestDefForShowResourceBindEnterpriseProject();
    static HttpRequestDef genRequestDefForUpdateEnterpriseProject();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_EpsMeta_H_
