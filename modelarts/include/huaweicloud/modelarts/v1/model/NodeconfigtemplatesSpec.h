
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigtemplatesSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigtemplatesSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeconfigTemplateItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：节点配置模板规格。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigtemplatesSpec
    : public ModelBase
{
public:
    NodeconfigtemplatesSpec();
    virtual ~NodeconfigtemplatesSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigtemplatesSpec members

    /// <summary>
    /// **参数解释**：节点配置模板列表。
    /// </summary>

    std::vector<NodeconfigTemplateItem>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<NodeconfigTemplateItem>& value);


protected:
    std::vector<NodeconfigTemplateItem> templates_;
    bool templatesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigtemplatesSpec_H_
