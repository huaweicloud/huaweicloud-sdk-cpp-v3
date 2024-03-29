
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_SetCertForDomainRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_SetCertForDomainRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/CertificateBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  SetCertForDomainRequest
    : public ModelBase
{
public:
    SetCertForDomainRequest();
    virtual ~SetCertForDomainRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetCertForDomainRequest members

    /// <summary>
    /// 
    /// </summary>

    CertificateBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CertificateBody& value);


protected:
    CertificateBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetCertForDomainRequest& dereference_from_shared_ptr(std::shared_ptr<SetCertForDomainRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_SetCertForDomainRequest_H_
