
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_spec_configs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_spec_configs_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec_configs_cpu_manager.h>
#include <huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec_configs_image_warm_up.h>
#include <huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec_configs_transparent_hugepage.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec_configs_drop_cache.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：待更新的节点配置。支持镜像预热（image_warm_up）、CPU管理策略（cpu_manager）、缓存清理（drop_cache）、透明大页（transparent_hugepage）等配置项。 **约束限制**：仅Dedicate（专属）资源池支持修改节点配置，非专属资源池调用将返回403。镜像预热配置仅在资源池机型为支持镜像预热的裸金属规格（Ascend 910B/910C）时可用。 **取值范围**：不涉及。 **默认取值**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigUpdate_spec_configs
    : public ModelBase
{
public:
    NodeconfigUpdate_spec_configs();
    virtual ~NodeconfigUpdate_spec_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigUpdate_spec_configs members

    /// <summary>
    /// **参数解释**：镜像预热配置。用于创建或删除镜像预热任务，镜像会被提前拉取到资源池节点，缩短训练任务启动时间。 **约束限制**：镜像预热任务数量上限为10；同一请求内任务名称不可重复、镜像地址不可重复；仅标准池支持，Lite资源池不支持该配置。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<NodeconfigUpdate_spec_configs_image_warm_up>& getImageWarmUp();
    bool imageWarmUpIsSet() const;
    void unsetimageWarmUp();
    void setImageWarmUp(const std::vector<NodeconfigUpdate_spec_configs_image_warm_up>& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigUpdate_spec_configs_cpu_manager getCpuManager() const;
    bool cpuManagerIsSet() const;
    void unsetcpuManager();
    void setCpuManager(const NodeconfigUpdate_spec_configs_cpu_manager& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigUpdate_spec_configs_drop_cache getDropCache() const;
    bool dropCacheIsSet() const;
    void unsetdropCache();
    void setDropCache(const NodeconfigUpdate_spec_configs_drop_cache& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigUpdate_spec_configs_transparent_hugepage getTransparentHugepage() const;
    bool transparentHugepageIsSet() const;
    void unsettransparentHugepage();
    void setTransparentHugepage(const NodeconfigUpdate_spec_configs_transparent_hugepage& value);


protected:
    std::vector<NodeconfigUpdate_spec_configs_image_warm_up> imageWarmUp_;
    bool imageWarmUpIsSet_;
    NodeconfigUpdate_spec_configs_cpu_manager cpuManager_;
    bool cpuManagerIsSet_;
    NodeconfigUpdate_spec_configs_drop_cache dropCache_;
    bool dropCacheIsSet_;
    NodeconfigUpdate_spec_configs_transparent_hugepage transparentHugepage_;
    bool transparentHugepageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_spec_configs_H_
