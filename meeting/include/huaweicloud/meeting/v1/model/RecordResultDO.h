
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordResultDO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordResultDO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 录制信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RecordResultDO
    : public ModelBase
{
public:
    RecordResultDO();
    virtual ~RecordResultDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecordResultDO members

    /// <summary>
    /// 会议UUID。
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConfID() const;
    bool confIDIsSet() const;
    void unsetconfID();
    void setConfID(const std::string& value);

    /// <summary>
    /// 录播观看地址。
    /// </summary>

    std::vector<std::string>& getUrl();
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::vector<std::string>& value);

    /// <summary>
    /// 录制时长（单位秒）。
    /// </summary>

    int32_t getRcdTime() const;
    bool rcdTimeIsSet() const;
    void unsetrcdTime();
    void setRcdTime(int32_t value);

    /// <summary>
    /// 录制文件大小（MB）。
    /// </summary>

    int32_t getRcdSize() const;
    bool rcdSizeIsSet() const;
    void unsetrcdSize();
    void setRcdSize(int32_t value);

    /// <summary>
    /// 会议主题。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 会议预订者名称。
    /// </summary>

    std::string getScheduserName() const;
    bool scheduserNameIsSet() const;
    void unsetscheduserName();
    void setScheduserName(const std::string& value);

    /// <summary>
    /// 会议开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 录制文件是否转码完成。
    /// </summary>

    bool isIsDecodeFinish() const;
    bool isDecodeFinishIsSet() const;
    void unsetisDecodeFinish();
    void setIsDecodeFinish(bool value);

    /// <summary>
    /// 录制文件预计转码完成时间。
    /// </summary>

    int64_t getDecodeEndTime() const;
    bool decodeEndTimeIsSet() const;
    void unsetdecodeEndTime();
    void setDecodeEndTime(int64_t value);

    /// <summary>
    /// 录播文件是否可观看。
    /// </summary>

    bool isAvailable() const;
    bool availableIsSet() const;
    void unsetavailable();
    void setAvailable(bool value);

    /// <summary>
    /// 观看/下载录播的鉴权方式。 - 0: 可通过链接观看/下载 - 1: 企业用户可观看/下载 - 2: 与会者可观看/下载
    /// </summary>

    int32_t getRecordAuthType() const;
    bool recordAuthTypeIsSet() const;
    void unsetrecordAuthType();
    void setRecordAuthType(int32_t value);


protected:
    std::string confUUID_;
    bool confUUIDIsSet_;
    std::string confID_;
    bool confIDIsSet_;
    std::vector<std::string> url_;
    bool urlIsSet_;
    int32_t rcdTime_;
    bool rcdTimeIsSet_;
    int32_t rcdSize_;
    bool rcdSizeIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string scheduserName_;
    bool scheduserNameIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    bool isDecodeFinish_;
    bool isDecodeFinishIsSet_;
    int64_t decodeEndTime_;
    bool decodeEndTimeIsSet_;
    bool available_;
    bool availableIsSet_;
    int32_t recordAuthType_;
    bool recordAuthTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordResultDO_H_
