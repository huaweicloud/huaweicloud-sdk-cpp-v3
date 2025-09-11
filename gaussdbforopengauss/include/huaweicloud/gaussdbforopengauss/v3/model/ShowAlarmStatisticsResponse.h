
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAlarmStatisticsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAlarmStatisticsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/AlarmLevelStatisticsResult.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/InstanceAlarmLevelStatisticResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowAlarmStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAlarmStatisticsResponse();
    virtual ~ShowAlarmStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAlarmStatisticsResponse members

    /// <summary>
    /// **参数解释**: 告警总数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotalAlarmCount() const;
    bool totalAlarmCountIsSet() const;
    void unsettotalAlarmCount();
    void setTotalAlarmCount(int32_t value);

    /// <summary>
    /// **参数解释**: 环比比率。 **取值范围**: 值为0表示环比没有变化，值为空表示上一周期没有告警。
    /// </summary>

    double getRingPercentage() const;
    bool ringPercentageIsSet() const;
    void unsetringPercentage();
    void setRingPercentage(double value);

    /// <summary>
    /// **参数解释**: 实例级别的告警统计。
    /// </summary>

    std::vector<InstanceAlarmLevelStatisticResult>& getInstanceAlarmLevelStatistics();
    bool instanceAlarmLevelStatisticsIsSet() const;
    void unsetinstanceAlarmLevelStatistics();
    void setInstanceAlarmLevelStatistics(const std::vector<InstanceAlarmLevelStatisticResult>& value);

    /// <summary>
    /// **参数解释**: 全量告警统计。
    /// </summary>

    std::vector<AlarmLevelStatisticsResult>& getTotalAlarmLevelStatistics();
    bool totalAlarmLevelStatisticsIsSet() const;
    void unsettotalAlarmLevelStatistics();
    void setTotalAlarmLevelStatistics(const std::vector<AlarmLevelStatisticsResult>& value);


protected:
    int32_t totalAlarmCount_;
    bool totalAlarmCountIsSet_;
    double ringPercentage_;
    bool ringPercentageIsSet_;
    std::vector<InstanceAlarmLevelStatisticResult> instanceAlarmLevelStatistics_;
    bool instanceAlarmLevelStatisticsIsSet_;
    std::vector<AlarmLevelStatisticsResult> totalAlarmLevelStatistics_;
    bool totalAlarmLevelStatisticsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAlarmStatisticsResponse_H_
