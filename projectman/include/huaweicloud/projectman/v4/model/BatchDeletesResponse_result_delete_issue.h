
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeletesResponse_result_delete_issue_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeletesResponse_result_delete_issue_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/projectman/v4/model/BatchDeletesResponse_result_delete_issue_del_issue.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 删除的工作项。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeletesResponse_result_delete_issue
    : public ModelBase
{
public:
    BatchDeletesResponse_result_delete_issue();
    virtual ~BatchDeletesResponse_result_delete_issue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeletesResponse_result_delete_issue members

    /// <summary>
    /// **参数解释：** 删除的工作项id。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<int32_t>& getDelIssueId();
    bool delIssueIdIsSet() const;
    void unsetdelIssueId();
    void setDelIssueId(std::vector<int32_t> value);

    /// <summary>
    /// **参数解释：** 删除的工作项详情。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<BatchDeletesResponse_result_delete_issue_del_issue>& getDelIssue();
    bool delIssueIsSet() const;
    void unsetdelIssue();
    void setDelIssue(const std::vector<BatchDeletesResponse_result_delete_issue_del_issue>& value);


protected:
    std::vector<int32_t> delIssueId_;
    bool delIssueIdIsSet_;
    std::vector<BatchDeletesResponse_result_delete_issue_del_issue> delIssue_;
    bool delIssueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeletesResponse_result_delete_issue_H_
