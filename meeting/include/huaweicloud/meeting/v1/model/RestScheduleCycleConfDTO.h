
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestScheduleCycleConfDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestScheduleCycleConfDTO_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  RestScheduleCycleConfDTO
    : public ModelBase
{
public:
    RestScheduleCycleConfDTO();
    virtual ~RestScheduleCycleConfDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestScheduleCycleConfDTO members

    /// <summary>
    /// 子会议UUID。
    /// </summary>

    std::string getCycleSubConfID() const;
    bool cycleSubConfIDIsSet() const;
    void unsetcycleSubConfID();
    void setCycleSubConfID(const std::string& value);

    /// <summary>
    /// 会议的媒体类型。 * Voice：语音会议 * HDVideo：视频会议 
    /// </summary>

    std::string getMediaTypes() const;
    bool mediaTypesIsSet() const;
    void unsetmediaTypes();
    void setMediaTypes(const std::string& value);

    /// <summary>
    /// 会议开始时间（UTC时间）。格式：yyyy-MM-dd HH:mm。 &gt; * 如果没有指定开始时间或填空串，则表示会议马上开始 &gt; * 时间是UTC时间，即0时区的时间 
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
    /// 会议是否自动启动录制，在录播类型为：录播、录播+直播时才生效。默认为不自动启动。 * 1：自动启动录制 * 0：不自动启动录制 
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
    /// 录播观看鉴权方式，在录播类型为:录播、直播+录播时有效。 * 0：可通过链接观看/下载 * 1：企业用户可观看/下载 * 2：与会者可观看/下载 
    /// </summary>

    int32_t getRecordAuthType() const;
    bool recordAuthTypeIsSet() const;
    void unsetrecordAuthType();
    void setRecordAuthType(int32_t value);

    /// <summary>
    /// 会议描述，长度限制为200个字符。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string cycleSubConfID_;
    bool cycleSubConfIDIsSet_;
    std::string mediaTypes_;
    bool mediaTypesIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t length_;
    bool lengthIsSet_;
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

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestScheduleCycleConfDTO_H_
