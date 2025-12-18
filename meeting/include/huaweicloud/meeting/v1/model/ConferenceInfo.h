
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ConferenceInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ConferenceInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/CycleSubConf.h>
#include <string>
#include <huaweicloud/meeting/v1/model/CycleParams.h>
#include <huaweicloud/meeting/v1/model/PartAttendee.h>
#include <huaweicloud/meeting/v1/model/PasswordEntry.h>
#include <vector>
#include <huaweicloud/meeting/v1/model/MultiPicDisplayDO.h>
#include <huaweicloud/meeting/v1/model/RestConfConfigDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会议信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ConferenceInfo
    : public ModelBase
{
public:
    ConferenceInfo();
    virtual ~ConferenceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConferenceInfo members

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConferenceID() const;
    bool conferenceIDIsSet() const;
    void unsetconferenceID();
    void setConferenceID(const std::string& value);

    /// <summary>
    /// 会议主题。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 会议预约时添加的会议者数量。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 会议通知中会议时间的时区信息。时区信息，参考[[时区映射关系](https://support.huaweicloud.com/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hws)[[时区映射关系](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hk)。
    /// </summary>

    std::string getTimeZoneID() const;
    bool timeZoneIDIsSet() const;
    void unsettimeZoneID();
    void setTimeZoneID(const std::string& value);

    /// <summary>
    /// 会议起始时间 (YYYY-MM-DD HH:MM )。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 会议结束时间 (YYYY-MM-DD HH:MM )。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 会议的媒体类型。 由1个或多个枚举String组成，多个枚举时，每个枚举值之间通过”,”逗号分隔。 - Voice: 语音 - Video: 标清视频 - HDVideo: 高清视频 - Data: 数据
    /// </summary>

    std::string getMediaTypes() const;
    bool mediaTypesIsSet() const;
    void unsetmediaTypes();
    void setMediaTypes(const std::string& value);

    /// <summary>
    /// 会议状态。 - Schedule: 预定状态 - Creating: 正在创建状态 - Created: 会议已经被创建，并正在召开 - Destroyed: 会议已经关闭
    /// </summary>

    std::string getConferenceState() const;
    bool conferenceStateIsSet() const;
    void unsetconferenceState();
    void setConferenceState(const std::string& value);

    /// <summary>
    /// 会议通知短信或邮件的语言。默认中文。 * zh-CN：中文 * en-US：英文 
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 会议接入的SIP号码。
    /// </summary>

    std::string getAccessNumber() const;
    bool accessNumberIsSet() const;
    void unsetaccessNumber();
    void setAccessNumber(const std::string& value);

    /// <summary>
    /// 会议密码。 &gt; * 创建会议时，返回主持人密码和来宾密码 &gt; * 主持人查询会议时，返回主持人密码和来宾密码来 &gt; * 宾查询会议时，返回来宾密码
    /// </summary>

    std::vector<PasswordEntry>& getPasswordEntry();
    bool passwordEntryIsSet() const;
    void unsetpasswordEntry();
    void setPasswordEntry(const std::vector<PasswordEntry>& value);

    /// <summary>
    /// 会议预订者的用户UUID。
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// 会议预订者名称。
    /// </summary>

    std::string getScheduserName() const;
    bool scheduserNameIsSet() const;
    void unsetscheduserName();
    void setScheduserName(const std::string& value);

    /// <summary>
    /// 会议类型。 - 0: 普通会议 - 2: 周期性会议
    /// </summary>

    int32_t getConferenceType() const;
    bool conferenceTypeIsSet() const;
    void unsetconferenceType();
    void setConferenceType(int32_t value);

    /// <summary>
    /// 会议类型。 - FUTURE：将来开始的会议（创建时） - IMMEDIATELY：立即开始的会议（创建时） - CYCLE：周期会议
    /// </summary>

    std::string getConfType() const;
    bool confTypeIsSet() const;
    void unsetconfType();
    void setConfType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CycleParams getCycleParams() const;
    bool cycleParamsIsSet() const;
    void unsetcycleParams();
    void setCycleParams(const CycleParams& value);

    /// <summary>
    /// 是否入会自动静音。 - 0: 不自动静音 - 1: 自动静音
    /// </summary>

    int32_t getIsAutoMute() const;
    bool isAutoMuteIsSet() const;
    void unsetisAutoMute();
    void setIsAutoMute(int32_t value);

    /// <summary>
    /// 是否自动开启云录制。 - 0: 不自动启动 - 1: 自动启动
    /// </summary>

    int32_t getIsAutoRecord() const;
    bool isAutoRecordIsSet() const;
    void unsetisAutoRecord();
    void setIsAutoRecord(int32_t value);

    /// <summary>
    /// 主持人会议链接地址。
    /// </summary>

    std::string getChairJoinUri() const;
    bool chairJoinUriIsSet() const;
    void unsetchairJoinUri();
    void setChairJoinUri(const std::string& value);

    /// <summary>
    /// 普通与会者会议链接地址。
    /// </summary>

    std::string getGuestJoinUri() const;
    bool guestJoinUriIsSet() const;
    void unsetguestJoinUri();
    void setGuestJoinUri(const std::string& value);

    /// <summary>
    /// 网络研讨会观众会议链接地址。
    /// </summary>

    std::string getAudienceJoinUri() const;
    bool audienceJoinUriIsSet() const;
    void unsetaudienceJoinUri();
    void setAudienceJoinUri(const std::string& value);

    /// <summary>
    /// 录播类型。 - 0: 禁用 - 1: 直播 - 2: 录播 - 3: 直播+录播
    /// </summary>

    int32_t getRecordType() const;
    bool recordTypeIsSet() const;
    void unsetrecordType();
    void setRecordType(int32_t value);

    /// <summary>
    /// 辅流直播推流地址。
    /// </summary>

    std::string getAuxAddress() const;
    bool auxAddressIsSet() const;
    void unsetauxAddress();
    void setAuxAddress(const std::string& value);

    /// <summary>
    /// 主流直播推流地址。
    /// </summary>

    std::string getLiveAddress() const;
    bool liveAddressIsSet() const;
    void unsetliveAddress();
    void setLiveAddress(const std::string& value);

    /// <summary>
    /// 是否录制辅流。  - 0: 否  - 1: 是
    /// </summary>

    int32_t getRecordAuxStream() const;
    bool recordAuxStreamIsSet() const;
    void unsetrecordAuxStream();
    void setRecordAuxStream(int32_t value);

    /// <summary>
    /// 观看/下载录播的鉴权方式。  - 0: 可通过链接观看/下载  - 1: 企业用户可观看/下载  - 2: 与会者可观看/下载
    /// </summary>

    int32_t getRecordAuthType() const;
    bool recordAuthTypeIsSet() const;
    void unsetrecordAuthType();
    void setRecordAuthType(int32_t value);

    /// <summary>
    /// 直播观看地址。
    /// </summary>

    std::string getLiveUrl() const;
    bool liveUrlIsSet() const;
    void unsetliveUrl();
    void setLiveUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RestConfConfigDTO getConfConfigInfo() const;
    bool confConfigInfoIsSet() const;
    void unsetconfConfigInfo();
    void setConfConfigInfo(const RestConfConfigDTO& value);

    /// <summary>
    /// 是否使用云会议室或个人会议ID召开预约会议。 - 0: 不使用云会议室或个人会议ID - 1: 使用云会议室或个人会议ID
    /// </summary>

    int32_t getVmrFlag() const;
    bool vmrFlagIsSet() const;
    void unsetvmrFlag();
    void setVmrFlag(int32_t value);

    /// <summary>
    /// 是否有会议录制文件。仅历史会议查询时返回。 - true: 有录制文件 - false: 没有录制文件
    /// </summary>

    bool isIsHasRecordFile() const;
    bool isHasRecordFileIsSet() const;
    void unsetisHasRecordFile();
    void setIsHasRecordFile(bool value);

    /// <summary>
    /// 云会议室会议ID或个人会议ID，如果vmrFlag为\&quot;1\&quot;，则该字段不为空。
    /// </summary>

    std::string getVmrConferenceID() const;
    bool vmrConferenceIDIsSet() const;
    void unsetvmrConferenceID();
    void setVmrConferenceID(const std::string& value);

    /// <summary>
    /// 会议的UUID。 &gt; * 只有创建立即开始的会议才返回UUID，如果是预约未来的会议，不会返回UUID &gt; * 可以通过[[查询历史会议列表](https://support.huaweicloud.com/api-meeting/meeting_21_0051.html)](tag:hws)[[查询历史会议列表](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0051.html)](tag:hk)获取历史会议的UUID 
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 被邀请的部分与会者信息。 &gt; * 只返回被邀请的前20条软终端与会者信息和前20条硬终端与会者信息 &gt; * 不返回会中主动加入的与会者信息 &gt; * “[[查询会议列表](https://support.huaweicloud.com/api-meeting/meeting_21_0017.html)](tag:hws)[[查询会议列表](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0017.html)](tag:hk)”和“[[查询会议详情](https://support.huaweicloud.com/api-meeting/meeting_21_0018.html)](tag:hws)[[查询会议详情](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0018.html)](tag:hk)”接口，返回预约会议时邀请的与会者和会中主持人邀请的与会者 &gt; * “[[查询在线会议列表](https://support.huaweicloud.com/api-meeting/meeting_21_0025.html)](tag:hws)[[查询在线会议列表](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0025.html)](tag:hk)”、“[[查询在线会议详情](https://support.huaweicloud.com/api-meeting/meeting_21_0026.html)](tag:hws)[[查询在线会议详情](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0026.html)](tag:hk)”、“[[查询历史会议列表](https://support.huaweicloud.com/api-meeting/meeting_21_0051.html)](tag:hws)[[查询历史会议列表](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0051.html)](tag:hk)”和“[[查询历史会议详情](https://support.huaweicloud.com/api-meeting/meeting_21_0052.html)](tag:hws)[[查询历史会议详情](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0052.html)](tag:hk)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ”接口返回预约会议时邀请的与会者。不返回会中主持人邀请的与会者 
    /// </summary>

    std::vector<PartAttendee>& getPartAttendeeInfo();
    bool partAttendeeInfoIsSet() const;
    void unsetpartAttendeeInfo();
    void setPartAttendeeInfo(const std::vector<PartAttendee>& value);

    /// <summary>
    /// 硬终端个数，如IdeaHub，TE30等。
    /// </summary>

    int32_t getTerminlCount() const;
    bool terminlCountIsSet() const;
    void unsetterminlCount();
    void setTerminlCount(int32_t value);

    /// <summary>
    /// 软终端个数，如PC端、手机端App等。
    /// </summary>

    int32_t getNormalCount() const;
    bool normalCountIsSet() const;
    void unsetnormalCount();
    void setNormalCount(int32_t value);

    /// <summary>
    /// 会议预定者的企业名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);

    /// <summary>
    /// 云会议室的ID。
    /// </summary>

    std::string getVmrID() const;
    bool vmrIDIsSet() const;
    void unsetvmrID();
    void setVmrID(const std::string& value);

    /// <summary>
    /// 与会者角色。 * chair ：主持人 * general ：来宾 * audience ： 观众 &gt; * 仅在查询会议详情时返回 &gt; * 返回查询者本身的角色 
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 是否是网络研讨会。
    /// </summary>

    bool isWebinar() const;
    bool webinarIsSet() const;
    void unsetwebinar();
    void setWebinar(bool value);

    /// <summary>
    /// 当前在线与会人数。包含被邀入会和主动入会的与会者。 &gt; 仅在“[[查询在线会议列表](https://support.huaweicloud.com/api-meeting/meeting_21_0025.html)](tag:hws)[[查询在线会议列表](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0025.html)](tag:hk)”接口中返回。 
    /// </summary>

    int32_t getOnlineAttendeeAmount() const;
    bool onlineAttendeeAmountIsSet() const;
    void unsetonlineAttendeeAmount();
    void setOnlineAttendeeAmount(int32_t value);

    /// <summary>
    /// 标识是否为多流视频会议。 * 1：多流会议 
    /// </summary>

    int32_t getMultiStreamFlag() const;
    bool multiStreamFlagIsSet() const;
    void unsetmultiStreamFlag();
    void setMultiStreamFlag(int32_t value);

    /// <summary>
    /// 会议类型模型。 * COMMON：MCU会议 * RTC：MMR会议 
    /// </summary>

    std::string getConfMode() const;
    bool confModeIsSet() const;
    void unsetconfMode();
    void setConfMode(const std::string& value);

    /// <summary>
    /// VMR预约记录。 true: VMR预约记录 false：普通会议 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    bool isScheduleVmr() const;
    bool scheduleVmrIsSet() const;
    void unsetscheduleVmr();
    void setScheduleVmr(bool value);

    /// <summary>
    /// 会议最大与会人数。默认值0。 * 0：无限制 * 大于0：会议最大与会人数 
    /// </summary>

    int32_t getConcurrentParticipants() const;
    bool concurrentParticipantsIsSet() const;
    void unsetconcurrentParticipants();
    void setConcurrentParticipants(int32_t value);

    /// <summary>
    /// 会议是否支持同声传译。默认值false。 * true:支持 * false:不支持 
    /// </summary>

    bool isSupportSimultaneousInterpretation() const;
    bool supportSimultaneousInterpretationIsSet() const;
    void unsetsupportSimultaneousInterpretation();
    void setSupportSimultaneousInterpretation(bool value);

    /// <summary>
    /// 
    /// </summary>

    MultiPicDisplayDO getPicDisplay() const;
    bool picDisplayIsSet() const;
    void unsetpicDisplay();
    void setPicDisplay(const MultiPicDisplayDO& value);

    /// <summary>
    /// 周期子会议列表。
    /// </summary>

    std::vector<CycleSubConf>& getSubConfs();
    bool subConfsIsSet() const;
    void unsetsubConfs();
    void setSubConfs(const std::vector<CycleSubConf>& value);

    /// <summary>
    /// 第一个周期子会议的UUID。
    /// </summary>

    std::string getCycleSubConfID() const;
    bool cycleSubConfIDIsSet() const;
    void unsetcycleSubConfID();
    void setCycleSubConfID(const std::string& value);


protected:
    std::string conferenceID_;
    bool conferenceIDIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string timeZoneID_;
    bool timeZoneIDIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string mediaTypes_;
    bool mediaTypesIsSet_;
    std::string conferenceState_;
    bool conferenceStateIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string accessNumber_;
    bool accessNumberIsSet_;
    std::vector<PasswordEntry> passwordEntry_;
    bool passwordEntryIsSet_;
    std::string userUUID_;
    bool userUUIDIsSet_;
    std::string scheduserName_;
    bool scheduserNameIsSet_;
    int32_t conferenceType_;
    bool conferenceTypeIsSet_;
    std::string confType_;
    bool confTypeIsSet_;
    CycleParams cycleParams_;
    bool cycleParamsIsSet_;
    int32_t isAutoMute_;
    bool isAutoMuteIsSet_;
    int32_t isAutoRecord_;
    bool isAutoRecordIsSet_;
    std::string chairJoinUri_;
    bool chairJoinUriIsSet_;
    std::string guestJoinUri_;
    bool guestJoinUriIsSet_;
    std::string audienceJoinUri_;
    bool audienceJoinUriIsSet_;
    int32_t recordType_;
    bool recordTypeIsSet_;
    std::string auxAddress_;
    bool auxAddressIsSet_;
    std::string liveAddress_;
    bool liveAddressIsSet_;
    int32_t recordAuxStream_;
    bool recordAuxStreamIsSet_;
    int32_t recordAuthType_;
    bool recordAuthTypeIsSet_;
    std::string liveUrl_;
    bool liveUrlIsSet_;
    RestConfConfigDTO confConfigInfo_;
    bool confConfigInfoIsSet_;
    int32_t vmrFlag_;
    bool vmrFlagIsSet_;
    bool isHasRecordFile_;
    bool isHasRecordFileIsSet_;
    std::string vmrConferenceID_;
    bool vmrConferenceIDIsSet_;
    std::string confUUID_;
    bool confUUIDIsSet_;
    std::vector<PartAttendee> partAttendeeInfo_;
    bool partAttendeeInfoIsSet_;
    int32_t terminlCount_;
    bool terminlCountIsSet_;
    int32_t normalCount_;
    bool normalCountIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;
    std::string vmrID_;
    bool vmrIDIsSet_;
    std::string role_;
    bool roleIsSet_;
    bool webinar_;
    bool webinarIsSet_;
    int32_t onlineAttendeeAmount_;
    bool onlineAttendeeAmountIsSet_;
    int32_t multiStreamFlag_;
    bool multiStreamFlagIsSet_;
    std::string confMode_;
    bool confModeIsSet_;
    bool scheduleVmr_;
    bool scheduleVmrIsSet_;
    int32_t concurrentParticipants_;
    bool concurrentParticipantsIsSet_;
    bool supportSimultaneousInterpretation_;
    bool supportSimultaneousInterpretationIsSet_;
    MultiPicDisplayDO picDisplay_;
    bool picDisplayIsSet_;
    std::vector<CycleSubConf> subConfs_;
    bool subConfsIsSet_;
    std::string cycleSubConfID_;
    bool cycleSubConfIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ConferenceInfo_H_
