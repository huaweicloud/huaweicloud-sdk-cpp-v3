
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_NotificationConfigReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_NotificationConfigReq_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/Notification.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  NotificationConfigReq
    : public ModelBase
{
public:
    NotificationConfigReq();
    virtual ~NotificationConfigReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NotificationConfigReq members

    /// <summary>
    /// 事件通知模板信息 
    /// </summary>

    std::vector<Notification>& getNotifications();
    bool notificationsIsSet() const;
    void unsetnotifications();
    void setNotifications(const std::vector<Notification>& value);


protected:
    std::vector<Notification> notifications_;
    bool notificationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_NotificationConfigReq_H_
