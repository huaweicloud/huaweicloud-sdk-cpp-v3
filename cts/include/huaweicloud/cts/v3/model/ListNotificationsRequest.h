
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListNotificationsRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListNotificationsRequest_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_CTS_V3_EXPORT  ListNotificationsRequest
    : public ModelBase
{
public:
    ListNotificationsRequest();
    virtual ~ListNotificationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListNotificationsRequest members

    /// <summary>
    /// 通知类型。
    /// </summary>

    std::string getNotificationType() const;
    bool notificationTypeIsSet() const;
    void unsetnotificationType();
    void setNotificationType(const std::string& value);

    /// <summary>
    /// 标识关键操作通知名称。 在不传入该字段的情况下，将查询当前租户所有的关键操作通知。
    /// </summary>

    std::string getNotificationName() const;
    bool notificationNameIsSet() const;
    void unsetnotificationName();
    void setNotificationName(const std::string& value);


protected:
    std::string notificationType_;
    bool notificationTypeIsSet_;
    std::string notificationName_;
    bool notificationNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListNotificationsRequest& dereference_from_shared_ptr(std::shared_ptr<ListNotificationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListNotificationsRequest_H_
