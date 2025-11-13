
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySubscriptionsRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySubscriptionsRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/OperateUsedJobSchedule.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改订阅详情。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifySubscriptionsRequestBody
    : public ModelBase
{
public:
    ModifySubscriptionsRequestBody();
    virtual ~ModifySubscriptionsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifySubscriptionsRequestBody members

    /// <summary>
    /// 修改的订阅id列表。每次修改的订阅必须属于同一实例。
    /// </summary>

    std::vector<std::string>& getSubscriptionIds();
    bool subscriptionIdsIsSet() const;
    void unsetsubscriptionIds();
    void setSubscriptionIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    OperateUsedJobSchedule getJobSchedule() const;
    bool jobScheduleIsSet() const;
    void unsetjobSchedule();
    void setJobSchedule(const OperateUsedJobSchedule& value);


protected:
    std::vector<std::string> subscriptionIds_;
    bool subscriptionIdsIsSet_;
    OperateUsedJobSchedule jobSchedule_;
    bool jobScheduleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySubscriptionsRequestBody_H_
