
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceActiveCertificateResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceActiveCertificateResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/CertificateDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateApplicationInstanceActiveCertificateResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateApplicationInstanceActiveCertificateResponse();
    virtual ~UpdateApplicationInstanceActiveCertificateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateApplicationInstanceActiveCertificateResponse members

    /// <summary>
    /// 
    /// </summary>

    CertificateDto getApplicationInstanceCertificate() const;
    bool applicationInstanceCertificateIsSet() const;
    void unsetapplicationInstanceCertificate();
    void setApplicationInstanceCertificate(const CertificateDto& value);


protected:
    CertificateDto applicationInstanceCertificate_;
    bool applicationInstanceCertificateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceActiveCertificateResponse_H_
