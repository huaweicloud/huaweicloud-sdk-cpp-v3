
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSelectorTerm_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSelectorTerm_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeSelectorRequirement.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：空节点选择器或空节点选择器项不匹配任何对象。 **约束限制**：要求是按“与”（AND）逻辑进行组合。 **取值范围**：不涉及。 **默认取值**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeSelectorTerm
    : public ModelBase
{
public:
    NodeSelectorTerm();
    virtual ~NodeSelectorTerm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSelectorTerm members

    /// <summary>
    /// **参数解释**：按节点标签列出的节点选择器要求。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<NodeSelectorRequirement>& getMatchExpressions();
    bool matchExpressionsIsSet() const;
    void unsetmatchExpressions();
    void setMatchExpressions(const std::vector<NodeSelectorRequirement>& value);

    /// <summary>
    /// **参数解释**：按节点字段列出的节点选择器要求。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<NodeSelectorRequirement>& getMatchFields();
    bool matchFieldsIsSet() const;
    void unsetmatchFields();
    void setMatchFields(const std::vector<NodeSelectorRequirement>& value);


protected:
    std::vector<NodeSelectorRequirement> matchExpressions_;
    bool matchExpressionsIsSet_;
    std::vector<NodeSelectorRequirement> matchFields_;
    bool matchFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSelectorTerm_H_
