
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenNotifySetting_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenNotifySetting_H_


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
/// 网络研讨会通知配置。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  OpenNotifySetting
    : public ModelBase
{
public:
    OpenNotifySetting();
    virtual ~OpenNotifySetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenNotifySetting members

    /// <summary>
    /// 发送邮件日历是否开启。 * Y：开启 * N： 不开启 
    /// </summary>

    std::string getEnableCalendar() const;
    bool enableCalendarIsSet() const;
    void unsetenableCalendar();
    void setEnableCalendar(const std::string& value);

    /// <summary>
    /// 发送短信通知是否开启。 * Y：开启 * N： 不开启 
    /// </summary>

    std::string getEnableSms() const;
    bool enableSmsIsSet() const;
    void unsetenableSms();
    void setEnableSms(const std::string& value);

    /// <summary>
    /// 发送邮件是否开启。 * Y：开启 * N： 不开启 
    /// </summary>

    std::string getEnableEmail() const;
    bool enableEmailIsSet() const;
    void unsetenableEmail();
    void setEnableEmail(const std::string& value);


protected:
    std::string enableCalendar_;
    bool enableCalendarIsSet_;
    std::string enableSms_;
    bool enableSmsIsSet_;
    std::string enableEmail_;
    bool enableEmailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_OpenNotifySetting_H_
