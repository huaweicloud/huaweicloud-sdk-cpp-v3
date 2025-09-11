
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstanceAlarmLevelStatisticResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstanceAlarmLevelStatisticResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/AlarmLevelStatisticsResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  InstanceAlarmLevelStatisticResult
    : public ModelBase
{
public:
    InstanceAlarmLevelStatisticResult();
    virtual ~InstanceAlarmLevelStatisticResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceAlarmLevelStatisticResult members

    /// <summary>
    /// **参数解释**: 实例ID。 **取值范围**: 只能由英文字母、数字组成，且长度为36个字符。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**: 告警总数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**: 实例级别的各等级告警数量统计。
    /// </summary>

    std::vector<AlarmLevelStatisticsResult>& getAlarmLevelStatistics();
    bool alarmLevelStatisticsIsSet() const;
    void unsetalarmLevelStatistics();
    void setAlarmLevelStatistics(const std::vector<AlarmLevelStatisticsResult>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<AlarmLevelStatisticsResult> alarmLevelStatistics_;
    bool alarmLevelStatisticsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstanceAlarmLevelStatisticResult_H_
