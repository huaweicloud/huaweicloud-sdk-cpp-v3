
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ExecutionAction_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ExecutionAction_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/DataRequirement.h>
#include <huaweicloud/modelarts/v1/model/WorkflowParameter.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/ExecutionActionPolicy.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 操作Workflow Execution的动作。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ExecutionAction
    : public ModelBase
{
public:
    ExecutionAction();
    virtual ~ExecutionAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecutionAction members

    /// <summary>
    /// 操作名称，枚举如下: - stop 停止 - rerun 重跑
    /// </summary>

    std::string getActionName() const;
    bool actionNameIsSet() const;
    void unsetactionName();
    void setActionName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExecutionActionPolicy getPolicies() const;
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const ExecutionActionPolicy& value);

    /// <summary>
    /// 参数。
    /// </summary>

    std::vector<WorkflowParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<WorkflowParameter>& value);

    /// <summary>
    /// 需要的数据。
    /// </summary>

    std::vector<DataRequirement>& getDataRequirements();
    bool dataRequirementsIsSet() const;
    void unsetdataRequirements();
    void setDataRequirements(const std::vector<DataRequirement>& value);


protected:
    std::string actionName_;
    bool actionNameIsSet_;
    ExecutionActionPolicy policies_;
    bool policiesIsSet_;
    std::vector<WorkflowParameter> parameters_;
    bool parametersIsSet_;
    std::vector<DataRequirement> dataRequirements_;
    bool dataRequirementsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ExecutionAction_H_
