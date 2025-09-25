
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleProperty_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleProperty_H_


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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RuleProperty
    : public ModelBase
{
public:
    RuleProperty();
    virtual ~RuleProperty();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleProperty members

    /// <summary>
    /// **参数解释**： 属性键。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 展示名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 比较运算符。 **约束限制**： 不涉及。 **取值范围**： - ‘&#x3D;’：等于。 - ‘&gt;’：大于。 - ‘&lt;’：小于。 - ‘&gt;&#x3D;’：大于等于。 - ‘&lt;&#x3D;’：小于等于。 - ‘!&#x3D;’：不等于。 - ‘in’：包含其中。 - ‘not in’：不被包含。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// **参数解释**： 属性值。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 数据类型。 **约束限制**： 不涉及。 **取值范围**： - float：数值型。 - string：字符型。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getValueType() const;
    bool valueTypeIsSet() const;
    void unsetvalueType();
    void setValueType(const std::string& value);

    /// <summary>
    /// **参数解释**： 属性是否启用。 **约束限制**： 不涉及。 **取值范围**： - true：启用。 - false：未启用。 **默认取值**： false。 
    /// </summary>

    bool isIsValid() const;
    bool isValidIsSet() const;
    void unsetisValid();
    void setIsValid(bool value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string valueType_;
    bool valueTypeIsSet_;
    bool isValid_;
    bool isValidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RuleProperty_H_
