
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueConfigFieldsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueConfigFieldsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/IssueConfigFieldsResponseBody_result.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIssueConfigFieldsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIssueConfigFieldsResponse();
    virtual ~ShowIssueConfigFieldsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIssueConfigFieldsResponse members

    /// <summary>
    /// 状态码
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 响应信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueConfigFieldsResponseBody_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const IssueConfigFieldsResponseBody_result& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    IssueConfigFieldsResponseBody_result result_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueConfigFieldsResponse_H_
