
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSelectorRequirement_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSelectorRequirement_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeSelectorRequirement
    : public ModelBase
{
public:
    NodeSelectorRequirement();
    virtual ~NodeSelectorRequirement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSelectorRequirement members

    /// <summary>
    /// **参数解释**：选择器应用的标签键。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**：表示键与一组值之间的关系。  **约束限制**：有效的运算符包括 In、NotIn、Exists、DoesNotExist、Gt 和 Lt。 **取值范围**： - In：表示键的值必须在给定的值列表中。例如，如果键是 color，值列表是 [\&quot;red\&quot;, \&quot;blue\&quot;]，那么 color In [\&quot;red\&quot;, \&quot;blue\&quot;] 表示 color 的值必须是 red 或 blue。 - NotIn：表示键的值不能在给定的值列表中。例如，color NotIn [\&quot;red\&quot;, \&quot;blue\&quot;] 表示 color 的值不能是 red 或 blue。 - Exists：表示键必须存在，但对其值没有特定要求。例如，color Exists 表示必须存在 color 这个键，无论其值是什么。 - DoesNotExist：表示键不能存在。例如，color DoesNotExist 表示不能存在 color 这个键。 - Gt：表示键的值必须大于给定的值。例如，如果键是 age，age Gt 18 表示 age 的值必须大于 18。 - Lt：表示键的值必须小于给定的值。例如，age Lt 18 表示 age 的值必须小于 18。 **默认取值**：不涉及。
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// **参数解释**：一个字符串值数组。 **约束限制**：如果操作符是“In”或“NotIn”，则该值数组不能为空。如果操作符是“Exists”或“DoesNotExist”，则该值数组必须为空。如果操作符是“Gt”或“Lt”，则该值数组必须包含一个元素，该元素将被解释为整数。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeSelectorRequirement_H_
