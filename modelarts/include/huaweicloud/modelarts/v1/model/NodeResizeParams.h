
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeResizeParams_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeResizeParams_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点规格变更参数
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeResizeParams
    : public ModelBase
{
public:
    NodeResizeParams();
    virtual ~NodeResizeParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeResizeParams members

    /// <summary>
    /// **参数解释**：节点池。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNodePool() const;
    bool nodePoolIsSet() const;
    void unsetnodePool();
    void setNodePool(const std::string& value);

    /// <summary>
    /// **参数解释**：规格。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：步长。 **约束限制**：不涉及。
    /// </summary>

    Object getCreatingStep() const;
    bool creatingStepIsSet() const;
    void unsetcreatingStep();
    void setCreatingStep(const Object& value);


protected:
    std::string nodePool_;
    bool nodePoolIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    Object creatingStep_;
    bool creatingStepIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeResizeParams_H_
