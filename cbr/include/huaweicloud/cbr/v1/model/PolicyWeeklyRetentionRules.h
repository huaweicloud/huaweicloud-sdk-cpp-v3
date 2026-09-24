
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyWeeklyRetentionRules_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyWeeklyRetentionRules_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyWeeklyRetentionRules
    : public ModelBase
{
public:
    PolicyWeeklyRetentionRules();
    virtual ~PolicyWeeklyRetentionRules();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyWeeklyRetentionRules members

    /// <summary>
    /// 设置每个星期中的指定天为周备备份
    /// </summary>

    std::vector<std::string>& getDaysOfWeek();
    bool daysOfWeekIsSet() const;
    void unsetdaysOfWeek();
    void setDaysOfWeek(const std::vector<std::string>& value);

    /// <summary>
    /// 周备的保留时间，取值范围为1-5200，以及-1，单位为周，-1代表周备策略不启用
    /// </summary>

    int32_t getRetentionDurationPeriods() const;
    bool retentionDurationPeriodsIsSet() const;
    void unsetretentionDurationPeriods();
    void setRetentionDurationPeriods(int32_t value);


protected:
    std::vector<std::string> daysOfWeek_;
    bool daysOfWeekIsSet_;
    int32_t retentionDurationPeriods_;
    bool retentionDurationPeriodsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyWeeklyRetentionRules_H_
