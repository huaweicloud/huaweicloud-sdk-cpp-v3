
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectSummaryV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectSummaryV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueCompletionRateResponseV4.h>
#include <huaweicloud/projectman/v4/model/BugStatisticResponseV4.h>
#include <huaweicloud/projectman/v4/model/DemandStatisticResponseV4.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowProjectSummaryV4Response
    : public ModelBase, public HttpResponse
{
public:
    ShowProjectSummaryV4Response();
    virtual ~ShowProjectSummaryV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectSummaryV4Response members

    /// <summary>
    /// bug统计列表
    /// </summary>

    std::vector<BugStatisticResponseV4>& getBugStatistics();
    bool bugStatisticsIsSet() const;
    void unsetbugStatistics();
    void setBugStatistics(const std::vector<BugStatisticResponseV4>& value);

    /// <summary>
    /// 按模块统计列表
    /// </summary>

    std::vector<DemandStatisticResponseV4>& getDemandStatistics();
    bool demandStatisticsIsSet() const;
    void unsetdemandStatistics();
    void setDemandStatistics(const std::vector<DemandStatisticResponseV4>& value);

    /// <summary>
    /// 按工作项类型统计列表
    /// </summary>

    std::vector<IssueCompletionRateResponseV4>& getIssueCompletionRates();
    bool issueCompletionRatesIsSet() const;
    void unsetissueCompletionRates();
    void setIssueCompletionRates(const std::vector<IssueCompletionRateResponseV4>& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::vector<BugStatisticResponseV4> bugStatistics_;
    bool bugStatisticsIsSet_;
    std::vector<DemandStatisticResponseV4> demandStatistics_;
    bool demandStatisticsIsSet_;
    std::vector<IssueCompletionRateResponseV4> issueCompletionRates_;
    bool issueCompletionRatesIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectSummaryV4Response_H_
