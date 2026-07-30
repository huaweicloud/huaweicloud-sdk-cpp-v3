
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_clusters_plugins_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_clusters_plugins_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：集群支持的插件名称。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolStatus_clusters_plugins
    : public ModelBase
{
public:
    PoolStatus_clusters_plugins();
    virtual ~PoolStatus_clusters_plugins();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolStatus_clusters_plugins members

    /// <summary>
    /// **参数解释**：集群支持的插件名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_clusters_plugins_H_
