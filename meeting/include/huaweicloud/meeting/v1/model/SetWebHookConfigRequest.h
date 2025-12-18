
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetWebHookConfigRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetWebHookConfigRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/WebHookConfigRequest.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  SetWebHookConfigRequest
    : public ModelBase
{
public:
    SetWebHookConfigRequest();
    virtual ~SetWebHookConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetWebHookConfigRequest members

    /// <summary>
    /// 
    /// </summary>

    WebHookConfigRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WebHookConfigRequest& value);


protected:
    WebHookConfigRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetWebHookConfigRequest& dereference_from_shared_ptr(std::shared_ptr<SetWebHookConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetWebHookConfigRequest_H_
