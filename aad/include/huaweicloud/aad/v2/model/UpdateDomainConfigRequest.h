
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateDomainConfigRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateDomainConfigRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/UpdateDomainConfigRequestBody.h>
#include <string>

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
class HUAWEICLOUD_AAD_V2_EXPORT  UpdateDomainConfigRequest
    : public ModelBase
{
public:
    UpdateDomainConfigRequest();
    virtual ~UpdateDomainConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainConfigRequest members

    /// <summary>
    /// 域名id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateDomainConfigRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateDomainConfigRequestBody& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    UpdateDomainConfigRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDomainConfigRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDomainConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateDomainConfigRequest_H_
