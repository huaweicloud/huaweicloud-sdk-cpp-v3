
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteIpdImageInIssueResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteIpdImageInIssueResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/IssueEntity.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  DeleteIpdImageInIssueResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteIpdImageInIssueResponse();
    virtual ~DeleteIpdImageInIssueResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteIpdImageInIssueResponse members

    /// <summary>
    /// 请求状态,成功为success，失败时会抛出异常
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 请求信息，一般情况为空。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueEntity getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const IssueEntity& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    IssueEntity result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_DeleteIpdImageInIssueResponse_H_
