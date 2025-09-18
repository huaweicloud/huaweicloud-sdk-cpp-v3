
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCompletionRateResponseV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCompletionRateResponseV4_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueStatusResponseV4.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 项目工作项概览信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueCompletionRateResponseV4
    : public ModelBase
{
public:
    IssueCompletionRateResponseV4();
    virtual ~IssueCompletionRateResponseV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueCompletionRateResponseV4 members

    /// <summary>
    /// 
    /// </summary>

    IssueStatusResponseV4 getIssueStatus() const;
    bool issueStatusIsSet() const;
    void unsetissueStatus();
    void setIssueStatus(const IssueStatusResponseV4& value);

    /// <summary>
    /// 工作项类型,2任务/Task,3缺陷/Bug,5Epic,6Feature,7Story
    /// </summary>

    int32_t getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(int32_t value);


protected:
    IssueStatusResponseV4 issueStatus_;
    bool issueStatusIsSet_;
    int32_t trackerId_;
    bool trackerIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCompletionRateResponseV4_H_
