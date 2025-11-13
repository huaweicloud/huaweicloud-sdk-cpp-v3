
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CustomDate_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CustomDate_H_


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
/// 告警规则配置的自定义查询区间。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CustomDate
    : public ModelBase
{
public:
    CustomDate();
    virtual ~CustomDate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomDate members

    /// <summary>
    /// **参数解释：** 查询起始时间相对于告警计划执行时间的偏移量数值。 **约束限制：** 根据start_unit字段的单位将有不同的取值范围，根据单位将start换算为时间不超过1天。 **取值范围：** start_unit取值为second，start取值范围为 1-86400； start_unit取值为minute，start取值范围为 1-1440； start_unit取值为hour，start取值范围为 1-24。 **默认取值：** -无。
    /// </summary>

    int32_t getStart() const;
    bool startIsSet() const;
    void unsetstart();
    void setStart(int32_t value);

    /// <summary>
    /// **参数解释：** 查询起始时间相对于告警计划执行时间的偏移量单位。 **约束限制：** 整点时间即is_time_range_relative为false时start_unit不支持second。 **取值范围：** - hour - minute - second **默认取值：** minute
    /// </summary>

    std::string getStartUnit() const;
    bool startUnitIsSet() const;
    void unsetstartUnit();
    void setStartUnit(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询结束时间相对于告警计划执行时间的偏移量数值。 **约束限制：** 根据end_unit字段的单位将有不同的取值范围，根据单位将end换算为时间不超过1天； **取值范围：** end_unit取值为second，endt取值范围为 0-86399； end_unit取值为minute，end取值范围为 0-1439； end_unit取值为hour，end取值范围为 0-23。 **默认取值：** -无。
    /// </summary>

    int32_t getEnd() const;
    bool endIsSet() const;
    void unsetend();
    void setEnd(int32_t value);

    /// <summary>
    /// **参数解释：** 查询结束时间相对于告警计划执行时间的偏移量单位。 **约束限制：** 整点时间即is_time_range_relative为false时end_unit不支持second。 **取值范围：** - hour - minute - second **默认取值：** minute
    /// </summary>

    std::string getEndUnit() const;
    bool endUnitIsSet() const;
    void unsetendUnit();
    void setEndUnit(const std::string& value);


protected:
    int32_t start_;
    bool startIsSet_;
    std::string startUnit_;
    bool startUnitIsSet_;
    int32_t end_;
    bool endIsSet_;
    std::string endUnit_;
    bool endUnitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CustomDate_H_
