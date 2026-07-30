
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthorizationRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthorizationRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ValidateAuthorizationRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ValidateAuthorizationRequest
    : public ModelBase
{
public:
    ValidateAuthorizationRequest();
    virtual ~ValidateAuthorizationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateAuthorizationRequest members

    /// <summary>
    /// **参数解释**：工作空间ID。获取方法请参见[[查询工作空间列表](ListWorkspace.xml)](tag:hc,hk)。未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ValidateAuthorizationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ValidateAuthorizationRequestBody& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    ValidateAuthorizationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ValidateAuthorizationRequest& dereference_from_shared_ptr(std::shared_ptr<ValidateAuthorizationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ValidateAuthorizationRequest_H_
