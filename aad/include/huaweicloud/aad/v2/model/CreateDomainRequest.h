
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_CreateDomainRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_CreateDomainRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/CreateAadDomainRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  CreateDomainRequest
    : public ModelBase
{
public:
    CreateDomainRequest();
    virtual ~CreateDomainRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDomainRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateAadDomainRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateAadDomainRequestBody& value);


protected:
    CreateAadDomainRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDomainRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDomainRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_CreateDomainRequest_H_
