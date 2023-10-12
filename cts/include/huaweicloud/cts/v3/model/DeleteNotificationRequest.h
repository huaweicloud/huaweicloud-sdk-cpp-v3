
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_DeleteNotificationRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_DeleteNotificationRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  DeleteNotificationRequest
    : public ModelBase
{
public:
    DeleteNotificationRequest();
    virtual ~DeleteNotificationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteNotificationRequest members

    /// <summary>
    /// 标识关键操作通知id。 批量删除请使用逗号隔开，notification_id&#x3D;\&quot;xxx1,cccc2\&quot;
    /// </summary>

    std::string getNotificationId() const;
    bool notificationIdIsSet() const;
    void unsetnotificationId();
    void setNotificationId(const std::string& value);


protected:
    std::string notificationId_;
    bool notificationIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteNotificationRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteNotificationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_DeleteNotificationRequest_H_
