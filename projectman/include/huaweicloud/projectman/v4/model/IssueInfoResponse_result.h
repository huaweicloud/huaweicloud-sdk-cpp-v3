
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueInfoResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueInfoResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 返回信息。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueInfoResponse_result
    : public ModelBase
{
public:
    IssueInfoResponse_result();
    virtual ~IssueInfoResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueInfoResponse_result members

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2 getIssue() const;
    bool issueIsSet() const;
    void unsetissue();
    void setIssue(const IssueDetailResponseV2& value);


protected:
    IssueDetailResponseV2 issue_;
    bool issueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueInfoResponse_result_H_
