
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretEventRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretEventRequestBody_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/csms/v1/model/Notification.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新凭据事件通知请求体。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateSecretEventRequestBody
    : public ModelBase
{
public:
    UpdateSecretEventRequestBody();
    virtual ~UpdateSecretEventRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSecretEventRequestBody members

    /// <summary>
    /// 事件通知状态，取值如下。  ENABLED：表示启用状态 DISABLED：表示禁用状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 本次事件通知的基础事件列表，基础事件类型如下。  - SECRET_VERSION_CREATED:版本创建 - SECRET_VERSION_EXPIRED:版本过期 - SECRET_ROTATED:凭据轮转成功 - SECRET_DELETED:凭据删除 - SECRET_ROTATED_FAILED:凭据轮转失败  列表包含的基础事件类型不能重复。
    /// </summary>

    std::vector<std::string>& getEventTypes();
    bool eventTypesIsSet() const;
    void unseteventTypes();
    void setEventTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    Notification getNotification() const;
    bool notificationIsSet() const;
    void unsetnotification();
    void setNotification(const Notification& value);


protected:
    std::string state_;
    bool stateIsSet_;
    std::vector<std::string> eventTypes_;
    bool eventTypesIsSet_;
    Notification notification_;
    bool notificationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretEventRequestBody_H_
