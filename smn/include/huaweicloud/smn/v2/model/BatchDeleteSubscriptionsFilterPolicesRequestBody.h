
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsFilterPolicesRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsFilterPolicesRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_SMN_V2_EXPORT  BatchDeleteSubscriptionsFilterPolicesRequestBody
    : public ModelBase
{
public:
    BatchDeleteSubscriptionsFilterPolicesRequestBody();
    virtual ~BatchDeleteSubscriptionsFilterPolicesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteSubscriptionsFilterPolicesRequestBody members

    /// <summary>
    /// 订阅者的唯一的资源标识，可通过[查询订阅者列表](ListSubscriptions.xml)获取该标识。
    /// </summary>

    std::vector<std::string>& getSubscriptionUrns();
    bool subscriptionUrnsIsSet() const;
    void unsetsubscriptionUrns();
    void setSubscriptionUrns(const std::vector<std::string>& value);


protected:
    std::vector<std::string> subscriptionUrns_;
    bool subscriptionUrnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsFilterPolicesRequestBody_H_
