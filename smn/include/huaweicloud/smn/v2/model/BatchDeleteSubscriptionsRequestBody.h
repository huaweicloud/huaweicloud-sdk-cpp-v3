
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/BatchDeleteSubscriptionsRequestItemInfo.h>
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
class HUAWEICLOUD_SMN_V2_EXPORT  BatchDeleteSubscriptionsRequestBody
    : public ModelBase
{
public:
    BatchDeleteSubscriptionsRequestBody();
    virtual ~BatchDeleteSubscriptionsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteSubscriptionsRequestBody members

    /// <summary>
    /// 订阅者信息列表。
    /// </summary>

    std::vector<BatchDeleteSubscriptionsRequestItemInfo>& getSubscriptionUrns();
    bool subscriptionUrnsIsSet() const;
    void unsetsubscriptionUrns();
    void setSubscriptionUrns(const std::vector<BatchDeleteSubscriptionsRequestItemInfo>& value);


protected:
    std::vector<BatchDeleteSubscriptionsRequestItemInfo> subscriptionUrns_;
    bool subscriptionUrnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchDeleteSubscriptionsRequestBody_H_
