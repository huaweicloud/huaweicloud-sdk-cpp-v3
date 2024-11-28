
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_Record_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_Record_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 事件通知记录。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  Record
    : public ModelBase
{
public:
    Record();
    virtual ~Record();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Record members

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getEventName() const;
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::string& value);

    /// <summary>
    /// 事件类型。 - SECRET_VERSION_CREATED:版本创建 - SECRET_VERSION_EXPIRED:版本过期 - SECRET_ROTATED:凭据轮转成功 - SECRET_DELETED:凭据删除 - SECRET_ROTATED_FAILED:凭据轮转失败
    /// </summary>

    std::string getTriggerEventType() const;
    bool triggerEventTypeIsSet() const;
    void unsettriggerEventType();
    void setTriggerEventType(const std::string& value);

    /// <summary>
    /// 事件通知记录的创建时间，时间戳，即从1970年1月1日至该时间的总秒数。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 凭据类型  - COMMON：通用凭据(默认)。用于应用系统中的各种敏感信息储存。 - RDS：RDS凭据 。专门针对RDS的凭据，用于存储RDS的账号信息。（已不支持，使用RDS-FG替代） - RDS-FG：RDS凭据 。专门针对RDS的凭据，用于存储RDS的账号信息。 - GaussDB-FG：GaussDB凭据。专门针对GaussDB的凭据，用于存储GaussDB的账号信息。
    /// </summary>

    std::string getSecretType() const;
    bool secretTypeIsSet() const;
    void unsetsecretType();
    void setSecretType(const std::string& value);

    /// <summary>
    /// 事件通知的对象名称。
    /// </summary>

    std::string getNotificationTargetName() const;
    bool notificationTargetNameIsSet() const;
    void unsetnotificationTargetName();
    void setNotificationTargetName(const std::string& value);

    /// <summary>
    /// 事件通知的对象ID。
    /// </summary>

    std::string getNotificationTargetId() const;
    bool notificationTargetIdIsSet() const;
    void unsetnotificationTargetId();
    void setNotificationTargetId(const std::string& value);

    /// <summary>
    /// 事件通知的内容。
    /// </summary>

    std::string getNotificationContent() const;
    bool notificationContentIsSet() const;
    void unsetnotificationContent();
    void setNotificationContent(const std::string& value);

    /// <summary>
    /// 事件通知状态。  - SUCCESS：事件通知成功。 - FAIL：事件通知失败。 - INVALID：事件通知配置主题信息无效或不正确，无法触发通知。
    /// </summary>

    std::string getNotificationStatus() const;
    bool notificationStatusIsSet() const;
    void unsetnotificationStatus();
    void setNotificationStatus(const std::string& value);


protected:
    std::string eventName_;
    bool eventNameIsSet_;
    std::string triggerEventType_;
    bool triggerEventTypeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::string secretName_;
    bool secretNameIsSet_;
    std::string secretType_;
    bool secretTypeIsSet_;
    std::string notificationTargetName_;
    bool notificationTargetNameIsSet_;
    std::string notificationTargetId_;
    bool notificationTargetIdIsSet_;
    std::string notificationContent_;
    bool notificationContentIsSet_;
    std::string notificationStatus_;
    bool notificationStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_Record_H_
