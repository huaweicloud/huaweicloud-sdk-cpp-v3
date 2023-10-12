#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_CloudTableMeta_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_CloudTableMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  CloudTableMeta {
public:
    static HttpRequestDef genRequestDefForCreateCluster();
    static HttpRequestDef genRequestDefForDeleteCluster();
    static HttpRequestDef genRequestDefForEnableComponent();
    static HttpRequestDef genRequestDefForExpandClusterComponent();
    static HttpRequestDef genRequestDefForListClusters();
    static HttpRequestDef genRequestDefForRebootCloudTableCluster();
    static HttpRequestDef genRequestDefForShowClusterDetail();
    static HttpRequestDef genRequestDefForShowClusterSetting();
    static HttpRequestDef genRequestDefForUpdateClusterSetting();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_CloudTableMeta_H_
