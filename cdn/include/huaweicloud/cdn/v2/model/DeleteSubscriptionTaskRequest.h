
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_DeleteSubscriptionTaskRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_DeleteSubscriptionTaskRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  DeleteSubscriptionTaskRequest
    : public ModelBase
{
public:
    DeleteSubscriptionTaskRequest();
    virtual ~DeleteSubscriptionTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSubscriptionTaskRequest members

    /// <summary>
    /// 订阅任务id
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);


protected:
    int64_t id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteSubscriptionTaskRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteSubscriptionTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_DeleteSubscriptionTaskRequest_H_
