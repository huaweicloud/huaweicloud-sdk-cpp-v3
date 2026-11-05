
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataUpdate_annotations_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataUpdate_annotations_H_


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
/// **参数解释**：资源池的注释信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMetadataUpdate_annotations
    : public ModelBase
{
public:
    PoolMetadataUpdate_annotations();
    virtual ~PoolMetadataUpdate_annotations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMetadataUpdate_annotations members

    /// <summary>
    /// **参数解释**：资源池描述信息，用于说明资源池用于某种指定场景。不能包含特殊字符!&lt;&gt;&#x3D;&amp;\&quot;&#39;。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsDescription() const;
    bool osModelartsDescriptionIsSet() const;
    void unsetosModelartsDescription();
    void setOsModelartsDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：订单id，包周期创建和变更的时候需要传递该参数。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsOrderId() const;
    bool osModelartsOrderIdIsSet() const;
    void unsetosModelartsOrderId();
    void setOsModelartsOrderId(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池的调度算法。 **约束限制**：不涉及。 **取值范围**：可选值如下： - FIFO：先进先出，默认值 - Range：遍历调度 - Step: 阶梯轮询 - Rank: 分级调度 **默认取值**：FIFO。
    /// </summary>

    std::string getOsModelartsPoolSchedulerQueueStrategy() const;
    bool osModelartsPoolSchedulerQueueStrategyIsSet() const;
    void unsetosModelartsPoolSchedulerQueueStrategy();
    void setOsModelartsPoolSchedulerQueueStrategy(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池的调度策略配置。 **约束限制**：仅当调度策略为Step或Rank时生效。 **取值范围**：Json字符串，自行配置，示例如下： - Step: {\&quot;step_config\&quot;:{\&quot;timeout\&quot;:300}} - Rank: {\&quot;rank_config\&quot;:[{\&quot;max_priority\&quot;:3,\&quot;min_priority\&quot;:3,\&quot;rank_strategy\&quot;:\&quot;Step\&quot;,\&quot;step_config\&quot;:{\&quot;timeout\&quot;:300}},{\&quot;max_priority\&quot;:2,\&quot;min_priority\&quot;:1,\&quot;rank_strategy\&quot;:\&quot;Range\&quot;}]} **默认取值**：不涉及。
    /// </summary>

    std::string getOsModelartsPoolSchedulerQueueStrategyConfig() const;
    bool osModelartsPoolSchedulerQueueStrategyConfigIsSet() const;
    void unsetosModelartsPoolSchedulerQueueStrategyConfig();
    void setOsModelartsPoolSchedulerQueueStrategyConfig(const std::string& value);


protected:
    std::string osModelartsDescription_;
    bool osModelartsDescriptionIsSet_;
    std::string osModelartsOrderId_;
    bool osModelartsOrderIdIsSet_;
    std::string osModelartsPoolSchedulerQueueStrategy_;
    bool osModelartsPoolSchedulerQueueStrategyIsSet_;
    std::string osModelartsPoolSchedulerQueueStrategyConfig_;
    bool osModelartsPoolSchedulerQueueStrategyConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataUpdate_annotations_H_
