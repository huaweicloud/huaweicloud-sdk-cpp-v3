
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowErrorInfoResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowErrorInfoResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// error info struct
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowErrorInfoResp
    : public ModelBase
{
public:
    WorkflowErrorInfoResp();
    virtual ~WorkflowErrorInfoResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowErrorInfoResp members

    /// <summary>
    /// **参数解释**：错误码。 **取值范围**：不涉及。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// **参数解释**：错误信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowErrorInfoResp_H_
