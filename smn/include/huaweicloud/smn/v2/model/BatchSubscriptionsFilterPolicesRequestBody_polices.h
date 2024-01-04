
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchSubscriptionsFilterPolicesRequestBody_polices_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchSubscriptionsFilterPolicesRequestBody_polices_H_


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
class HUAWEICLOUD_SMN_V2_EXPORT  BatchSubscriptionsFilterPolicesRequestBody_polices
    : public ModelBase
{
public:
    BatchSubscriptionsFilterPolicesRequestBody_polices();
    virtual ~BatchSubscriptionsFilterPolicesRequestBody_polices();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchSubscriptionsFilterPolicesRequestBody_polices members

    /// <summary>
    /// 订阅者的唯一的资源标识，可通过[查询订阅者列表](ListSubscriptions.xml)获取该标识。
    /// </summary>

    std::string getSubscriptionUrn() const;
    bool subscriptionUrnIsSet() const;
    void unsetsubscriptionUrn();
    void setSubscriptionUrn(const std::string& value);

    /// <summary>
    /// 订阅者的过滤策略。策略name不能重复
    /// </summary>

    std::vector<SubscriptionsFilterPolicy>& getFilterPolices();
    bool filterPolicesIsSet() const;
    void unsetfilterPolices();
    void setFilterPolices(const std::vector<SubscriptionsFilterPolicy>& value);


protected:
    std::string subscriptionUrn_;
    bool subscriptionUrnIsSet_;
    std::vector<SubscriptionsFilterPolicy> filterPolices_;
    bool filterPolicesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchSubscriptionsFilterPolicesRequestBody_polices_H_
