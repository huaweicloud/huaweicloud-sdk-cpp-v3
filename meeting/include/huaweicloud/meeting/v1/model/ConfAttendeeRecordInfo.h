
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ConfAttendeeRecordInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ConfAttendeeRecordInfo_H_


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
/// 与会者记录。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ConfAttendeeRecordInfo
    : public ModelBase
{
public:
    ConfAttendeeRecordInfo();
    virtual ~ConfAttendeeRecordInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfAttendeeRecordInfo members

    /// <summary>
    /// 与会者名称。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 号码。
    /// </summary>

    std::string getCallNumber() const;
    bool callNumberIsSet() const;
    void unsetcallNumber();
    void setCallNumber(const std::string& value);

    /// <summary>
    /// 设备类型。
    /// </summary>

    std::string getDeviceType() const;
    bool deviceTypeIsSet() const;
    void unsetdeviceType();
    void setDeviceType(const std::string& value);

    /// <summary>
    /// 入会时间（UTC时间，单位毫秒）。
    /// </summary>

    int64_t getJoinTime() const;
    bool joinTimeIsSet() const;
    void unsetjoinTime();
    void setJoinTime(int64_t value);

    /// <summary>
    /// 离会时间（UTC时间，单位毫秒）。
    /// </summary>

    int64_t getLeftTime() const;
    bool leftTimeIsSet() const;
    void unsetleftTime();
    void setLeftTime(int64_t value);

    /// <summary>
    /// 媒体类型。
    /// </summary>

    std::string getMediaType() const;
    bool mediaTypeIsSet() const;
    void unsetmediaType();
    void setMediaType(const std::string& value);

    /// <summary>
    /// 部门名称。
    /// </summary>

    std::string getDeptName() const;
    bool deptNameIsSet() const;
    void unsetdeptName();
    void setDeptName(const std::string& value);


protected:
    std::string displayName_;
    bool displayNameIsSet_;
    std::string callNumber_;
    bool callNumberIsSet_;
    std::string deviceType_;
    bool deviceTypeIsSet_;
    int64_t joinTime_;
    bool joinTimeIsSet_;
    int64_t leftTime_;
    bool leftTimeIsSet_;
    std::string mediaType_;
    bool mediaTypeIsSet_;
    std::string deptName_;
    bool deptNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ConfAttendeeRecordInfo_H_
