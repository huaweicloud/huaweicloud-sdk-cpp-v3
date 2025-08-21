
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_Filter_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_Filter_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  Filter
    : public ModelBase
{
public:
    Filter();
    virtual ~Filter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Filter members

    /// <summary>
    /// **参数解释**： 日志字段，如src_ip **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getField() const;
    bool fieldIsSet() const;
    void unsetfield();
    void setField(const std::string& value);

    /// <summary>
    /// **参数解释**： 值 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 操作符 **约束限制**： 不涉及 **取值范围**： equal 等于 not_equal 不等于 contain 包含 starts_with 以开始 **默认取值**： 不涉及
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);


protected:
    std::string field_;
    bool fieldIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;
    std::string operator_;
    bool operatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_Filter_H_
