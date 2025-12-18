
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosDataElement_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosDataElement_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 含阈值告警的QoS数据元素，包括时间，QoS取值，告警状态，产生告警时的阈值。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QosDataElement
    : public ModelBase
{
public:
    QosDataElement();
    virtual ~QosDataElement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QosDataElement members

    /// <summary>
    /// QoS时间点, UTC时间，格式：yyyy-MM-ddTHH:mm:ss.SSSZ。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// QoS值。
    /// </summary>

    int32_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int32_t value);

    /// <summary>
    /// 该时间点是否有阈值告警。 * true: 阈值告警 * false: 无阈值告警 
    /// </summary>

    bool isAlarm() const;
    bool alarmIsSet() const;
    void unsetalarm();
    void setAlarm(bool value);

    /// <summary>
    /// 该时间点的阈值。
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);


protected:
    std::string time_;
    bool timeIsSet_;
    int32_t value_;
    bool valueIsSet_;
    bool alarm_;
    bool alarmIsSet_;
    int32_t threshold_;
    bool thresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosDataElement_H_
