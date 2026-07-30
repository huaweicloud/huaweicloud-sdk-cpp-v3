
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowParameterResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowParameterResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 参数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowParameterResp
    : public ModelBase
{
public:
    WorkflowParameterResp();
    virtual ~WorkflowParameterResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowParameterResp members

    /// <summary>
    /// **参数解释**：Workflow工作流配置参数的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：参数的类型。 **取值范围**：枚举值如下: - str：字符串 - int：整型 - bool：布尔类型 - float：浮点型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：Workflow工作流配置参数的描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：Workflow工作流配置参数的样例。
    /// </summary>

    Object getExample() const;
    bool exampleIsSet() const;
    void unsetexample();
    void setExample(const Object& value);

    /// <summary>
    /// **参数解释**：是否为延迟输入的参数。 **取值范围**： - true：是 - false：否
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);

    /// <summary>
    /// **参数解释**：配置参数的默认值。
    /// </summary>

    Object getDefault() const;
    bool defaultIsSet() const;
    void unsetdefault();
    void setDefault(const Object& value);

    /// <summary>
    /// **参数解释**：参数值。
    /// </summary>

    Object getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Object& value);

    /// <summary>
    /// **参数解释**：Workflow工作流配置参数的枚举项。
    /// </summary>

    std::vector<Object>& getEnum();
    bool enumIsSet() const;
    void unsetenum();
    void setEnum(const std::vector<Object>& value);

    /// <summary>
    /// **参数解释**：使用这个参数的工作流节点。
    /// </summary>

    std::vector<std::string>& getUsedSteps();
    bool usedStepsIsSet() const;
    void unsetusedSteps();
    void setUsedSteps(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：数据格式。 **取值范围**：不涉及。
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);

    /// <summary>
    /// **参数解释**：限制条件。
    /// </summary>

    std::map<std::string, Object>& getConstraint();
    bool constraintIsSet() const;
    void unsetconstraint();
    void setConstraint(const std::map<std::string, Object>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    Object example_;
    bool exampleIsSet_;
    bool delay_;
    bool delayIsSet_;
    Object default_;
    bool defaultIsSet_;
    Object value_;
    bool valueIsSet_;
    std::vector<Object> enum_;
    bool enumIsSet_;
    std::vector<std::string> usedSteps_;
    bool usedStepsIsSet_;
    std::string format_;
    bool formatIsSet_;
    std::map<std::string, Object> constraint_;
    bool constraintIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowParameterResp_H_
