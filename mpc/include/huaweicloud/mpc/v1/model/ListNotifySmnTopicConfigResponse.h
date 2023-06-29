
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListNotifySmnTopicConfigResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListNotifySmnTopicConfigResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListNotifySmnTopicConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNotifySmnTopicConfigResponse();
    virtual ~ListNotifySmnTopicConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListNotifySmnTopicConfigResponse members

    /// <summary>
    /// 事件通知模板信息 
    /// </summary>

    std::vector<Notification>& getNotifications();
    bool notificationsIsSet() const;
    void unsetnotifications();
    void setNotifications(const std::vector<Notification>& value);

    /// <summary>
    /// 事件通知模板总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<Notification> notifications_;
    bool notificationsIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListNotifySmnTopicConfigResponse_H_
