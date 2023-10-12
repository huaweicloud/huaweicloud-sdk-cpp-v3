
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListNotificationsResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListNotificationsResponse_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/NotificationsResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListNotificationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListNotificationsResponse();
    virtual ~ListNotificationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNotificationsResponse members

    /// <summary>
    /// 关键操作通知列表。
    /// </summary>

    std::vector<NotificationsResponseBody>& getNotifications();
    bool notificationsIsSet() const;
    void unsetnotifications();
    void setNotifications(const std::vector<NotificationsResponseBody>& value);


protected:
    std::vector<NotificationsResponseBody> notifications_;
    bool notificationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListNotificationsResponse_H_
