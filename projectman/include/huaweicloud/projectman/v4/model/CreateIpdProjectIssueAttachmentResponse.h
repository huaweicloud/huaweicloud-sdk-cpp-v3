
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIpdProjectIssueAttachmentResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIpdProjectIssueAttachmentResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/AttachmentVO.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateIpdProjectIssueAttachmentResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateIpdProjectIssueAttachmentResponse();
    virtual ~CreateIpdProjectIssueAttachmentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIpdProjectIssueAttachmentResponse members

    /// <summary>
    /// 返回信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 返回附件对象
    /// </summary>

    std::vector<AttachmentVO>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<AttachmentVO>& value);

    /// <summary>
    /// 返回状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string message_;
    bool messageIsSet_;
    std::vector<AttachmentVO> result_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIpdProjectIssueAttachmentResponse_H_
