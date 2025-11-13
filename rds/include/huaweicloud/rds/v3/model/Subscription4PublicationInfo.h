
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Subscription4PublicationInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Subscription4PublicationInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 发布下的订阅信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Subscription4PublicationInfo
    : public ModelBase
{
public:
    Subscription4PublicationInfo();
    virtual ~Subscription4PublicationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Subscription4PublicationInfo members

    /// <summary>
    /// 订阅服务器名称。
    /// </summary>

    std::string getSubscriptionInstanceName() const;
    bool subscriptionInstanceNameIsSet() const;
    void unsetsubscriptionInstanceName();
    void setSubscriptionInstanceName(const std::string& value);

    /// <summary>
    /// 订阅服务器ip。
    /// </summary>

    std::string getSubscriptionInstanceIp() const;
    bool subscriptionInstanceIpIsSet() const;
    void unsetsubscriptionInstanceIp();
    void setSubscriptionInstanceIp(const std::string& value);

    /// <summary>
    /// 订阅实例id。
    /// </summary>

    std::string getSubscriptionInstanceId() const;
    bool subscriptionInstanceIdIsSet() const;
    void unsetsubscriptionInstanceId();
    void setSubscriptionInstanceId(const std::string& value);


protected:
    std::string subscriptionInstanceName_;
    bool subscriptionInstanceNameIsSet_;
    std::string subscriptionInstanceIp_;
    bool subscriptionInstanceIpIsSet_;
    std::string subscriptionInstanceId_;
    bool subscriptionInstanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Subscription4PublicationInfo_H_
