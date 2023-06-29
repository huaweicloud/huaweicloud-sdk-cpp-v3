
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_Notification_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_Notification_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MPC_V1_EXPORT  Notification
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
    /// 消息事件的名称. 
    /// </summary>

    std::string getEventName() const;
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::string& value);

    /// <summary>
    /// 事件通知模板选中状态 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 事件通知主题的URN. 
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// 订阅消息类型. 
    /// </summary>

    int32_t getMsgType() const;
    bool msgTypeIsSet() const;
    void unsetmsgType();
    void setMsgType(int32_t value);


protected:
    std::string eventName_;
    bool eventNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string topic_;
    bool topicIsSet_;
    int32_t msgType_;
    bool msgTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_Notification_H_
