
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AlarmCondition_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AlarmCondition_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AlarmCondition
    : public ModelBase
{
public:
    AlarmCondition();
    virtual ~AlarmCondition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlarmCondition members

    /// <summary>
    /// **参数解释：** 触发告警的条件表达式。 **约束限制：** - 不支持纯数字。 - 不支持以数字开头的。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getConditionExpression() const;
    bool conditionExpressionIsSet() const;
    void unsetconditionExpression();
    void setConditionExpression(const std::string& value);

    /// <summary>
    /// **参数解释：** 触发的告警级别。 **约束限制：** 不支持纯数字，不支持以数字开头的。 **取值范围：** - Info：提示 - Minor：次要 - Major：重要 - Critical：紧急 **默认取值：** 不涉及。
    /// </summary>

    std::string getAlarmLevel() const;
    bool alarmLevelIsSet() const;
    void unsetalarmLevel();
    void setAlarmLevel(const std::string& value);


protected:
    std::string conditionExpression_;
    bool conditionExpressionIsSet_;
    std::string alarmLevel_;
    bool alarmLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AlarmCondition_H_
