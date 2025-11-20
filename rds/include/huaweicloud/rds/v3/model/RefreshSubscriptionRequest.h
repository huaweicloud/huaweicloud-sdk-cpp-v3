
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RefreshSubscriptionRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RefreshSubscriptionRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RefreshSubscriptionRequest
    : public ModelBase
{
public:
    RefreshSubscriptionRequest();
    virtual ~RefreshSubscriptionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RefreshSubscriptionRequest members

    /// <summary>
    /// 语言。默认en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 订阅ID
    /// </summary>

    std::string getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();
    void setSubscriptionId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string subscriptionId_;
    bool subscriptionIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RefreshSubscriptionRequest& dereference_from_shared_ptr(std::shared_ptr<RefreshSubscriptionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RefreshSubscriptionRequest_H_
