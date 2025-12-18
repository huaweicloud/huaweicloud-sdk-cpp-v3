
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowDeviceStatusResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowDeviceStatusResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/UserStatusDTO.h>
#include <vector>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowDeviceStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDeviceStatusResponse();
    virtual ~ShowDeviceStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDeviceStatusResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<UserStatusDTO>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<UserStatusDTO>& value);


protected:
    std::vector<UserStatusDTO> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowDeviceStatusResponse_H_
