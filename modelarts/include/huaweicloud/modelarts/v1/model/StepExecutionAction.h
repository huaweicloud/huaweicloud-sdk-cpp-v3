
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepExecutionAction_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepExecutionAction_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/DataRequirement.h>
#include <huaweicloud/modelarts/v1/model/WorkflowParameter.h>
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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  StepExecutionAction
    : public ModelBase
{
public:
    StepExecutionAction();
    virtual ~StepExecutionAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StepExecutionAction members

    /// <summary>
    /// 操作名称，枚举如下:  - retry 重试  - stop 停止  - continue 继续
    /// </summary>

    std::string getActionName() const;
    bool actionNameIsSet() const;
    void unsetactionName();
    void setActionName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<DataRequirement>& getDataRequirements();
    bool dataRequirementsIsSet() const;
    void unsetdataRequirements();
    void setDataRequirements(const std::vector<DataRequirement>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<WorkflowParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<WorkflowParameter>& value);


protected:
    std::string actionName_;
    bool actionNameIsSet_;
    std::vector<DataRequirement> dataRequirements_;
    bool dataRequirementsIsSet_;
    std::vector<WorkflowParameter> parameters_;
    bool parametersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_StepExecutionAction_H_
