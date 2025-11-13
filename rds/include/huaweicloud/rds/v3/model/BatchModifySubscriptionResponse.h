
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchModifySubscriptionResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchModifySubscriptionResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/BatchOperateResponseInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  BatchModifySubscriptionResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchModifySubscriptionResponse();
    virtual ~BatchModifySubscriptionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchModifySubscriptionResponse members

    /// <summary>
    /// 修改订阅结果。
    /// </summary>

    std::vector<BatchOperateResponseInfo>& getSubscriptions();
    bool subscriptionsIsSet() const;
    void unsetsubscriptions();
    void setSubscriptions(const std::vector<BatchOperateResponseInfo>& value);


protected:
    std::vector<BatchOperateResponseInfo> subscriptions_;
    bool subscriptionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchModifySubscriptionResponse_H_
