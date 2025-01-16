
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_PollingPolicySubscriptionDetails_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_PollingPolicySubscriptionDetails_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_SMN_V2_EXPORT  PollingPolicySubscriptionDetails
    : public ModelBase
{
public:
    PollingPolicySubscriptionDetails();
    virtual ~PollingPolicySubscriptionDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PollingPolicySubscriptionDetails members

    /// <summary>
    /// 当前轮询的序号。
    /// </summary>

    std::string getSubscriptionUrn() const;
    bool subscriptionUrnIsSet() const;
    void unsetsubscriptionUrn();
    void setSubscriptionUrn(const std::string& value);

    /// <summary>
    /// 订阅终端urn列表。
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


protected:
    std::string subscriptionUrn_;
    bool subscriptionUrnIsSet_;
    std::string endpoint_;
    bool endpointIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_PollingPolicySubscriptionDetails_H_
