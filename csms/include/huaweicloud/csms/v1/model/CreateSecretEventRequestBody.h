
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretEventRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretEventRequestBody_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 创建凭据事件通知请求体。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretEventRequestBody
    : public ModelBase
{
public:
    CreateSecretEventRequestBody();
    virtual ~CreateSecretEventRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecretEventRequestBody members

    /// <summary>
    /// 新创建事件通知的名称。  约束：取值范围为1到64个字符，满足正则匹配“^[a-zA-Z0-9_-]{1,64}$”。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 本次事件通知的基础事件列表，基础事件类型如下。  SECRET_VERSION_CREATED：版本创建 SECRET_VERSION_EXPIRED：版本过期 SECRET_ROTATED：凭据轮转 SECRET_DELETED：凭据删除  列表包含的基础事件类型不能重复。 
    /// </summary>

    std::vector<std::string>& getEventTypes();
    bool eventTypesIsSet() const;
    void unseteventTypes();
    void setEventTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 控制事件是否生效，只有启用状态才能触发包含的基础事件类型  ENABLED：启用 DISABLED：禁用 
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Notification getNotification() const;
    bool notificationIsSet() const;
    void unsetnotification();
    void setNotification(const Notification& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> eventTypes_;
    bool eventTypesIsSet_;
    std::string state_;
    bool stateIsSet_;
    Notification notification_;
    bool notificationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretEventRequestBody_H_
