
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosParticipantInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosParticipantInfo_H_


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
/// 会议与会者QoS告警信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QosParticipantInfo
    : public ModelBase
{
public:
    QosParticipantInfo();
    virtual ~QosParticipantInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QosParticipantInfo members

    /// <summary>
    /// 会议的UUID。
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConferenceID() const;
    bool conferenceIDIsSet() const;
    void unsetconferenceID();
    void setConferenceID(const std::string& value);

    /// <summary>
    /// 与会者标识。
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);

    /// <summary>
    /// 用户UUID。
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// 与会者的名称。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 入会终端类型。 - PC: PC机 - MOBILE: 手机 - PAD：PAD设备 - MAC：MAC设备 - WEB：WEB方式入会，如通过WebRTC入会 - ROOM: 会议室 - 硬件终端：显示具体的硬件设备类型，如TE50, HUAWEI IDEAHUB, CISCO等 - OTHER: 其他设备
    /// </summary>

    std::string getTerminalType() const;
    bool terminalTypeIsSet() const;
    void unsetterminalType();
    void setTerminalType(const std::string& value);

    /// <summary>
    /// 与会者角色。 - host：主持人 - guest：来宾 - audience：观众
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 与会者的IP地址。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 国家。
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// 省市（仅限中国）。
    /// </summary>

    std::string getProvince() const;
    bool provinceIsSet() const;
    void unsetprovince();
    void setProvince(const std::string& value);

    /// <summary>
    /// 城市（仅限中国）。
    /// </summary>

    std::string getCity() const;
    bool cityIsSet() const;
    void unsetcity();
    void setCity(const std::string& value);

    /// <summary>
    /// 华为云会议APP版本。
    /// </summary>

    std::string getAppVersion() const;
    bool appVersionIsSet() const;
    void unsetappVersion();
    void setAppVersion(const std::string& value);

    /// <summary>
    /// 入会时间(UTC时间), Unix时间戳（单位毫秒）。
    /// </summary>

    int64_t getJoinTime() const;
    bool joinTimeIsSet() const;
    void unsetjoinTime();
    void setJoinTime(int64_t value);

    /// <summary>
    /// 离会时间(UTC时间), Unix时间戳（单位毫秒）。 &gt; * 与会者未离会：leftTime &#x3D; 0 &gt; * 与会者已离会：leftTime &#x3D; 实际离会时间
    /// </summary>

    int64_t getLeftTime() const;
    bool leftTimeIsSet() const;
    void unsetleftTime();
    void setLeftTime(int64_t value);

    /// <summary>
    /// 终端操作系统信息。
    /// </summary>

    std::string getSystemInfo() const;
    bool systemInfoIsSet() const;
    void unsetsystemInfo();
    void setSystemInfo(const std::string& value);

    /// <summary>
    /// 网络类型。
    /// </summary>

    std::string getNetworkType() const;
    bool networkTypeIsSet() const;
    void unsetnetworkType();
    void setNetworkType(const std::string& value);

    /// <summary>
    /// 总体告警。 * YES：音频（发送/接收），视频（发送/接收），屏幕共享（发送/接收），CPU任一项产生告警，总体告警状态即为 YES * NO：无告警
    /// </summary>

    std::string getAlarm() const;
    bool alarmIsSet() const;
    void unsetalarm();
    void setAlarm(const std::string& value);

    /// <summary>
    /// 音频发送告警。 * YES ：发送音频的抖动，时延，丢包率任一项产生阈值告警，则音频发送告警状态为YES * NO：发送音频无告警
    /// </summary>

    std::string getAudioAlarmSend() const;
    bool audioAlarmSendIsSet() const;
    void unsetaudioAlarmSend();
    void setAudioAlarmSend(const std::string& value);

    /// <summary>
    /// 视频发送告警。 * YES ：发送视频的抖动，时延，丢包率任一项产生阈值告警，则视频发送告警状态为YES * NO：发送视频无告警
    /// </summary>

    std::string getVideoAlarmSend() const;
    bool videoAlarmSendIsSet() const;
    void unsetvideoAlarmSend();
    void setVideoAlarmSend(const std::string& value);

    /// <summary>
    /// 屏幕共享发送告警。 * YES：发送屏幕共享的抖动，时延，丢包率任一项产生阈值告警，则屏幕共享发送告警状态为YES * NO：发送屏幕共享无告警
    /// </summary>

    std::string getScreenAlarmSend() const;
    bool screenAlarmSendIsSet() const;
    void unsetscreenAlarmSend();
    void setScreenAlarmSend(const std::string& value);

    /// <summary>
    /// 音频接收告警。 * YES：接收音频的抖动，时延，丢包率任一项产生阈值告警，则音频接收告警状态为YES * NO：接收音频无告警
    /// </summary>

    std::string getAudioAlarmRec() const;
    bool audioAlarmRecIsSet() const;
    void unsetaudioAlarmRec();
    void setAudioAlarmRec(const std::string& value);

    /// <summary>
    /// 视频接收告警。 * YES：接收视频的抖动，时延，丢包率任一项产生阈值告警，则视频接收告警状态为YES * NO：接收视频无告警
    /// </summary>

    std::string getVideoAlarmRec() const;
    bool videoAlarmRecIsSet() const;
    void unsetvideoAlarmRec();
    void setVideoAlarmRec(const std::string& value);

    /// <summary>
    /// 屏幕共享接收告警。 * YES：接收屏幕共享的抖动，时延，丢包率任一项产生阈值告警，则屏幕共享接收告警状态为YES * NO：接收屏幕共享无告警
    /// </summary>

    std::string getScreenAlarmRec() const;
    bool screenAlarmRecIsSet() const;
    void unsetscreenAlarmRec();
    void setScreenAlarmRec(const std::string& value);

    /// <summary>
    /// CPU告警。 * YES：端侧的APP最大CPU使用率或系统最大CPU使用率任一项产生阈值告警，则CPU告警状态为YES * NO：CPU无告警
    /// </summary>

    std::string getCpuAlarm() const;
    bool cpuAlarmIsSet() const;
    void unsetcpuAlarm();
    void setCpuAlarm(const std::string& value);

    /// <summary>
    /// 麦克风。
    /// </summary>

    std::string getMicrophoneInfo() const;
    bool microphoneInfoIsSet() const;
    void unsetmicrophoneInfo();
    void setMicrophoneInfo(const std::string& value);

    /// <summary>
    /// 扬声器。
    /// </summary>

    std::string getSpeakerInfo() const;
    bool speakerInfoIsSet() const;
    void unsetspeakerInfo();
    void setSpeakerInfo(const std::string& value);

    /// <summary>
    /// 摄像头。
    /// </summary>

    std::string getCameraInfo() const;
    bool cameraInfoIsSet() const;
    void unsetcameraInfo();
    void setCameraInfo(const std::string& value);

    /// <summary>
    /// 数据中心。
    /// </summary>

    std::string getDataCenter() const;
    bool dataCenterIsSet() const;
    void unsetdataCenter();
    void setDataCenter(const std::string& value);

    /// <summary>
    /// 离会原因。此字段仅标识离会原因，不做为是否已离会的判断依据。正在与会人员的离会原因初始值 &#x3D; 0。 * 0：正常离会 * 1：网络异常离会
    /// </summary>

    int32_t getLeftReason() const;
    bool leftReasonIsSet() const;
    void unsetleftReason();
    void setLeftReason(int32_t value);

    /// <summary>
    /// 与会者是否存在QoS数据。 * true：存在QoS数据 * false：不存在QoS数据
    /// </summary>

    bool isExistQos() const;
    bool existQosIsSet() const;
    void unsetexistQos();
    void setExistQos(bool value);


protected:
    std::string confUUID_;
    bool confUUIDIsSet_;
    std::string conferenceID_;
    bool conferenceIDIsSet_;
    std::string participantID_;
    bool participantIDIsSet_;
    std::string userUUID_;
    bool userUUIDIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string terminalType_;
    bool terminalTypeIsSet_;
    std::string role_;
    bool roleIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string province_;
    bool provinceIsSet_;
    std::string city_;
    bool cityIsSet_;
    std::string appVersion_;
    bool appVersionIsSet_;
    int64_t joinTime_;
    bool joinTimeIsSet_;
    int64_t leftTime_;
    bool leftTimeIsSet_;
    std::string systemInfo_;
    bool systemInfoIsSet_;
    std::string networkType_;
    bool networkTypeIsSet_;
    std::string alarm_;
    bool alarmIsSet_;
    std::string audioAlarmSend_;
    bool audioAlarmSendIsSet_;
    std::string videoAlarmSend_;
    bool videoAlarmSendIsSet_;
    std::string screenAlarmSend_;
    bool screenAlarmSendIsSet_;
    std::string audioAlarmRec_;
    bool audioAlarmRecIsSet_;
    std::string videoAlarmRec_;
    bool videoAlarmRecIsSet_;
    std::string screenAlarmRec_;
    bool screenAlarmRecIsSet_;
    std::string cpuAlarm_;
    bool cpuAlarmIsSet_;
    std::string microphoneInfo_;
    bool microphoneInfoIsSet_;
    std::string speakerInfo_;
    bool speakerInfoIsSet_;
    std::string cameraInfo_;
    bool cameraInfoIsSet_;
    std::string dataCenter_;
    bool dataCenterIsSet_;
    int32_t leftReason_;
    bool leftReasonIsSet_;
    bool existQos_;
    bool existQosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosParticipantInfo_H_
