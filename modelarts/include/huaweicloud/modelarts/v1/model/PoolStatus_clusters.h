
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_clusters_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_clusters_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/PoolStatus_clusters_plugins.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：资源池集群信息，特权池才有该字段。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolStatus_clusters
    : public ModelBase
{
public:
    PoolStatus_clusters();
    virtual ~PoolStatus_clusters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolStatus_clusters members

    /// <summary>
    /// **参数解释**：集群名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：标准池的集群规格。 **取值范围**：不涉及。
    /// </summary>

    std::string getClusterFlavor() const;
    bool clusterFlavorIsSet() const;
    void unsetclusterFlavor();
    void setClusterFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池集群的类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：集群的版本号。 **取值范围**：不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PoolStatus_clusters_plugins getPlugins() const;
    bool pluginsIsSet() const;
    void unsetplugins();
    void setPlugins(const PoolStatus_clusters_plugins& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string clusterFlavor_;
    bool clusterFlavorIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    PoolStatus_clusters_plugins plugins_;
    bool pluginsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_clusters_H_
