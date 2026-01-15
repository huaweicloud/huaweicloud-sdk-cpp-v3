
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleRiskStatisticsDto_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleRiskStatisticsDto_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/AuditInstanceRiskCount.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  RuleRiskStatisticsDto
    : public ModelBase
{
public:
    RuleRiskStatisticsDto();
    virtual ~RuleRiskStatisticsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleRiskStatisticsDto members

    /// <summary>
    /// 数量
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 实例数据库风险汇总
    /// </summary>

    std::vector<AuditInstanceRiskCount>& getInstanceRiskCount();
    bool instanceRiskCountIsSet() const;
    void unsetinstanceRiskCount();
    void setInstanceRiskCount(const std::vector<AuditInstanceRiskCount>& value);

    /// <summary>
    /// 规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);


protected:
    int64_t count_;
    bool countIsSet_;
    std::vector<AuditInstanceRiskCount> instanceRiskCount_;
    bool instanceRiskCountIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RuleRiskStatisticsDto_H_
