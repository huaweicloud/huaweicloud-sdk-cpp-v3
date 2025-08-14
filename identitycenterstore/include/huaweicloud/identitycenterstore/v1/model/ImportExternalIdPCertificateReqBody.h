
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ImportExternalIdPCertificateReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ImportExternalIdPCertificateReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  ImportExternalIdPCertificateReqBody
    : public ModelBase
{
public:
    ImportExternalIdPCertificateReqBody();
    virtual ~ImportExternalIdPCertificateReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportExternalIdPCertificateReqBody members

    /// <summary>
    /// PEM格式的身份提供商证书内容
    /// </summary>

    std::string getX509CertificateInPem() const;
    bool x509CertificateInPemIsSet() const;
    void unsetx509CertificateInPem();
    void setX509CertificateInPem(const std::string& value);

    /// <summary>
    /// 身份提供商证书用途，目前仅支持签名
    /// </summary>

    std::string getCertificateUse() const;
    bool certificateUseIsSet() const;
    void unsetcertificateUse();
    void setCertificateUse(const std::string& value);


protected:
    std::string x509CertificateInPem_;
    bool x509CertificateInPemIsSet_;
    std::string certificateUse_;
    bool certificateUseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ImportExternalIdPCertificateReqBody_H_
