
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CycleParams_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CycleParams_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 周期会议的参数。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CycleParams
    : public ModelBase
{
public:
    CycleParams();
    virtual ~CycleParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CycleParams members

    /// <summary>
    /// 周期会议的开始日期，格式：YYYY-MM-DD。 开始日期不能早于当前日期。 &gt; 日期是timeZoneID指定的时区的日期，非UTC时间的日期。
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 周期会议的结束日期，格式：YYYY-MM-DD。 开始日期和结束日期间的时间间隔最长不能超过1年。开始日期和结束日期之间最多允许50个子会议，若超过50个子会议，会自动调整结束日期。 &gt; 日期是timeZoneID指定的时区的日期，非UTC时间的日期。
    /// </summary>

    std::string getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const std::string& value);

    /// <summary>
    /// 周期类型。 - Day: 天 - Week: 星期 - Month: 月
    /// </summary>

    std::string getCycle() const;
    bool cycleIsSet() const;
    void unsetcycle();
    void setCycle(const std::string& value);

    /// <summary>
    /// 子会议间隔。 - cycle选择了Day，表示每几天召开一次，取值范围[1,15] - cycle选择了Week，表示每几周召开一次，取值范围[1,5] - cycle选择了Month，Interval表示隔几月，取值范围[1,3]
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// 周期内的会议召开点。仅当按周和月时有效。 - cycle选择了Week，point中填入了两个元素1和3，则表示每个周一和周三召开会议，0表示周日 - cycle选择了Month，point中填入了12和20则表示每个月的12号和20号召开会议，取值范围为[1,31]，若当月没有该值，则为月末
    /// </summary>

    std::vector<int32_t>& getPoint();
    bool pointIsSet() const;
    void unsetpoint();
    void setPoint(std::vector<int32_t> value);

    /// <summary>
    /// 提前通知天数。所有与会者在每个子会议开始前N天收到会议通知。取值范围[0,30]。 默认值是1。
    /// </summary>

    int32_t getPreRemindDays() const;
    bool preRemindDaysIsSet() const;
    void unsetpreRemindDays();
    void setPreRemindDays(int32_t value);


protected:
    std::string startDate_;
    bool startDateIsSet_;
    std::string endDate_;
    bool endDateIsSet_;
    std::string cycle_;
    bool cycleIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    std::vector<int32_t> point_;
    bool pointIsSet_;
    int32_t preRemindDays_;
    bool preRemindDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CycleParams_H_
