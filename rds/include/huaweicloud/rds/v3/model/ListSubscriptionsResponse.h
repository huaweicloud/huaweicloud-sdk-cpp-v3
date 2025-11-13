
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSubscriptionsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSubscriptionsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ListSubscriptionInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSubscriptionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSubscriptionsResponse();
    virtual ~ListSubscriptionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionsResponse members

    /// <summary>
    /// 订阅列表。
    /// </summary>

    std::vector<ListSubscriptionInfo>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();
    void setSubscriptions(const std::vector<ListSubscriptionInfo>& value);

    /// <summary>
    /// 订阅数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListSubscriptionInfo> subscriptions_;
    bool subscriptionsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSubscriptionsResponse_H_
