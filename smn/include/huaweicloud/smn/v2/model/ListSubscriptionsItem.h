
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListSubscriptionsItem_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListSubscriptionsItem_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/SubscriptionsFilterPolicy.h>
#include <string>
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
class HUAWEICLOUD_SMN_V2_EXPORT  ListSubscriptionsItem
    : public ModelBase
{
public:
    ListSubscriptionsItem();
    virtual ~ListSubscriptionsItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionsItem members

    /// <summary>
    /// Topic的唯一的资源标识。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// 不同协议对应不同的endpoint（接受消息的接入点）。目前支持的协议包括：  \&quot;default\&quot;: 默认协议。  “email”：邮件传输协议，endpoint为邮箱地址。  “sms”：短信传输协议，endpoint为手机号码。  “functionstage”：FunctionGraph（函数）传输协议，endpoint为一个函数。  “http”、“https”：HTTP/HTTPS传输协议，endpoint为URL。
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);

    /// <summary>
    /// 订阅者的唯一资源标识。
    /// </summary>

    std::string getSubscriptionUrn() const;
    bool subscriptionUrnIsSet() const;
    void unsetsubscriptionUrn();
    void setSubscriptionUrn(const std::string& value);

    /// <summary>
    /// Topic创建者的项目ID。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 接受消息的接入点。
    /// </summary>

    std::string getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const std::string& value);

    /// <summary>
    /// 备注。
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// 订阅者状态：0表示订阅还未确认，1表示已经确认，3表示已经取消确认。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<SubscriptionsFilterPolicy>& getFilterPolices();
    bool filterPolicesIsSet() const;
    void unsetfilterPolices();
    void setFilterPolices(const std::vector<SubscriptionsFilterPolicy>& value);


protected:
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::string protocol_;
    bool protocolIsSet_;
    std::string subscriptionUrn_;
    bool subscriptionUrnIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string endpoint_;
    bool endpointIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::vector<SubscriptionsFilterPolicy> filterPolices_;
    bool filterPolicesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListSubscriptionsItem_H_
