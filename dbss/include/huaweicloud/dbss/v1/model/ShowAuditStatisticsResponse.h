
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditStatisticsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditStatisticsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/RuleRiskStatisticsDto.h>
#include <huaweicloud/dbss/v1/model/DatabaseRiskStatisticsDto.h>
#include <huaweicloud/dbss/v1/model/UnSupportAuditInfoResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditStatisticsResponse();
    virtual ~ShowAuditStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditStatisticsResponse members

    /// <summary>
    /// 数据库风险统计
    /// </summary>

    std::vector<DatabaseRiskStatisticsDto>& getDbRiskStatistics();
    bool dbRiskStatisticsIsSet() const;
    void unsetdbRiskStatistics();
    void setDbRiskStatistics(const std::vector<DatabaseRiskStatisticsDto>& value);

    /// <summary>
    /// 高风险总量
    /// </summary>

    int64_t getHighRiskTotal() const;
    bool highRiskTotalIsSet() const;
    void unsethighRiskTotal();
    void setHighRiskTotal(int64_t value);

    /// <summary>
    /// 低风险总量
    /// </summary>

    int64_t getLowRiskTotal() const;
    bool lowRiskTotalIsSet() const;
    void unsetlowRiskTotal();
    void setLowRiskTotal(int64_t value);

    /// <summary>
    /// 中风险总量
    /// </summary>

    int64_t getMediumRiskTotal() const;
    bool mediumRiskTotalIsSet() const;
    void unsetmediumRiskTotal();
    void setMediumRiskTotal(int64_t value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 风险规则统计
    /// </summary>

    std::vector<RuleRiskStatisticsDto>& getRuleRiskStatistics();
    bool ruleRiskStatisticsIsSet() const;
    void unsetruleRiskStatistics();
    void setRuleRiskStatistics(const std::vector<RuleRiskStatisticsDto>& value);

    /// <summary>
    /// 
    /// </summary>

    UnSupportAuditInfoResponse getUnsupportedAuditInfos() const;
    bool unsupportedAuditInfosIsSet() const;
    void unsetunsupportedAuditInfos();
    void setUnsupportedAuditInfos(const UnSupportAuditInfoResponse& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);


protected:
    std::vector<DatabaseRiskStatisticsDto> dbRiskStatistics_;
    bool dbRiskStatisticsIsSet_;
    int64_t highRiskTotal_;
    bool highRiskTotalIsSet_;
    int64_t lowRiskTotal_;
    bool lowRiskTotalIsSet_;
    int64_t mediumRiskTotal_;
    bool mediumRiskTotalIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<RuleRiskStatisticsDto> ruleRiskStatistics_;
    bool ruleRiskStatisticsIsSet_;
    UnSupportAuditInfoResponse unsupportedAuditInfos_;
    bool unsupportedAuditInfosIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditStatisticsResponse_H_
