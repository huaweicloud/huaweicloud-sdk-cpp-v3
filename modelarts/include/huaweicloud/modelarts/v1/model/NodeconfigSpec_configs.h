
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_configs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_configs_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeconfigSpec_configs_image_warm_up.h>
#include <huaweicloud/modelarts/v1/model/NodeconfigSpec_configs_cpu_manager.h>
#include <huaweicloud/modelarts/v1/model/NodeconfigSpec_configs_transparent_hugepage.h>
#include <huaweicloud/modelarts/v1/model/NodeconfigSpec_configs_drop_cache.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 节点自定义配置；当前支持节点绑核（cpu_manager）、缓存清理（drop_cache）、透明大页（transparent_hugepage）和镜像预热（image_warm_up）。 **约束限制**：仅Dedicate（专属）资源池支持修改节点配置，非专属资源池调用将返回403。 **取值范围**：不涉及。 **默认取值**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigSpec_configs
    : public ModelBase
{
public:
    NodeconfigSpec_configs();
    virtual ~NodeconfigSpec_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigSpec_configs members

    /// <summary>
    /// **参数解释**：镜像预热任务配置列表。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<NodeconfigSpec_configs_image_warm_up>& getImageWarmUp();
    bool imageWarmUpIsSet() const;
    void unsetimageWarmUp();
    void setImageWarmUp(const std::vector<NodeconfigSpec_configs_image_warm_up>& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigSpec_configs_cpu_manager getCpuManager() const;
    bool cpuManagerIsSet() const;
    void unsetcpuManager();
    void setCpuManager(const NodeconfigSpec_configs_cpu_manager& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigSpec_configs_drop_cache getDropCache() const;
    bool dropCacheIsSet() const;
    void unsetdropCache();
    void setDropCache(const NodeconfigSpec_configs_drop_cache& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigSpec_configs_transparent_hugepage getTransparentHugepage() const;
    bool transparentHugepageIsSet() const;
    void unsettransparentHugepage();
    void setTransparentHugepage(const NodeconfigSpec_configs_transparent_hugepage& value);


protected:
    std::vector<NodeconfigSpec_configs_image_warm_up> imageWarmUp_;
    bool imageWarmUpIsSet_;
    NodeconfigSpec_configs_cpu_manager cpuManager_;
    bool cpuManagerIsSet_;
    NodeconfigSpec_configs_drop_cache dropCache_;
    bool dropCacheIsSet_;
    NodeconfigSpec_configs_transparent_hugepage transparentHugepage_;
    bool transparentHugepageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_configs_H_
