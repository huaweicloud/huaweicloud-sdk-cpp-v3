
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteSubscriptionRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteSubscriptionRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除订阅。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DeleteSubscriptionRequestBody
    : public ModelBase
{
public:
    DeleteSubscriptionRequestBody();
    virtual ~DeleteSubscriptionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSubscriptionRequestBody members

    /// <summary>
    /// 删除的订阅id列表。每次删除的订阅必须属于同一实例。
    /// </summary>

    std::vector<std::string>& getSubscriptionIds();
    bool subscriptionIdsIsSet() const;
    void unsetsubscriptionIds();
    void setSubscriptionIds(const std::vector<std::string>& value);

    /// <summary>
    /// 清理订阅配置。默认为false。  true：清理。 false：不清理。
    /// </summary>

    bool isCleanSubscription() const;
    bool cleanSubscriptionIsSet() const;
    void unsetcleanSubscription();
    void setCleanSubscription(bool value);


protected:
    std::vector<std::string> subscriptionIds_;
    bool subscriptionIdsIsSet_;
    bool cleanSubscription_;
    bool cleanSubscriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteSubscriptionRequestBody_H_
