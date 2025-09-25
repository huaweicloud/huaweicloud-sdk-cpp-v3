
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionValidation_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionValidation_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionValidation
    : public ModelBase
{
public:
    ExtensionValidation();
    virtual ~ExtensionValidation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionValidation members

    /// <summary>
    /// **参数解释**： 若插件输入项为必填而实际未填写时，提示的信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRequiredMessage() const;
    bool requiredMessageIsSet() const;
    void unsetrequiredMessage();
    void setRequiredMessage(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件输入项值的校验正则表达式。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRegex() const;
    bool regexIsSet() const;
    void unsetregex();
    void setRegex(const std::string& value);

    /// <summary>
    /// **参数解释**： 若插件输入项的值不满足regex中的正则表达式时，提示的信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getRegexMessage() const;
    bool regexMessageIsSet() const;
    void unsetregexMessage();
    void setRegexMessage(const std::string& value);

    /// <summary>
    /// **参数解释**： 插件输入项值的最大长度。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getMaxLength() const;
    bool maxLengthIsSet() const;
    void unsetmaxLength();
    void setMaxLength(int32_t value);

    /// <summary>
    /// **参数解释**： 插件输入项值的最小长度。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getMinLength() const;
    bool minLengthIsSet() const;
    void unsetminLength();
    void setMinLength(int32_t value);


protected:
    std::string requiredMessage_;
    bool requiredMessageIsSet_;
    std::string regex_;
    bool regexIsSet_;
    std::string regexMessage_;
    bool regexMessageIsSet_;
    int32_t maxLength_;
    bool maxLengthIsSet_;
    int32_t minLength_;
    bool minLengthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionValidation_H_
