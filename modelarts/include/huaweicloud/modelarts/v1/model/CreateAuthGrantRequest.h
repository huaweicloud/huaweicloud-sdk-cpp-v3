
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAuthGrantRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAuthGrantRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/AuthGrantRequest.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateAuthGrantRequest
    : public ModelBase
{
public:
    CreateAuthGrantRequest();
    virtual ~CreateAuthGrantRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAuthGrantRequest members

    /// <summary>
    /// 
    /// </summary>

    AuthGrantRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AuthGrantRequest& value);


protected:
    AuthGrantRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAuthGrantRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAuthGrantRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAuthGrantRequest_H_
