
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RecyclePolicy_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RecyclePolicy_H_


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
/// 回收策略。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RecyclePolicy
    : public ModelBase
{
public:
    RecyclePolicy();
    virtual ~RecyclePolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecyclePolicy members

    /// <summary>
    /// 保留时间，设置已删除实例保留天数，支持整数，可设置范围为1~7天。  当“retention_period_in_days”为空，保留时间默认是7天。
    /// </summary>

    std::string getRetentionPeriodInDays() const;
    bool retentionPeriodInDaysIsSet() const;
    void unsetretentionPeriodInDays();
    void setRetentionPeriodInDays(const std::string& value);


protected:
    std::string retentionPeriodInDays_;
    bool retentionPeriodInDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RecyclePolicy_H_
