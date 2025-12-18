
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CycleSubConf_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CycleSubConf_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/CycleSubConfConfigDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  CycleSubConf
    : public ModelBase
{
public:
    CycleSubConf();
    virtual ~CycleSubConf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CycleSubConf members

    /// <summary>
    /// 子会议UUID。
    /// </summary>

    std::string getCycleSubConfID() const;
    bool cycleSubConfIDIsSet() const;
    void unsetcycleSubConfID();
    void setCycleSubConfID(const std::string& value);

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConferenceID() const;
    bool conferenceIDIsSet() const;
    void unsetconferenceID();
    void setConferenceID(const std::string& value);

    /// <summary>
    /// 会议的媒体类型。 * Voice：语音 * Video：标清视频 * HDVideo：高清视频 * Data：数据 
    /// </summary>

    std::string getMediaType() const;
    bool mediaTypeIsSet() const;
    void unsetmediaType();
    void setMediaType(const std::string& value);

    /// <summary>
    /// 会议起始时间(格式：YYYY-MM-DD HH:MM)。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 会议结束时间(格式：YYYY-MM-DD HH:MM)。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 是否自动开启云录制。 - 0: 不自动启动 - 1: 自动启动 
    /// </summary>

    int32_t getIsAutoRecord() const;
    bool isAutoRecordIsSet() const;
    void unsetisAutoRecord();
    void setIsAutoRecord(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CycleSubConfConfigDTO getConfConfigInfo() const;
    bool confConfigInfoIsSet() const;
    void unsetconfConfigInfo();
    void setConfConfigInfo(const CycleSubConfConfigDTO& value);

    /// <summary>
    /// 观看/下载录播的鉴权方式。 - 0: 可通过链接观看/下载 - 1: 企业用户可观看/下载 - 2: 与会者可观看/下载 
    /// </summary>

    int32_t getRecordAuthType() const;
    bool recordAuthTypeIsSet() const;
    void unsetrecordAuthType();
    void setRecordAuthType(int32_t value);

    /// <summary>
    /// 会议描述。长度限制为200个字符。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string cycleSubConfID_;
    bool cycleSubConfIDIsSet_;
    std::string conferenceID_;
    bool conferenceIDIsSet_;
    std::string mediaType_;
    bool mediaTypeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t isAutoRecord_;
    bool isAutoRecordIsSet_;
    CycleSubConfConfigDTO confConfigInfo_;
    bool confConfigInfoIsSet_;
    int32_t recordAuthType_;
    bool recordAuthTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CycleSubConf_H_
