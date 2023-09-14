
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_CancelSubscriptionRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_CancelSubscriptionRequest_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  CancelSubscriptionRequest
    : public ModelBase
{
public:
    CancelSubscriptionRequest();
    virtual ~CancelSubscriptionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CancelSubscriptionRequest members

    /// <summary>
    /// 订阅者的唯一的资源标识，可通过[查询订阅者列表](ListSubscriptions.xml)获取该标识。
    /// </summary>

    std::string getSubscriptionUrn() const;
    bool subscriptionUrnIsSet() const;
    void unsetsubscriptionUrn();
    void setSubscriptionUrn(const std::string& value);


protected:
    std::string subscriptionUrn_;
    bool subscriptionUrnIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CancelSubscriptionRequest& dereference_from_shared_ptr(std::shared_ptr<CancelSubscriptionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_CancelSubscriptionRequest_H_
