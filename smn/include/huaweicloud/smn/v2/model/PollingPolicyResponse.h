
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_PollingPolicyResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_PollingPolicyResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/PollingPolicySubscriptionDetails.h>
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
class HUAWEICLOUD_SMN_V2_EXPORT  PollingPolicyResponse
    : public ModelBase
{
public:
    PollingPolicyResponse();
    virtual ~PollingPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PollingPolicyResponse members

    /// <summary>
    /// 当前轮询的序号。
    /// </summary>

    int32_t getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(int32_t value);

    /// <summary>
    /// 订阅终端urn列表。
    /// </summary>

    std::vector<PollingPolicySubscriptionDetails>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();
    void setSubscriptions(const std::vector<PollingPolicySubscriptionDetails>& value);


protected:
    int32_t order_;
    bool orderIsSet_;
    std::vector<PollingPolicySubscriptionDetails> subscriptions_;
    bool subscriptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_PollingPolicyResponse_H_
