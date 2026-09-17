
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_QueryVariableGroupDetailResp_variables_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_QueryVariableGroupDetailResp_variables_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  QueryVariableGroupDetailResp_variables
    : public ModelBase
{
public:
    QueryVariableGroupDetailResp_variables();
    virtual ~QueryVariableGroupDetailResp_variables();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryVariableGroupDetailResp_variables members

    /// <summary>
    /// **参数解释**： 参数名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数序号。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// **参数解释**： 参数类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 参数默认值。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否私密。 **取值范围**： - true：是私密参数。 - false：不是私密参数。 
    /// </summary>

    bool isIsSecret() const;
    bool isSecretIsSet() const;
    void unsetisSecret();
    void setIsSecret(bool value);

    /// <summary>
    /// **参数解释**： 描述。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_QueryVariableGroupDetailResp_variables_H_
