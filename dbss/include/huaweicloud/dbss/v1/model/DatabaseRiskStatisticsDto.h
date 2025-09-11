
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DatabaseRiskStatisticsDto_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DatabaseRiskStatisticsDto_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/RiskRuleStatistic.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  DatabaseRiskStatisticsDto
    : public ModelBase
{
public:
    DatabaseRiskStatisticsDto();
    virtual ~DatabaseRiskStatisticsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseRiskStatisticsDto members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::string& value);

    /// <summary>
    /// 数据库IP
    /// </summary>

    std::string getDbIp() const;
    bool dbIpIsSet() const;
    void unsetdbIp();
    void setDbIp(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 高风险总量
    /// </summary>

    int64_t getHighRisk() const;
    bool highRiskIsSet() const;
    void unsethighRisk();
    void setHighRisk(int64_t value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 低风险总量
    /// </summary>

    int64_t getLowRisk() const;
    bool lowRiskIsSet() const;
    void unsetlowRisk();
    void setLowRisk(int64_t value);

    /// <summary>
    /// 中风险总量
    /// </summary>

    int64_t getMediumRisk() const;
    bool mediumRiskIsSet() const;
    void unsetmediumRisk();
    void setMediumRisk(int64_t value);

    /// <summary>
    /// 风险规则统计
    /// </summary>

    std::vector<RiskRuleStatistic>& getRiskRule();
    bool riskRuleIsSet() const;
    void unsetriskRule();
    void setRiskRule(const std::vector<RiskRuleStatistic>& value);

    /// <summary>
    /// 总风险数量
    /// </summary>

    int64_t getTotalRisk() const;
    bool totalRiskIsSet() const;
    void unsettotalRisk();
    void setTotalRisk(int64_t value);


protected:
    std::string dbId_;
    bool dbIdIsSet_;
    std::string dbIp_;
    bool dbIpIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    int64_t highRisk_;
    bool highRiskIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    int64_t lowRisk_;
    bool lowRiskIsSet_;
    int64_t mediumRisk_;
    bool mediumRiskIsSet_;
    std::vector<RiskRuleStatistic> riskRule_;
    bool riskRuleIsSet_;
    int64_t totalRisk_;
    bool totalRiskIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DatabaseRiskStatisticsDto_H_
