
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineByTemplateDTO_variables_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineByTemplateDTO_variables_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineByTemplateDTO_variables
    : public ModelBase
{
public:
    PipelineByTemplateDTO_variables();
    virtual ~PipelineByTemplateDTO_variables();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineByTemplateDTO_variables members

    /// <summary>
    /// **参数解释**： 参数名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    Object getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const Object& value);

    /// <summary>
    /// **参数解释**： 参数序号，从1开始递增。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// **参数解释**： 参数类型。 **约束限制**： 不涉及。 **取值范围**： - autoIncrement：自增长参数。 - enum：枚举参数。 - string：字符串参数。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数值。 **约束限制**： 不涉及。 **取值范围**： 不超过8192字符。 **默认取值**： 不涉及。 
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
    /// **参数解释**： 参数描述。 **约束限制**： 不涉及。 **取值范围**： 不超过512字符。 **默认取值**： 不涉及。 
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
    /// **参数解释**： 是否重置。自增长参数被编辑，则使用编辑后的值，否则进行末位数字递增。 **约束限制**： 不涉及。 **取值范围**： - true：使用编辑后的参数值。 - false：使用自增长参数。 **默认取值**： false 
    /// </summary>

    bool isIsReset() const;
    bool isResetIsSet() const;
    void unsetisReset();
    void setIsReset(bool value);

    /// <summary>
    /// **参数解释**： 最近一次运行的参数值。 **约束限制**： 不涉及。 **取值范围**： 不超过8192字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getLatestValue() const;
    bool latestValueIsSet() const;
    void unsetlatestValue();
    void setLatestValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 枚举值列表。 **约束限制**： 不涉及。 **取值范围**： 每个枚举值不超过1024字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getLimits();
    bool limitsIsSet() const;
    void unsetlimits();
    void setLimits(const std::vector<std::string>& value);


protected:
    Object name_;
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
    bool isReset_;
    bool isResetIsSet_;
    std::string latestValue_;
    bool latestValueIsSet_;
    std::vector<std::string> limits_;
    bool limitsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineByTemplateDTO_variables_H_
