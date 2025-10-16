
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscriptionRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscriptionRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/CreateSubscriptionInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建发布详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateSubscriptionRequestBody
    : public ModelBase
{
public:
    CreateSubscriptionRequestBody();
    virtual ~CreateSubscriptionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscriptionRequestBody members

    /// <summary>
    /// 订阅详情。一次最多创建十个订阅。
    /// </summary>

    std::vector<CreateSubscriptionInfo>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();
    void setSubscriptions(const std::vector<CreateSubscriptionInfo>& value);

    /// <summary>
    /// 给发布创建订阅时的发布id。给发布创建订阅时必传，不传时则为创建本地订阅。
    /// </summary>

    std::string getCurrentPublicationId() const;
    bool currentPublicationIdIsSet() const;
    void unsetcurrentPublicationId();
    void setCurrentPublicationId(const std::string& value);


protected:
    std::vector<CreateSubscriptionInfo> subscriptions_;
    bool subscriptionsIsSet_;
    std::string currentPublicationId_;
    bool currentPublicationIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscriptionRequestBody_H_
