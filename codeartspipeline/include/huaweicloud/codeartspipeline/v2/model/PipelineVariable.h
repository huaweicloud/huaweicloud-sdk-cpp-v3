
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineVariable_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineVariable_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 流水线自定义参数
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineVariable
    : public ModelBase
{
public:
    PipelineVariable();
    virtual ~PipelineVariable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineVariable members

    /// <summary>
    /// **参数解释**： 自定义参数名称。 **取值范围**： 仅支持大小写英文字母、数字、“_”，不超过128个字符。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 序号。 **取值范围**： [1, 2147483647]。 
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// **参数解释**： 自定义参数的类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 自定义参数的默认值。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否为私密参数。 **取值范围**： - true：是私密参数。 - false：不是私密参数。 
    /// </summary>

    bool isIsSecret() const;
    bool isSecretIsSet() const;
    void unsetisSecret();
    void setIsSecret(bool value);

    /// <summary>
    /// **参数解释**： 自定义参数描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否运行时设置。 **取值范围**： - true：运行时设置。 - false：非运行时设置。 
    /// </summary>

    bool isIsRuntime() const;
    bool isRuntimeIsSet() const;
    void unsetisRuntime();
    void setIsRuntime(bool value);

    /// <summary>
    /// **参数解释**： 限定枚举值列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getLimits();
    bool limitsIsSet() const;
    void unsetlimits();
    void setLimits(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 自增长参数是否被重置。 **取值范围**： - true：被重置。 - false：不被重置。 
    /// </summary>

    bool isIsReset() const;
    bool isResetIsSet() const;
    void unsetisReset();
    void setIsReset(bool value);

    /// <summary>
    /// **参数解释**： 自增长参数最新值。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLatestValue() const;
    bool latestValueIsSet() const;
    void unsetlatestValue();
    void setLatestValue(const std::string& value);


protected:
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
    std::vector<std::string> limits_;
    bool limitsIsSet_;
    bool isReset_;
    bool isResetIsSet_;
    std::string latestValue_;
    bool latestValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineVariable_H_
