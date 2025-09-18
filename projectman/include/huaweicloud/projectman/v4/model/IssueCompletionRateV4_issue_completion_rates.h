
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCompletionRateV4_issue_completion_rates_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCompletionRateV4_issue_completion_rates_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueCompletionRateV4_issue_status.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueCompletionRateV4_issue_completion_rates
    : public ModelBase
{
public:
    IssueCompletionRateV4_issue_completion_rates();
    virtual ~IssueCompletionRateV4_issue_completion_rates();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueCompletionRateV4_issue_completion_rates members

    /// <summary>
    /// 
    /// </summary>

    IssueCompletionRateV4_issue_status getIssueStatus() const;
    bool issueStatusIsSet() const;
    void unsetissueStatus();
    void setIssueStatus(const IssueCompletionRateV4_issue_status& value);

    /// <summary>
    /// 工作项类型id,1需求,2任务/Task,3缺陷/Bug,5Epic,6Feature,7Story
    /// </summary>

    int32_t getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(int32_t value);


protected:
    IssueCompletionRateV4_issue_status issueStatus_;
    bool issueStatusIsSet_;
    int32_t trackerId_;
    bool trackerIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCompletionRateV4_issue_completion_rates_H_
