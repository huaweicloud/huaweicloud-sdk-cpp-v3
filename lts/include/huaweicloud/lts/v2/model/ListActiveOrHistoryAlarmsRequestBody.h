
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListActiveOrHistoryAlarmsRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListActiveOrHistoryAlarmsRequestBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/Sort.h>
#include <vector>

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
class HUAWEICLOUD_LTS_V2_EXPORT  ListActiveOrHistoryAlarmsRequestBody
    : public ModelBase
{
public:
    ListActiveOrHistoryAlarmsRequestBody();
    virtual ~ListActiveOrHistoryAlarmsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListActiveOrHistoryAlarmsRequestBody members

    /// <summary>
    /// 关键字检索条件
    /// </summary>

    int32_t getStep() const;
    bool stepIsSet() const;
    void unsetstep();
    void setStep(int32_t value);

    /// <summary>
    /// 是否自定义查询时间段
    /// </summary>

    bool isWhetherCustomField() const;
    bool whetherCustomFieldIsSet() const;
    void unsetwhetherCustomField();
    void setWhetherCustomField(bool value);

    /// <summary>
    /// 自定义时间段开始时间(时间戳)
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 自定义时间段结束时间(时间戳)
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 非自定义时间段时间范围(单位为分钟)
    /// </summary>

    std::string getTimeRange() const;
    bool timeRangeIsSet() const;
    void unsettimeRange();
    void setTimeRange(const std::string& value);

    /// <summary>
    /// 关键字检索条件
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// 告警级别(\&quot;Critical\&quot;,\&quot;Major\&quot;,\&quot;Minor\&quot;,\&quot;Info\&quot;)
    /// </summary>

    std::vector<std::string>& getAlarmLevelIds();
    bool alarmLevelIdsIsSet() const;
    void unsetalarmLevelIds();
    void setAlarmLevelIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Sort getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const Sort& value);


protected:
    int32_t step_;
    bool stepIsSet_;
    bool whetherCustomField_;
    bool whetherCustomFieldIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string timeRange_;
    bool timeRangeIsSet_;
    std::string search_;
    bool searchIsSet_;
    std::vector<std::string> alarmLevelIds_;
    bool alarmLevelIdsIsSet_;
    Sort sort_;
    bool sortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListActiveOrHistoryAlarmsRequestBody_H_
