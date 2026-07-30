
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSelector_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSelector_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeSelectorTerm.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeSelector
    : public ModelBase
{
public:
    NodeSelector();
    virtual ~NodeSelector();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSelector members

    /// <summary>
    /// **参数解释**：必填项。节点选择器项的列表。这些项是“或”的关系。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<NodeSelectorTerm>& getNodeSelectorTerms();
    bool nodeSelectorTermsIsSet() const;
    void unsetnodeSelectorTerms();
    void setNodeSelectorTerms(const std::vector<NodeSelectorTerm>& value);


protected:
    std::vector<NodeSelectorTerm> nodeSelectorTerms_;
    bool nodeSelectorTermsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSelector_H_
