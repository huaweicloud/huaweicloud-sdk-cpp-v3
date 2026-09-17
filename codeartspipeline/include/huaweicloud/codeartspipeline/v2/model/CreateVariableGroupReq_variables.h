
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateVariableGroupReq_variables_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateVariableGroupReq_variables_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  CreateVariableGroupReq_variables
    : public ModelBase
{
public:
    CreateVariableGroupReq_variables();
    virtual ~CreateVariableGroupReq_variables();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVariableGroupReq_variables members

    /// <summary>
    /// **参数解释**： 参数序号。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// **参数解释**： 参数名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数默认值。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数描述。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否私密参数。 **约束限制**： 不涉及。 **取值范围**： - true：是私密参数。 - false：不是私密参数。 **默认取值**： 不涉及。 
    /// </summary>

    bool isIsSecret() const;
    bool isSecretIsSet() const;
    void unsetisSecret();
    void setIsSecret(bool value);


protected:
    int32_t sequence_;
    bool sequenceIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool isSecret_;
    bool isSecretIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_CreateVariableGroupReq_variables_H_
