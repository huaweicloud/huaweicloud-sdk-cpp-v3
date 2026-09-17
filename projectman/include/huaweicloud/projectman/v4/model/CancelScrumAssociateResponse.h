
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CancelScrumAssociateResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CancelScrumAssociateResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CancelAssociateIssueResponse_result.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CancelScrumAssociateResponse
    : public ModelBase, public HttpResponse
{
public:
    CancelScrumAssociateResponse();
    virtual ~CancelScrumAssociateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelScrumAssociateResponse members

    /// <summary>
    /// 
    /// </summary>

    CancelAssociateIssueResponse_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const CancelAssociateIssueResponse_result& value);

    /// <summary>
    /// **参数解释**： 接口整体响应状态。 **取值范围**： - success：取消关联工作项成功。 - error：取消关联工作项失败,详见错误码说明。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    CancelAssociateIssueResponse_result result_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CancelScrumAssociateResponse_H_
