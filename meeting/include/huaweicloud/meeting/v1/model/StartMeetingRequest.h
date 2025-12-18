
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_StartMeetingRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_StartMeetingRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/StartRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  StartMeetingRequest
    : public ModelBase
{
public:
    StartMeetingRequest();
    virtual ~StartMeetingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartMeetingRequest members

    /// <summary>
    /// 
    /// </summary>

    StartRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const StartRequest& value);


protected:
    StartRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartMeetingRequest& dereference_from_shared_ptr(std::shared_ptr<StartMeetingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_StartMeetingRequest_H_
