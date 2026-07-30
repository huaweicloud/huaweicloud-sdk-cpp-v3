
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResetNodesRequest_rollingConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResetNodesRequest_rollingConfig_H_


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
/// **参数解释**：节点重置是滚动配置。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResetNodesRequest_rollingConfig
    : public ModelBase
{
public:
    ResetNodesRequest_rollingConfig();
    virtual ~ResetNodesRequest_rollingConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetNodesRequest_rollingConfig members

    /// <summary>
    /// **参数解释**：滚动策略。 **约束限制**：不涉及。 **取值范围**：可选值如下： - RollingByNumber：表示按节点数量设置最大同时重置节点数量，例如10，表示单次最多重置10个节点 - RollingByPercent：表示按百分比设置最大同时重置节点数量。例如10，表示单次最多重置10%的节点 **默认取值**：不涉及。
    /// </summary>

    std::string getStrategy() const;
    bool strategyIsSet() const;
    void unsetstrategy();
    void setStrategy(const std::string& value);

    /// <summary>
    /// **参数解释**：滚动重置的节点数量或者节点比例, 当strategy为RollingByNumber时,表示允许同时重置的节点数量, 当strategy为RollingByPercent时,表示允许同时重置的最大节点比例。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getMaxUnavailable() const;
    bool maxUnavailableIsSet() const;
    void unsetmaxUnavailable();
    void setMaxUnavailable(int32_t value);


protected:
    std::string strategy_;
    bool strategyIsSet_;
    int32_t maxUnavailable_;
    bool maxUnavailableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResetNodesRequest_rollingConfig_H_
