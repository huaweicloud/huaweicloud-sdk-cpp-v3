
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsAlarmConditions_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsAlarmConditions_H_


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
class HUAWEICLOUD_LTS_V2_EXPORT  KeywordsAlarmConditions
    : public ModelBase
{
public:
    KeywordsAlarmConditions();
    virtual ~KeywordsAlarmConditions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeywordsAlarmConditions members

    /// <summary>
    /// **参数解释：** 触发条件，即满足该条件时，会触发告警。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// **参数解释：** 匹配条数。当关键词搜索结果的日志条数达到设定的条数时，会触发告警。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(int32_t value);

    /// <summary>
    /// **参数解释：** 告警级别。 **约束限制：** 不涉及。 **取值范围：** -   Info：提示 -   Minor：次要 -   Major：重要 -   Critical：紧急 **默认取值：** 不涉及。
    /// </summary>

    std::string getAlarmLevel() const;
    bool alarmLevelIsSet() const;
    void unsetalarmLevel();
    void setAlarmLevel(const std::string& value);


protected:
    std::string condition_;
    bool conditionIsSet_;
    int32_t number_;
    bool numberIsSet_;
    std::string alarmLevel_;
    bool alarmLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsAlarmConditions_H_
