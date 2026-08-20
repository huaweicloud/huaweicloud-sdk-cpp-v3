
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchBaselineIssueResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchBaselineIssueResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueBaselineResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量基线工作项的结果项
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchBaselineIssueResponse_result
    : public ModelBase
{
public:
    BatchBaselineIssueResponse_result();
    virtual ~BatchBaselineIssueResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchBaselineIssueResponse_result members

    /// <summary>
    /// 基线成功的工作项列表。
    /// </summary>

    std::vector<IssueBaselineResult>& getSuccess();
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::vector<IssueBaselineResult>& value);

    /// <summary>
    /// 基线失败的工作项列表。
    /// </summary>

    std::vector<IssueBaselineResult>& getFailed();
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(const std::vector<IssueBaselineResult>& value);

    /// <summary>
    /// 成功数量。
    /// </summary>

    int32_t getSuccessNum() const;
    bool successNumIsSet() const;
    void unsetsuccessNum();
    void setSuccessNum(int32_t value);

    /// <summary>
    /// 失败数量。
    /// </summary>

    int32_t getFailNum() const;
    bool failNumIsSet() const;
    void unsetfailNum();
    void setFailNum(int32_t value);


protected:
    std::vector<IssueBaselineResult> success_;
    bool successIsSet_;
    std::vector<IssueBaselineResult> failed_;
    bool failedIsSet_;
    int32_t successNum_;
    bool successNumIsSet_;
    int32_t failNum_;
    bool failNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchBaselineIssueResponse_result_H_
