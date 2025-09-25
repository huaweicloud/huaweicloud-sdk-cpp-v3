
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_NewExtension_inputs_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_NewExtension_inputs_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/ExtensionValidation.h>
#include <huaweicloud/codeartspipeline/v2/model/ExtensionExtendProp.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  NewExtension_inputs
    : public ModelBase
{
public:
    NewExtension_inputs();
    virtual ~NewExtension_inputs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NewExtension_inputs members

    /// <summary>
    /// **参数解释**： 名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 类型。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 标签。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    /// **参数解释**： 说明。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 默认值。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否必填。 **取值范围**： - true：必填。 - false：非必填。 
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

    /// <summary>
    /// 
    /// </summary>

    ExtensionExtendProp getExtendProp() const;
    bool extendPropIsSet() const;
    void unsetextendProp();
    void setExtendProp(const ExtensionExtendProp& value);

    /// <summary>
    /// 
    /// </summary>

    ExtensionValidation getValidation() const;
    bool validationIsSet() const;
    void unsetvalidation();
    void setValidation(const ExtensionValidation& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string label_;
    bool labelIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    bool required_;
    bool requiredIsSet_;
    ExtensionExtendProp extendProp_;
    bool extendPropIsSet_;
    ExtensionValidation validation_;
    bool validationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_NewExtension_inputs_H_
