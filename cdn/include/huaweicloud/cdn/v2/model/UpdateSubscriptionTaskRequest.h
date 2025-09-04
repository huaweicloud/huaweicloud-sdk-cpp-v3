
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateSubscriptionTaskRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateSubscriptionTaskRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/SubscriptionTaskVo.h>

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
class HUAWEICLOUD_CDN_V2_EXPORT  UpdateSubscriptionTaskRequest
    : public ModelBase
{
public:
    UpdateSubscriptionTaskRequest();
    virtual ~UpdateSubscriptionTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSubscriptionTaskRequest members

    /// <summary>
    /// 订阅任务id
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    SubscriptionTaskVo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SubscriptionTaskVo& value);


protected:
    int64_t id_;
    bool idIsSet_;
    SubscriptionTaskVo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateSubscriptionTaskRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateSubscriptionTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateSubscriptionTaskRequest_H_
