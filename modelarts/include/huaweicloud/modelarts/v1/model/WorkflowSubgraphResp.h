
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowSubgraphResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowSubgraphResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 子图。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowSubgraphResp
    : public ModelBase
{
public:
    WorkflowSubgraphResp();
    virtual ~WorkflowSubgraphResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowSubgraphResp members

    /// <summary>
    /// **参数解释**：子图名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：子图step成员。
    /// </summary>

    std::vector<std::string>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> steps_;
    bool stepsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowSubgraphResp_H_
