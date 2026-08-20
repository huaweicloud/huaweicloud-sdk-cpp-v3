
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIpdProcessInstanceResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIpdProcessInstanceResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateIpdProcessInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateIpdProcessInstanceResponse();
    virtual ~CreateIpdProcessInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIpdProcessInstanceResponse members

    /// <summary>
    /// **参数解释**： 返回状态。 **取值范围**： success：响应成功。 error：响应失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 返回消息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProcessInstanceResponse_result getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const ProcessInstanceResponse_result& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    ProcessInstanceResponse_result result_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIpdProcessInstanceResponse_H_
