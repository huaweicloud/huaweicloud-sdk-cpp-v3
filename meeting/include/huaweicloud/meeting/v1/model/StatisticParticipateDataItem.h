
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticParticipateDataItem_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticParticipateDataItem_H_


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
/// 会议与会统计数据的单个时间点数据。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  StatisticParticipateDataItem
    : public ModelBase
{
public:
    StatisticParticipateDataItem();
    virtual ~StatisticParticipateDataItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticParticipateDataItem members

    /// <summary>
    /// 日期/月份。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 与会用户名称。 category &#x3D; user_participate_info时有效。
    /// </summary>

    std::string getConfUserName() const;
    bool confUserNameIsSet() const;
    void unsetconfUserName();
    void setConfUserName(const std::string& value);

    /// <summary>
    /// 与会用户账户。 category &#x3D; user_participate_info时有效。
    /// </summary>

    std::string getConfUserAccount() const;
    bool confUserAccountIsSet() const;
    void unsetconfUserAccount();
    void setConfUserAccount(const std::string& value);

    /// <summary>
    /// 与会用户所属部门。 category &#x3D; user_participate_info时有效。
    /// </summary>

    std::string getConfUserDeptName() const;
    bool confUserDeptNameIsSet() const;
    void unsetconfUserDeptName();
    void setConfUserDeptName(const std::string& value);

    /// <summary>
    /// 用户与会数。 category &#x3D; user_participate_info时有效。
    /// </summary>

    std::string getConfUserCount() const;
    bool confUserCountIsSet() const;
    void unsetconfUserCount();
    void setConfUserCount(const std::string& value);

    /// <summary>
    /// 用户与会时长(秒)。 category &#x3D; user_participate_info时有效。
    /// </summary>

    std::string getConfUserDuration() const;
    bool confUserDurationIsSet() const;
    void unsetconfUserDuration();
    void setConfUserDuration(const std::string& value);

    /// <summary>
    /// 与会硬件终端名称。 category &#x3D; hard_terminal_participate_info时有效。
    /// </summary>

    std::string getConfHardTerminalName() const;
    bool confHardTerminalNameIsSet() const;
    void unsetconfHardTerminalName();
    void setConfHardTerminalName(const std::string& value);

    /// <summary>
    /// 与会硬件终端型号。 category &#x3D; hard_terminal_participate_info时有效。
    /// </summary>

    std::string getConfHardTerminalModel() const;
    bool confHardTerminalModelIsSet() const;
    void unsetconfHardTerminalModel();
    void setConfHardTerminalModel(const std::string& value);

    /// <summary>
    /// 与会硬件终端的用户ID。 category &#x3D; hard_terminal_participate_info时有效。
    /// </summary>

    std::string getConfHardTerminalUserId() const;
    bool confHardTerminalUserIdIsSet() const;
    void unsetconfHardTerminalUserId();
    void setConfHardTerminalUserId(const std::string& value);

    /// <summary>
    /// 硬件终端与会数。 category &#x3D; hard_terminal_participate_info时有效。
    /// </summary>

    std::string getConfHardTerminalCount() const;
    bool confHardTerminalCountIsSet() const;
    void unsetconfHardTerminalCount();
    void setConfHardTerminalCount(const std::string& value);

    /// <summary>
    /// 硬件终端与会时长(秒)。 category &#x3D; hard_terminal_participate_info时有效。
    /// </summary>

    std::string getConfHardTerminalDuration() const;
    bool confHardTerminalDurationIsSet() const;
    void unsetconfHardTerminalDuration();
    void setConfHardTerminalDuration(const std::string& value);

    /// <summary>
    /// 与会设备类型。 category &#x3D; participant_type_info时有效。
    /// </summary>

    std::string getDeviceType() const;
    bool deviceTypeIsSet() const;
    void unsetdeviceType();
    void setDeviceType(const std::string& value);

    /// <summary>
    /// 与会设备版本。 category &#x3D; participant_type_info时有效。
    /// </summary>

    std::string getDeviceVersion() const;
    bool deviceVersionIsSet() const;
    void unsetdeviceVersion();
    void setDeviceVersion(const std::string& value);

    /// <summary>
    /// 设备与会数。 category &#x3D; participant_type_info时有效。
    /// </summary>

    std::string getDeviceAttendanceCount() const;
    bool deviceAttendanceCountIsSet() const;
    void unsetdeviceAttendanceCount();
    void setDeviceAttendanceCount(const std::string& value);


protected:
    std::string time_;
    bool timeIsSet_;
    std::string confUserName_;
    bool confUserNameIsSet_;
    std::string confUserAccount_;
    bool confUserAccountIsSet_;
    std::string confUserDeptName_;
    bool confUserDeptNameIsSet_;
    std::string confUserCount_;
    bool confUserCountIsSet_;
    std::string confUserDuration_;
    bool confUserDurationIsSet_;
    std::string confHardTerminalName_;
    bool confHardTerminalNameIsSet_;
    std::string confHardTerminalModel_;
    bool confHardTerminalModelIsSet_;
    std::string confHardTerminalUserId_;
    bool confHardTerminalUserIdIsSet_;
    std::string confHardTerminalCount_;
    bool confHardTerminalCountIsSet_;
    std::string confHardTerminalDuration_;
    bool confHardTerminalDurationIsSet_;
    std::string deviceType_;
    bool deviceTypeIsSet_;
    std::string deviceVersion_;
    bool deviceVersionIsSet_;
    std::string deviceAttendanceCount_;
    bool deviceAttendanceCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_StatisticParticipateDataItem_H_
