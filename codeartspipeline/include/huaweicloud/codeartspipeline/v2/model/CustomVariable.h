
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CustomVariable_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CustomVariable_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CustomVariable
    : public ModelBase
{
public:
    CustomVariable();
    virtual ~CustomVariable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomVariable members

    /// <summary>
    /// **参数解释**： 流水线ID，可以通过[查询流水线列表](ListPipelines.xml)接口，其中pipelines.pipelineId即为流水线ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// **参数解释**： 自定义参数名称。 **约束限制**： 不涉及。 **取值范围**： 仅支持大小写英文字母、数字、“_”，不超过128个字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数序号，从1开始。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// **参数解释**： 自定义参数类型。 **约束限制**： 不涉及。 **取值范围**： - autoIncrement：自增长参数。 - enum：枚举参数。 - string：字符串参数。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 自定义参数默认值。 **约束限制**： 不涉及。 **取值范围**： 最长8192字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否私密参数。 **约束限制**： 不涉及。 **取值范围**： - true：是私密参数。 - false：不是私密参数。 **默认取值**： false。 
    /// </summary>

    bool isIsSecret() const;
    bool isSecretIsSet() const;
    void unsetisSecret();
    void setIsSecret(bool value);

    /// <summary>
    /// **参数解释**： 参数描述。 **约束限制**： 不涉及。 **取值范围**： 最长1024字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否运行时设置参数。 **约束限制**： 不涉及。 **取值范围**： - true：是运行时设置参数。 - false：不是运行时设置参数。 **默认取值**： false。 
    /// </summary>

    bool isIsRuntime() const;
    bool isRuntimeIsSet() const;
    void unsetisRuntime();
    void setIsRuntime(bool value);

    /// <summary>
    /// **参数解释**： 枚举值列表。 **约束限制**： 不涉及。 **取值范围**： 每个枚举值不超过1024字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<Object>& getLimits();
    bool limitsIsSet() const;
    void unsetlimits();
    void setLimits(const std::vector<Object>& value);

    /// <summary>
    /// **参数解释**： 是否重置。自增长参数被编辑，则使用编辑后的值，否则进行末位数字递增。 **约束限制**： 不涉及。 **取值范围**： - true：使用编辑后的参数值。 - false：使用自增长参数。 **默认取值**： false。 
    /// </summary>

    bool isIsReset() const;
    bool isResetIsSet() const;
    void unsetisReset();
    void setIsReset(bool value);

    /// <summary>
    /// **参数解释**： 最近一次运行的参数值。 **约束限制**： 不涉及。 **取值范围**： 最长8192字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getLatestValue() const;
    bool latestValueIsSet() const;
    void unsetlatestValue();
    void setLatestValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线运行时设置参数的传入值。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getRuntimeValue() const;
    bool runtimeValueIsSet() const;
    void unsetruntimeValue();
    void setRuntimeValue(const std::string& value);


protected:
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t sequence_;
    bool sequenceIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;
    bool isSecret_;
    bool isSecretIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool isRuntime_;
    bool isRuntimeIsSet_;
    std::vector<Object> limits_;
    bool limitsIsSet_;
    bool isReset_;
    bool isResetIsSet_;
    std::string latestValue_;
    bool latestValueIsSet_;
    std::string runtimeValue_;
    bool runtimeValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CustomVariable_H_
