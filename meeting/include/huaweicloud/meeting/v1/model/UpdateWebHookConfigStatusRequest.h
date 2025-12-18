
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateWebHookConfigStatusRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateWebHookConfigStatusRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  UpdateWebHookConfigStatusRequest
    : public ModelBase
{
public:
    UpdateWebHookConfigStatusRequest();
    virtual ~UpdateWebHookConfigStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWebHookConfigStatusRequest members

    /// <summary>
    /// 订阅配置记录ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 事件推送状态。 * 0：启用 * 1：禁用 * 2：锁定 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateWebHookConfigStatusRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateWebHookConfigStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateWebHookConfigStatusRequest_H_
