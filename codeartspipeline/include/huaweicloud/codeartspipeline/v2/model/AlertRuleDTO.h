
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_AlertRuleDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_AlertRuleDTO_H_


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
/// 告警规则DTO
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  AlertRuleDTO
    : public ModelBase
{
public:
    AlertRuleDTO();
    virtual ~AlertRuleDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlertRuleDTO members

    /// <summary>
    /// **参数解释**： 规则类型。 **约束限制**： 不涉及。 **取值范围**： - CONCURRENCY：并发数。 - FAIL_COUNT：失败次数。 - QUEUE_BACKLOG：队列积压。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getRuleType() const;
    bool ruleTypeIsSet() const;
    void unsetruleType();
    void setRuleType(const std::string& value);

    /// <summary>
    /// **参数解释**： 阈值。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int32_t getThresholdValue() const;
    bool thresholdValueIsSet() const;
    void unsetthresholdValue();
    void setThresholdValue(int32_t value);

    /// <summary>
    /// **参数解释**： 严重级别。 **约束限制**： 不涉及。 **取值范围**： - GENERAL：一般。 - WARNING：警告。 - MAJOR：严重。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否启用。 **约束限制**： 不涉及。 **取值范围**： - true：启用。 - false：禁用。 **默认取值**： 不涉及。 
    /// </summary>

    bool isIsEnabled() const;
    bool isEnabledIsSet() const;
    void unsetisEnabled();
    void setIsEnabled(bool value);


protected:
    std::string ruleType_;
    bool ruleTypeIsSet_;
    int32_t thresholdValue_;
    bool thresholdValueIsSet_;
    std::string severity_;
    bool severityIsSet_;
    bool isEnabled_;
    bool isEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_AlertRuleDTO_H_
