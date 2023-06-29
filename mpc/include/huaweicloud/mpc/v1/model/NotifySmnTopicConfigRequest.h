
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_NotifySmnTopicConfigRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_NotifySmnTopicConfigRequest_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/NotificationConfigReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  NotifySmnTopicConfigRequest
    : public ModelBase
{
public:
    NotifySmnTopicConfigRequest();
    virtual ~NotifySmnTopicConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NotifySmnTopicConfigRequest members

    /// <summary>
    /// 
    /// </summary>

    NotificationConfigReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NotificationConfigReq& value);


protected:
    NotificationConfigReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NotifySmnTopicConfigRequest& dereference_from_shared_ptr(std::shared_ptr<NotifySmnTopicConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_NotifySmnTopicConfigRequest_H_
