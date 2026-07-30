
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PreferredAffinity_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PreferredAffinity_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PreferredSchedulingTerm.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PreferredAffinity
    : public ModelBase
{
public:
    PreferredAffinity();
    virtual ~PreferredAffinity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreferredAffinity members

    /// <summary>
    /// **参数解释**：调度器会优先将Pod调度到满足该字段指定的亲和性表达式的节点上，但它也可能选择违反一个或多个表达式的节点。最优先选择的节点是权重总和最大的节点，即对于每个满足所有调度要求（资源请求、调度期间必需的亲和性表达式等）的节点，通过遍历该字段的元素并计算总和，如果节点匹配相应的匹配表达式，则将“权重”加到总和中；权重总和最高的节点即为最优先选择的节点。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<PreferredSchedulingTerm>& getNodeAffinity();
    bool nodeAffinityIsSet() const;
    void unsetnodeAffinity();
    void setNodeAffinity(const std::vector<PreferredSchedulingTerm>& value);


protected:
    std::vector<PreferredSchedulingTerm> nodeAffinity_;
    bool nodeAffinityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PreferredAffinity_H_
