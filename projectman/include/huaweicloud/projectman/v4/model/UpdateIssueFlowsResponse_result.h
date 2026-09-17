
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIssueFlowsResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIssueFlowsResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueNew.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 工作项状态流转的返回结果。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateIssueFlowsResponse_result
    : public ModelBase
{
public:
    UpdateIssueFlowsResponse_result();
    virtual ~UpdateIssueFlowsResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIssueFlowsResponse_result members

    /// <summary>
    /// 
    /// </summary>

    IssueNew getIssue() const;
    bool issueIsSet() const;
    void unsetissue();
    void setIssue(const IssueNew& value);


protected:
    IssueNew issue_;
    bool issueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIssueFlowsResponse_result_H_
