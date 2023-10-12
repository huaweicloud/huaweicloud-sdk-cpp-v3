
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListSubscriptionsByTopicResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListSubscriptionsByTopicResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/ListSubscriptionsItem.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListSubscriptionsByTopicResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSubscriptionsByTopicResponse();
    virtual ~ListSubscriptionsByTopicResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionsByTopicResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 订阅者个数。
    /// </summary>

    int32_t getSubscriptionCount() const;
    bool subscriptionCountIsSet() const;
    void unsetsubscriptionCount();
    void setSubscriptionCount(int32_t value);

    /// <summary>
    /// Subscription结构体。
    /// </summary>

    std::vector<ListSubscriptionsItem>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();
    void setSubscriptions(const std::vector<ListSubscriptionsItem>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    int32_t subscriptionCount_;
    bool subscriptionCountIsSet_;
    std::vector<ListSubscriptionsItem> subscriptions_;
    bool subscriptionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListSubscriptionsByTopicResponse_H_
