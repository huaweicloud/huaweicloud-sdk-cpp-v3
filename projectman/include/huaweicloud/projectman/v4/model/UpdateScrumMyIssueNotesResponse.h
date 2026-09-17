
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateScrumMyIssueNotesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateScrumMyIssueNotesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/UpdateNoteResponse_result.h>
#include <string>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateScrumMyIssueNotesResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateScrumMyIssueNotesResponse();
    virtual ~UpdateScrumMyIssueNotesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateScrumMyIssueNotesResponse members

    /// <summary>
    /// 
    /// </summary>

    UpdateNoteResponse_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const UpdateNoteResponse_result& value);

    /// <summary>
    /// **参数解释：** 返回状态。 **取值范围：** success：返回成功。 error：返回失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    UpdateNoteResponse_result result_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateScrumMyIssueNotesResponse_H_
