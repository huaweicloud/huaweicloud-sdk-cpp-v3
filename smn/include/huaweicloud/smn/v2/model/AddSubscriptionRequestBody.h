
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/BatchAddSubscriptionsRequestBody.h>
#include <string>
#include <huaweicloud/smn/v2/model/SubscriptionExtension.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  AddSubscriptionRequestBody
    : public ModelBase
{
public:
    AddSubscriptionRequestBody();
    virtual ~AddSubscriptionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddSubscriptionRequestBody members

    /// <summary>
    /// 不同协议对应不同的endpoint（接受消息的接入点）。 目前支持的协议包括：  “email”：邮件传输协议，endpoint为邮箱地址。  “sms”：短信传输协议，endpoint为手机号码。  “functionstage”：FunctionGraph（函数）传输协议，endpoint为一个函数。  “functiongraph”：FunctionGraph（工作流）传输协议，endpoint为由一组函数编排成的工作流。  “http”、“https”：HTTP/HTTPS传输协议，endpoint为URL。  “callnotify”：语音通知传输协议，endpoint为手机号码。  “wechat”：微信群机器人传输协议。  “dingding”：钉钉群机器人传输协议。  “feishu”：飞书群机器人传输协议。  “welink”：welink群机器人传输协议。  “dingTalkBot”：个人钉钉传输协议。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 说明：  http协议，接入点必须以“http://”开头。  https协议，接入点必须以“https://”开头。  email协议，接入点必须是邮件地址。  sms协议，接入点必须是一个电话号码。  functionstage协议，接入点必须是一个函数。  functiongraph协议，接入点必须是一个函数工作流。  callnotify协议，接入点必须是一个电话号码。  dingding协议，接入点必须是一个钉钉自定义群机器人的地址，或添加了钉钉企业内部机器人的群组openConversationId。添加钉钉企业内部机器人对应的群组openConversationId时，该字段不能以“http://”或“https://”为开头。  wechat协议，接入点必须是一个微信群机器人的地址。  feishu协议，接入点必须是一个飞书群机器人的地址。  welink协议，接入点必须是一个welink的群号。  dingTalkBot协议，接入点必须是一个钉钉企业用户的userId。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 备注。最大支持128字节，约42个中文，必须是UTF-8编码的字符串，否则无法正常显示中文。
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SubscriptionExtension getExtension() const;
    bool extensionIsSet() const;
    void unsetextension();
    void setExtension(const SubscriptionExtension& value);

    /// <summary>
    /// 当需要批量创建订阅时，需要传入该字段。SMN支持一次最多创建50个订阅。
    /// </summary>

    std::vector<BatchAddSubscriptionsRequestBody>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();
    void setSubscriptions(const std::vector<BatchAddSubscriptionsRequestBody>& value);


protected:
    std::string protocol_;
    bool protocolIsSet_;
    std::string endpoint_;
    bool endpointIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    SubscriptionExtension extension_;
    bool extensionIsSet_;
    std::vector<BatchAddSubscriptionsRequestBody> subscriptions_;
    bool subscriptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_AddSubscriptionRequestBody_H_
