
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscription4PublicationInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscription4PublicationInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/ReplicationUserInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 给发布创建订阅时需要的参数。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateSubscription4PublicationInfo
    : public ModelBase
{
public:
    CreateSubscription4PublicationInfo();
    virtual ~CreateSubscription4PublicationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubscription4PublicationInfo members

    /// <summary>
    /// 订阅服务器来源为云上实例时的订阅实例id。
    /// </summary>

    std::string getSubscriptionInstanceId() const;
    bool subscriptionInstanceIdIsSet() const;
    void unsetsubscriptionInstanceId();
    void setSubscriptionInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReplicationUserInfo getUserInfo() const;
    bool userInfoIsSet() const;
    void unsetuserInfo();
    void setUserInfo(const ReplicationUserInfo& value);


protected:
    std::string subscriptionInstanceId_;
    bool subscriptionInstanceIdIsSet_;
    ReplicationUserInfo userInfo_;
    bool userInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateSubscription4PublicationInfo_H_
