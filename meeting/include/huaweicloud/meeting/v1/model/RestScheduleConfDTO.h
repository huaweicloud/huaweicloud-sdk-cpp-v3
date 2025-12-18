
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestScheduleConfDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestScheduleConfDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/CycleParams.h>
#include <huaweicloud/meeting/v1/model/RestAttendeeDTO.h>
#include <vector>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  RestScheduleConfDTO
    : public ModelBase
{
public:
    RestScheduleConfDTO();
    virtual ~RestScheduleConfDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestScheduleConfDTO members

    /// <summary>
    /// 会议开始时间（UTC时间）。格式：yyyy-MM-dd HH:mm。 &gt; * 创建预约会议时，如果没有指定开始时间或填空串，则表示会议马上开始 &gt; * 时间是UTC时间，即0时区的时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 会议持续时长，单位分钟。默认30分钟。最大1440分钟（24小时），最小15分钟。
    /// </summary>

    int32_t getLength() const;
    bool lengthIsSet() const;
    void unsetlength();
    void setLength(int32_t value);

    /// <summary>
    /// 会议主题。最多128个字符。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 会议的媒体类型。 - Voice: 语音会议 - HDVideo: 视频会议
    /// </summary>

    std::string getMediaTypes() const;
    bool mediaTypesIsSet() const;
    void unsetmediaTypes();
    void setMediaTypes(const std::string& value);

    /// <summary>
    /// 软终端创建即时会议时在当前字段带临时群组ID，由服务器在邀请其他与会者时在或者conference-info头域中携带。长度限制为31个字符。
    /// </summary>

    std::string getGroupuri() const;
    bool groupuriIsSet() const;
    void unsetgroupuri();
    void setGroupuri(const std::string& value);

    /// <summary>
    /// 与会者列表。
    /// </summary>

    std::vector<RestAttendeeDTO>& getAttendees();
    bool attendeesIsSet() const;
    void unsetattendees();
    void setAttendees(const std::vector<RestAttendeeDTO>& value);

    /// <summary>
    /// 会议是否自动启动录制，在录播类型为:录播、直播+录播时有效。默认为不自动启动。 - 0: 不自动启动录制 - 1: 自动启动录制
    /// </summary>

    int32_t getIsAutoRecord() const;
    bool isAutoRecordIsSet() const;
    void unsetisAutoRecord();
    void setIsAutoRecord(int32_t value);

    /// <summary>
    /// 会议媒体加密模式。默认值由企业级的配置填充。 - 0: 自适应加密 - 1: 强制加密 - 2: 不加密
    /// </summary>

    int32_t getEncryptMode() const;
    bool encryptModeIsSet() const;
    void unsetencryptMode();
    void setEncryptMode(int32_t value);

    /// <summary>
    /// 会议通知短信或邮件的语言。默认中文。 - zh-CN: 简体中文 - en-US: 美国英文
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 会议通知中会议时间的时区信息。时区信息，参考[[时区映射关系](https://support.huaweicloud.com/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hws)[[时区映射关系](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0110.html#ZH-CN_TOPIC_0212714472__table137407441463)](tag:hk)。 &gt; * 举例：“timeZoneID”:\&quot;26\&quot;，则通过华为云会议发送的会议通知中的时间将会标记为如“2021/11/11 星期四 00:00 - 02:00 (GMT) 格林威治标准时间:都柏林, 爱丁堡, 里斯本, 伦敦”。 &gt; * 非周期会议，如果会议通知是通过第三方系统发送，则这个字段不用填写。
    /// </summary>

    std::string getTimeZoneID() const;
    bool timeZoneIDIsSet() const;
    void unsettimeZoneID();
    void setTimeZoneID(const std::string& value);

    /// <summary>
    /// 录播类型。默认为禁用。 - 0: 禁用 - 1: 直播 - 2: 录播 - 3: 直播+录播
    /// </summary>

    int32_t getRecordType() const;
    bool recordTypeIsSet() const;
    void unsetrecordType();
    void setRecordType(int32_t value);

    /// <summary>
    /// 主流直播推流地址，在录播类型为 :直播、直播+录播时有效。最大不超过255个字符。
    /// </summary>

    std::string getLiveAddress() const;
    bool liveAddressIsSet() const;
    void unsetliveAddress();
    void setLiveAddress(const std::string& value);

    /// <summary>
    /// 辅流直播推流地址，在录播类型为 :直播、直播+录播时有效。最大不超过255个字符。
    /// </summary>

    std::string getAuxAddress() const;
    bool auxAddressIsSet() const;
    void unsetauxAddress();
    void setAuxAddress(const std::string& value);

    /// <summary>
    /// 是否录制辅流，在录播类型为：录播、录播+直播时有效。默认只录制视频主流，不录制辅流。  - 0: 不录制  - 1: 录制
    /// </summary>

    int32_t getRecordAuxStream() const;
    bool recordAuxStreamIsSet() const;
    void unsetrecordAuxStream();
    void setRecordAuxStream(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    RestConfConfigDTO getConfConfigInfo() const;
    bool confConfigInfoIsSet() const;
    void unsetconfConfigInfo();
    void setConfConfigInfo(const RestConfConfigDTO& value);

    /// <summary>
    /// 录播观看鉴权方式，在录播类型为:录播、直播+录播时有效。 - 0: 可通过链接观看/下载 - 1: 企业用户可观看/下载 - 2: 与会者可观看/下载
    /// </summary>

    int32_t getRecordAuthType() const;
    bool recordAuthTypeIsSet() const;
    void unsetrecordAuthType();
    void setRecordAuthType(int32_t value);

    /// <summary>
    /// 是否使用云会议室或者个人会议ID召开预约会议。默认0。 - 0: 不使用云会议室或者个人会议ID - 1: 使用云会议室或者个人会议ID
    /// </summary>

    int32_t getVmrFlag() const;
    bool vmrFlagIsSet() const;
    void unsetvmrFlag();
    void setVmrFlag(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CycleParams getCycleParams() const;
    bool cycleParamsIsSet() const;
    void unsetcycleParams();
    void setCycleParams(const CycleParams& value);

    /// <summary>
    /// 绑定给当前创会帐号的VMR ID。通过[[查询云会议室及个人会议ID](https://support.huaweicloud.com/api-meeting/meeting_21_1106.html)](tag:hws)[[查询云会议室及个人会议ID](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_1106.html)](tag:hk)接口获取。 &gt; * vmrID取上述查询接口中返回的id，不是vmrId &gt; * 创建个人会议ID的会议时，使用vmrMode&#x3D;0的VMR；创建云会议室的会议时，使用vmrMode&#x3D;1的VMR
    /// </summary>

    std::string getVmrID() const;
    bool vmrIDIsSet() const;
    void unsetvmrID();
    void setVmrID(const std::string& value);

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
    /// 会议资源类型，此参数创建后不支持修改：  * 0: 并发 * 1: 云会议室 * 2: 网络研讨会 * 3: 预留模式，暂未开放 
    /// </summary>

    int32_t getConfResType() const;
    bool confResTypeIsSet() const;
    void unsetconfResType();
    void setConfResType(int32_t value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t length_;
    bool lengthIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string mediaTypes_;
    bool mediaTypesIsSet_;
    std::string groupuri_;
    bool groupuriIsSet_;
    std::vector<RestAttendeeDTO> attendees_;
    bool attendeesIsSet_;
    int32_t isAutoRecord_;
    bool isAutoRecordIsSet_;
    int32_t encryptMode_;
    bool encryptModeIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string timeZoneID_;
    bool timeZoneIDIsSet_;
    int32_t recordType_;
    bool recordTypeIsSet_;
    std::string liveAddress_;
    bool liveAddressIsSet_;
    std::string auxAddress_;
    bool auxAddressIsSet_;
    int32_t recordAuxStream_;
    bool recordAuxStreamIsSet_;
    RestConfConfigDTO confConfigInfo_;
    bool confConfigInfoIsSet_;
    int32_t recordAuthType_;
    bool recordAuthTypeIsSet_;
    int32_t vmrFlag_;
    bool vmrFlagIsSet_;
    CycleParams cycleParams_;
    bool cycleParamsIsSet_;
    std::string vmrID_;
    bool vmrIDIsSet_;
    int32_t concurrentParticipants_;
    bool concurrentParticipantsIsSet_;
    bool supportSimultaneousInterpretation_;
    bool supportSimultaneousInterpretationIsSet_;
    int32_t confResType_;
    bool confResTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestScheduleConfDTO_H_
