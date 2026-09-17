
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeletesResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeletesResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/BatchDeletesResponse_result_delete_issue.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 返回结果。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeletesResponse_result
    : public ModelBase
{
public:
    BatchDeletesResponse_result();
    virtual ~BatchDeletesResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeletesResponse_result members

    /// <summary>
    /// 
    /// </summary>

    BatchDeletesResponse_result_delete_issue getDeleteIssue() const;
    bool deleteIssueIsSet() const;
    void unsetdeleteIssue();
    void setDeleteIssue(const BatchDeletesResponse_result_delete_issue& value);


protected:
    BatchDeletesResponse_result_delete_issue deleteIssue_;
    bool deleteIssueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeletesResponse_result_H_
