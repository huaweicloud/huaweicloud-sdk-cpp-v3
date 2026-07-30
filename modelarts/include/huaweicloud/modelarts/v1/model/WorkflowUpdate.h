
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowUpdate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowUpdate_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/WorkflowStep.h>
#include <huaweicloud/modelarts/v1/model/WorkflowStorage.h>
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
/// 工作流更新信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowUpdate
    : public ModelBase
{
public:
    WorkflowUpdate();
    virtual ~WorkflowUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowUpdate members

    /// <summary>
    /// 工作流名称。填写1-64位，仅包含英文、数字、下划线（_）和中划线（-），并且以英文开头的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 工作流描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// Workflow包含的数据输入项定义。
    /// </summary>

    std::vector<DataRequirement>& getDataRequirements();
    bool dataRequirementsIsSet() const;
    void unsetdataRequirements();
    void setDataRequirements(const std::vector<DataRequirement>& value);

    /// <summary>
    /// 工作流参数。
    /// </summary>

    std::vector<WorkflowParameter>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<WorkflowParameter>& value);

    /// <summary>
    /// 工作流存储信息。
    /// </summary>

    std::vector<WorkflowStorage>& getStorages();
    bool storagesIsSet() const;
    void unsetstorages();
    void setStorages(const std::vector<WorkflowStorage>& value);

    /// <summary>
    /// 工作流标签。
    /// </summary>

    std::vector<std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<std::string>& value);

    /// <summary>
    /// SMN消息订阅开关。
    /// </summary>

    std::string getSmnSwitch() const;
    bool smnSwitchIsSet() const;
    void unsetsmnSwitch();
    void setSmnSwitch(const std::string& value);

    /// <summary>
    /// 工作流节点。
    /// </summary>

    std::vector<WorkflowStep>& getSteps();
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(const std::vector<WorkflowStep>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<DataRequirement> dataRequirements_;
    bool dataRequirementsIsSet_;
    std::vector<WorkflowParameter> parameters_;
    bool parametersIsSet_;
    std::vector<WorkflowStorage> storages_;
    bool storagesIsSet_;
    std::vector<std::string> labels_;
    bool labelsIsSet_;
    std::string smnSwitch_;
    bool smnSwitchIsSet_;
    std::vector<WorkflowStep> steps_;
    bool stepsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowUpdate_H_
