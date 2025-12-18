
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRegionInfoOfMeetingResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRegionInfoOfMeetingResponse_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowRegionInfoOfMeetingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRegionInfoOfMeetingResponse();
    virtual ~ShowRegionInfoOfMeetingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRegionInfoOfMeetingResponse members

    /// <summary>
    /// 会议所在区域的公网IP地址。
    /// </summary>

    std::string getRegionIP() const;
    bool regionIPIsSet() const;
    void unsetregionIP();
    void setRegionIP(const std::string& value);

    /// <summary>
    /// 会议所在区域的公网域名。
    /// </summary>

    std::string getRegionUrl() const;
    bool regionUrlIsSet() const;
    void unsetregionUrl();
    void setRegionUrl(const std::string& value);


protected:
    std::string regionIP_;
    bool regionIPIsSet_;
    std::string regionUrl_;
    bool regionUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRegionInfoOfMeetingResponse_H_
