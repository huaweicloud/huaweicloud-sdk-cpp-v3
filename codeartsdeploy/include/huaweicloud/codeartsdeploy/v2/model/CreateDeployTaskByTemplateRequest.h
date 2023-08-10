
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CreateDeployTaskByTemplateRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CreateDeployTaskByTemplateRequest_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/TemplateTaskRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  CreateDeployTaskByTemplateRequest
    : public ModelBase
{
public:
    CreateDeployTaskByTemplateRequest();
    virtual ~CreateDeployTaskByTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDeployTaskByTemplateRequest members

    /// <summary>
    /// 
    /// </summary>

    TemplateTaskRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TemplateTaskRequestBody& value);


protected:
    TemplateTaskRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDeployTaskByTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDeployTaskByTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_CreateDeployTaskByTemplateRequest_H_
