
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAuthorizationRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAuthorizationRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AuthorizationRequest.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateAuthorizationRequest
    : public ModelBase
{
public:
    CreateAuthorizationRequest();
    virtual ~CreateAuthorizationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAuthorizationRequest members

    /// <summary>
    /// 
    /// </summary>

    AuthorizationRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AuthorizationRequest& value);


protected:
    AuthorizationRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAuthorizationRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAuthorizationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAuthorizationRequest_H_
