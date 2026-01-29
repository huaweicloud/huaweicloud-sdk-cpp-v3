
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueListResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueListResult_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项列表查询结果
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueListResult
    : public ModelBase
{
public:
    IssueListResult();
    virtual ~IssueListResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueListResult members

    /// <summary>
    /// **参数解释：** 工作项列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<IssueVO>& getIssues();
    bool issuesIsSet() const;
    void unsetissues();
    void setIssues(const std::vector<IssueVO>& value);

    /// <summary>
    /// **参数解释：** 符合过滤条件的工作项总数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<IssueVO> issues_;
    bool issuesIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueListResult_H_
