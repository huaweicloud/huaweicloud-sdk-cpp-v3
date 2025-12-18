
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_StartMeetingResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_StartMeetingResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  StartMeetingResponse
    : public ModelBase, public HttpResponse
{
public:
    StartMeetingResponse();
    virtual ~StartMeetingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartMeetingResponse members

    /// <summary>
    /// uuid。 &gt; 废弃参数，请勿使用。 
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 会议所在区域的公网IP地址。
    /// </summary>

    std::string getRegionIP() const;
    bool regionIPIsSet() const;
    void unsetregionIP();
    void setRegionIP(const std::string& value);


protected:
    std::string uuid_;
    bool uuidIsSet_;
    std::string regionIP_;
    bool regionIPIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_StartMeetingResponse_H_
