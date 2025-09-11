
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_MultiQueryConditionOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_MultiQueryConditionOption_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  MultiQueryConditionOption
    : public ModelBase
{
public:
    MultiQueryConditionOption();
    virtual ~MultiQueryConditionOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MultiQueryConditionOption members

    /// <summary>
    /// **参数解释**： 查询字段名称。 **约束限制**： 只支持字符串\&quot;query\&quot;。 **取值范围**： 由英文字母（大小写）、数字或下划线组成，长度为 1 至 128 个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**: 组合条件类型。 **约束限制**: 不涉及。 **取值范围**: 仅限字符串：\&quot;AND\&quot;、\&quot;OR\&quot;。 **默认取值**: 不涉及。
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// **参数解释**: 多个过滤检索条件内容集合。 **约束限制**: 只支持为true进行模糊查询。 **取值范围**: - true：模糊查询。 - false：精确匹配。  **默认取值**: true 
    /// </summary>

    bool isIsFuzzy() const;
    bool isFuzzyIsSet() const;
    void unsetisFuzzy();
    void setIsFuzzy(bool value);

    /// <summary>
    /// **参数解释**: 多个过滤检索条件内容集合。由 1 至 5 个字符串组成的列表。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string condition_;
    bool conditionIsSet_;
    bool isFuzzy_;
    bool isFuzzyIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_MultiQueryConditionOption_H_
