
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_DeleteWebHookConfigRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_DeleteWebHookConfigRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  DeleteWebHookConfigRequest
    : public ModelBase
{
public:
    DeleteWebHookConfigRequest();
    virtual ~DeleteWebHookConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteWebHookConfigRequest members

    /// <summary>
    /// 订阅配置记录ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteWebHookConfigRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteWebHookConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_DeleteWebHookConfigRequest_H_
