
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestConfConfigDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestConfConfigDTO_H_


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
/// 会议其他配置信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestConfConfigDTO
    : public ModelBase
{
public:
    RestConfConfigDTO();
    virtual ~RestConfConfigDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestConfConfigDTO members

    /// <summary>
    /// 是否需要发送会议邮件通知。默认值由企业级配置决定。 - true: 需要 - false: 不需要
    /// </summary>

    bool isIsSendNotify() const;
    bool isSendNotifyIsSet() const;
    void unsetisSendNotify();
    void setIsSendNotify(bool value);

    /// <summary>
    /// 是否需要发送会议短信通知。默认值由企业级配置决定。 - true: 需要 - false: 不需要 &gt; 只有正式商用企业才有发送会议短信通知的权限，免费企业即使isSendSms设置成true也不会发送会议短信通知。
    /// </summary>

    bool isIsSendSms() const;
    bool isSendSmsIsSet() const;
    void unsetisSendSms();
    void setIsSendSms(bool value);

    /// <summary>
    /// 是否需要发送会议邮件日历通知。默认值由企业级配置决定。 - true: 需要 - false: 不需要
    /// </summary>

    bool isIsSendCalendar() const;
    bool isSendCalendarIsSet() const;
    void unsetisSendCalendar();
    void setIsSendCalendar(bool value);

    /// <summary>
    /// 来宾入会,软终端是否自动静音。默认值由企业级配置决定。 - true: 自动静音 - false: 不自动静音
    /// </summary>

    bool isIsAutoMute() const;
    bool isAutoMuteIsSet() const;
    void unsetisAutoMute();
    void setIsAutoMute(bool value);

    /// <summary>
    /// 来宾入会,硬终端是否自动静音。默认值由企业级配置决定。 - true: 自动静音 - false: 不自动静音
    /// </summary>

    bool isIsHardTerminalAutoMute() const;
    bool isHardTerminalAutoMuteIsSet() const;
    void unsetisHardTerminalAutoMute();
    void setIsHardTerminalAutoMute(bool value);

    /// <summary>
    /// 是否来宾免密。 - true: 免密 - false: 需要密码 &gt; 仅随机会议ID的会议生效。
    /// </summary>

    bool isIsGuestFreePwd() const;
    bool isGuestFreePwdIsSet() const;
    void unsetisGuestFreePwd();
    void setIsGuestFreePwd(bool value);

    /// <summary>
    /// 允许加入会议的范围。 - 0: 所有用户 - 2: 企业内用户 - 3: 被邀请用户
    /// </summary>

    int32_t getCallInRestriction() const;
    bool callInRestrictionIsSet() const;
    void unsetcallInRestriction();
    void setCallInRestriction(int32_t value);

    /// <summary>
    /// 是否允许来宾启动会议。 - true: 允许来宾启动会议 - false: 禁止来宾启动会议 &gt; 仅随机会议ID的会议生效。
    /// </summary>

    bool isAllowGuestStartConf() const;
    bool allowGuestStartConfIsSet() const;
    void unsetallowGuestStartConf();
    void setAllowGuestStartConf(bool value);

    /// <summary>
    /// 来宾密码（4-16位长度的纯数字）。
    /// </summary>

    std::string getGuestPwd() const;
    bool guestPwdIsSet() const;
    void unsetguestPwd();
    void setGuestPwd(const std::string& value);

    /// <summary>
    /// 云会议室的会议ID模式。 * 0：固定会议ID * 1：随机会议ID
    /// </summary>

    int32_t getVmrIDType() const;
    bool vmrIDTypeIsSet() const;
    void unsetvmrIDType();
    void setVmrIDType(int32_t value);

    /// <summary>
    /// 自动延长会议时长（取值范围0-60）。 * 0：表示会议到点自动结束，不延长会议 * 其他：表示自动延长的时长 &gt; * 自动结束会议是按照会议时长计算。比如预定的会议是9:00开始11:00结束，会议时长2个小时，如果与会者8:00就加入会议了，那会议在10:00就会自动结束 &gt; * 设置成其他值时，只要会中还有与会者，会议自动多次延长
    /// </summary>

    int32_t getProlongLength() const;
    bool prolongLengthIsSet() const;
    void unsetprolongLength();
    void setProlongLength(int32_t value);

    /// <summary>
    /// 开启或者关闭等候室。 * true：开启 * false：不开启
    /// </summary>

    bool isEnableWaitingRoom() const;
    bool enableWaitingRoomIsSet() const;
    void unsetenableWaitingRoom();
    void setEnableWaitingRoom(bool value);

    /// <summary>
    /// 主持人入会是否开启摄像头。 * true：开启 * false：不开启
    /// </summary>

    bool isIsHostCameraOn() const;
    bool isHostCameraOnIsSet() const;
    void unsetisHostCameraOn();
    void setIsHostCameraOn(bool value);

    /// <summary>
    /// 来宾入会是否开启摄像头。 * true：开启 * false：不开启
    /// </summary>

    bool isIsGuestCameraOn() const;
    bool isGuestCameraOnIsSet() const;
    void unsetisGuestCameraOn();
    void setIsGuestCameraOn(bool value);


protected:
    bool isSendNotify_;
    bool isSendNotifyIsSet_;
    bool isSendSms_;
    bool isSendSmsIsSet_;
    bool isSendCalendar_;
    bool isSendCalendarIsSet_;
    bool isAutoMute_;
    bool isAutoMuteIsSet_;
    bool isHardTerminalAutoMute_;
    bool isHardTerminalAutoMuteIsSet_;
    bool isGuestFreePwd_;
    bool isGuestFreePwdIsSet_;
    int32_t callInRestriction_;
    bool callInRestrictionIsSet_;
    bool allowGuestStartConf_;
    bool allowGuestStartConfIsSet_;
    std::string guestPwd_;
    bool guestPwdIsSet_;
    int32_t vmrIDType_;
    bool vmrIDTypeIsSet_;
    int32_t prolongLength_;
    bool prolongLengthIsSet_;
    bool enableWaitingRoom_;
    bool enableWaitingRoomIsSet_;
    bool isHostCameraOn_;
    bool isHostCameraOnIsSet_;
    bool isGuestCameraOn_;
    bool isGuestCameraOnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestConfConfigDTO_H_
