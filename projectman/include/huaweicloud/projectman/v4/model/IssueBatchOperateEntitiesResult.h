
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueBatchOperateEntitiesResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueBatchOperateEntitiesResult_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueOperateResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项批量变更操作结果
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueBatchOperateEntitiesResult
    : public ModelBase
{
public:
    IssueBatchOperateEntitiesResult();
    virtual ~IssueBatchOperateEntitiesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueBatchOperateEntitiesResult members

    /// <summary>
    /// **参数解释**： 成功的结果。
    /// </summary>

    std::vector<IssueOperateResult>& getSuccess();
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::vector<IssueOperateResult>& value);

    /// <summary>
    /// **参数解释**： 失败的结果。
    /// </summary>

    std::vector<IssueOperateResult>& getFailed();
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(const std::vector<IssueOperateResult>& value);

    /// <summary>
    /// **参数解释**： 删除失败的工作项。 **取值范围**： 不涉及
    /// </summary>

    std::vector<IssueOperateResult>& getUndeletedTrees();
    bool undeletedTreesIsSet() const;
    void unsetundeletedTrees();
    void setUndeletedTrees(const std::vector<IssueOperateResult>& value);


protected:
    std::vector<IssueOperateResult> success_;
    bool successIsSet_;
    std::vector<IssueOperateResult> failed_;
    bool failedIsSet_;
    std::vector<IssueOperateResult> undeletedTrees_;
    bool undeletedTreesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueBatchOperateEntitiesResult_H_
