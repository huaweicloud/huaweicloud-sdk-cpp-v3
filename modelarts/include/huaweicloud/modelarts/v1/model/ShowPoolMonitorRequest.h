
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolMonitorRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolMonitorRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowPoolMonitorRequest
    : public ModelBase
{
public:
    ShowPoolMonitorRequest();
    virtual ~ShowPoolMonitorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPoolMonitorRequest members

    /// <summary>
    /// **参数解释**：资源池的ID，取值自资源池详情的metadata.name字段。 **约束限制**：不涉及。 **取值范围**：只能以小写字母开头，数字、中划线组成，不能以中划线结尾，且长度为[36-63]个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// **参数解释**：查询资源池监控信息的时间范围，格式为startTimeInMillis.endTimeInMillis.durationInMinutes。其中，startTimeInMillis表示查询的开始时间，格式为UTC毫秒，如果指定为-1，服务端将按(endTimeInMillis - durationInMinutes * 60 * 1000)计算开始时间。endTimeInMillis表示查询的结束时间，格式为UTC毫秒，如果指定为-1，服务端将按(startTimeInMillis + durationInMinutes * 60 * 1000)计算结束时间，如果计算出的结束时间大于当前系统时间，则使用当前系统时间。durationInMinutes表示查询时间的跨度分钟数。 取值范围大于0并且小于等于(endTimeInMillis - startTimeInMillis) / (60 * 1000) - 1。当开始时间与结束时间都设置为-1时，系统会将结束时间设置为当前时间UTC毫秒值，并按(endTimeInMillis - durationInMinutes * 60 * 1000)计算开始时间。如：-1.-1.60(表示最近60分钟)。 **约束限制**：单次请求中，查询时长与周期需要满足以下条件: durationInMinutes * 60 / period &lt;&#x3D; 1440。 **取值范围**：不涉及。 **默认取值**：-1.-1.60。  查询时间范围，默认值“-1.-1.60”。格式为startTimeInMillis.endTimeInMillis.durationInMinutes，参数解释： - startTimeInMillis: 查询的开始时间，格式为UTC毫秒，如果指定为-1，服务端将按(endTimeInMillis - durationInMinutes * 60 * 1000)计算开始时间 - endTimeInMillis: 查询的结束时间，格式为UTC毫秒，如果指定为-1，服务端将按(startTimeInMillis + durationInMinutes * 60 * 1000)计算结束时间，如果计算出的结束时间大于当前系统时间，则使用当前系统时间 - durationInMinutes：查询时间的跨度分钟数。 取值范围大于0并且小于等于(endTimeInMillis - startTimeInMillis) / (60 * 1000) - 1 当开始时间与结束时间都设置为-1时，系统会将结束时间设置为当前时间UTC毫秒值，并按(endTimeInMillis - durationInMinutes * 60 * 1000)计算开始时间。如：-1.-1.60(表示最近60分钟)约束：单次请求中，查询时长与周期需要满足以下条件: durationInMinutes * 60 / period &lt;&#x3D; 1440。
    /// </summary>

    std::string getTimeRange() const;
    bool timeRangeIsSet() const;
    void unsettimeRange();
    void setTimeRange(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池监控信息在指定时间粒度下的统计方式。 **约束限制**：不涉及。 **取值范围**：可选值如下： - maximum：最大值统计，默认值。 - minimum：最小值统计。 - sum：求和统计。 - average：平均值统计。 - sampleCount：采样统计。 **默认取值**：maximum。
    /// </summary>

    std::string getStatistics() const;
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const std::string& value);

    /// <summary>
    /// **参数解释**：查询资源池监控信息的时间粒度，以秒为单位。 **约束限制**：不涉及。 **取值范围**：可选值如下： - 60：粒度为1分钟，默认值。 - 300：粒度为5分钟。 - 900：粒度为15分钟。 - 3600：粒度为1小时。 **默认取值**：60。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;
    std::string timeRange_;
    bool timeRangeIsSet_;
    std::string statistics_;
    bool statisticsIsSet_;
    std::string period_;
    bool periodIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPoolMonitorRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPoolMonitorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowPoolMonitorRequest_H_
