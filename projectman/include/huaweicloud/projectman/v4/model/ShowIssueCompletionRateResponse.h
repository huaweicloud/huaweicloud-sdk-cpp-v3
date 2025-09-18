
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueCompletionRateResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueCompletionRateResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueCompletionRateV4_issue_completion_rates.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIssueCompletionRateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIssueCompletionRateResponse();
    virtual ~ShowIssueCompletionRateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIssueCompletionRateResponse members

    /// <summary>
    /// 不同类型的工作项完成率
    /// </summary>

    std::vector<IssueCompletionRateV4_issue_completion_rates>& getIssueCompletionRates();
    bool issueCompletionRatesIsSet() const;
    void unsetissueCompletionRates();
    void setIssueCompletionRates(const std::vector<IssueCompletionRateV4_issue_completion_rates>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<IssueCompletionRateV4_issue_completion_rates> issueCompletionRates_;
    bool issueCompletionRatesIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueCompletionRateResponse_H_
