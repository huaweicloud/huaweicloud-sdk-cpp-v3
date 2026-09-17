
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteScrumMyIssueNotesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteScrumMyIssueNotesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/DeleteIssueNoteResult_result.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DeleteScrumMyIssueNotesResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteScrumMyIssueNotesResponse();
    virtual ~DeleteScrumMyIssueNotesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteScrumMyIssueNotesResponse members

    /// <summary>
    /// 
    /// </summary>

    DeleteIssueNoteResult_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const DeleteIssueNoteResult_result& value);

    /// <summary>
    /// **参数解释**： 接口整体响应状态。 **取值范围**： - success：接口请求成功。 - error：接口请求失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    DeleteIssueNoteResult_result result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteScrumMyIssueNotesResponse_H_
