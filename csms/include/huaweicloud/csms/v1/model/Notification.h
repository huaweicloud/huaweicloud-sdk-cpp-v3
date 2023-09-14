
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_Notification_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_Notification_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 通知主题对象。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  Notification
    : public ModelBase
{
public:
    Notification();
    virtual ~Notification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Notification members

    /// <summary>
    /// 事件通知的对象类型。
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// 事件通知的对象ID。
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);

    /// <summary>
    /// 事件通知的对象名称。
    /// </summary>

    std::string getTargetName() const;
    bool targetNameIsSet() const;
    void unsettargetName();
    void setTargetName(const std::string& value);


protected:
    std::string targetType_;
    bool targetTypeIsSet_;
    std::string targetId_;
    bool targetIdIsSet_;
    std::string targetName_;
    bool targetNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_Notification_H_
