
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteIssueNoteResult_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteIssueNoteResult_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 删除操作返回的业务结果，包含删除状态标识。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DeleteIssueNoteResult_result
    : public ModelBase
{
public:
    DeleteIssueNoteResult_result();
    virtual ~DeleteIssueNoteResult_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteIssueNoteResult_result members

    /// <summary>
    /// **参数解释**： 删除工作项评论的业务处理结果。 **取值范围**： - success：删除工作项评论成功。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteIssueNoteResult_result_H_
