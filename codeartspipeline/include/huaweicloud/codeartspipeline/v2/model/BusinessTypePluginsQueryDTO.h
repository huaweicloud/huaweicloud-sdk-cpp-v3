
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BusinessTypePluginsQueryDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BusinessTypePluginsQueryDTO_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  BusinessTypePluginsQueryDTO
    : public ModelBase
{
public:
    BusinessTypePluginsQueryDTO();
    virtual ~BusinessTypePluginsQueryDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BusinessTypePluginsQueryDTO members

    /// <summary>
    /// **参数解释**： 用于区分插件为流水线可使用/模板可使用。 **约束限制**： 不涉及。 **取值范围**： - pipeline：流水线可使用。 - template：模板可使用。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getUseCondition() const;
    bool useConditionIsSet() const;
    void unsetuseCondition();
    void setUseCondition(const std::string& value);

    /// <summary>
    /// **参数解释**： 用于区分源的代码仓类型codehub/gitlab/github等。 **约束限制**： 不涉及。 **取值范围**： - codehub。 - gitee。 - github。 - gitcode。 - gitlab。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getInputRepoType() const;
    bool inputRepoTypeIsSet() const;
    void unsetinputRepoType();
    void setInputRepoType(const std::string& value);

    /// <summary>
    /// **参数解释**： 用于区分单源/多源的情况。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getInputSourceType() const;
    bool inputSourceTypeIsSet() const;
    void unsetinputSourceType();
    void setInputSourceType(const std::string& value);

    /// <summary>
    /// **参数解释**： 业务类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// **参数解释**： 匹配名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getRegexName() const;
    bool regexNameIsSet() const;
    void unsetregexName();
    void setRegexName(const std::string& value);


protected:
    std::string useCondition_;
    bool useConditionIsSet_;
    std::string inputRepoType_;
    bool inputRepoTypeIsSet_;
    std::string inputSourceType_;
    bool inputSourceTypeIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string regexName_;
    bool regexNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_BusinessTypePluginsQueryDTO_H_
