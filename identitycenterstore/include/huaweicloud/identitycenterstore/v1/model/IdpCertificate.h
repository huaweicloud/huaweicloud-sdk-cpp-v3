
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IdpCertificate_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IdpCertificate_H_


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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  IdpCertificate
    : public ModelBase
{
public:
    IdpCertificate();
    virtual ~IdpCertificate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdpCertificate members

    /// <summary>
    /// 证书全局唯一标识符（ID）
    /// </summary>

    std::string getCertificateId() const;
    bool certificateIdIsSet() const;
    void unsetcertificateId();
    void setCertificateId(const std::string& value);

    /// <summary>
    /// 身份提供商签发者
    /// </summary>

    std::string getIssuerName() const;
    bool issuerNameIsSet() const;
    void unsetissuerName();
    void setIssuerName(const std::string& value);

    /// <summary>
    /// 证书有效期
    /// </summary>

    double getNotAfter() const;
    bool notAfterIsSet() const;
    void unsetnotAfter();
    void setNotAfter(double value);

    /// <summary>
    /// 证书有效期
    /// </summary>

    double getNotBefore() const;
    bool notBeforeIsSet() const;
    void unsetnotBefore();
    void setNotBefore(double value);

    /// <summary>
    /// 证书公钥
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);

    /// <summary>
    /// 证书序列号
    /// </summary>

    double getSerialNumber() const;
    bool serialNumberIsSet() const;
    void unsetserialNumber();
    void setSerialNumber(double value);

    /// <summary>
    /// 证书序列号文本
    /// </summary>

    std::string getSerialNumberString() const;
    bool serialNumberStringIsSet() const;
    void unsetserialNumberString();
    void setSerialNumberString(const std::string& value);

    /// <summary>
    /// 签名算法
    /// </summary>

    std::string getSignatureAlgorithmName() const;
    bool signatureAlgorithmNameIsSet() const;
    void unsetsignatureAlgorithmName();
    void setSignatureAlgorithmName(const std::string& value);

    /// <summary>
    /// Subject
    /// </summary>

    std::string getSubjectName() const;
    bool subjectNameIsSet() const;
    void unsetsubjectName();
    void setSubjectName(const std::string& value);

    /// <summary>
    /// 版本
    /// </summary>

    double getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(double value);

    /// <summary>
    /// x509格式证书
    /// </summary>

    std::string getX509CertificateInPem() const;
    bool x509CertificateInPemIsSet() const;
    void unsetx509CertificateInPem();
    void setX509CertificateInPem(const std::string& value);


protected:
    std::string certificateId_;
    bool certificateIdIsSet_;
    std::string issuerName_;
    bool issuerNameIsSet_;
    double notAfter_;
    bool notAfterIsSet_;
    double notBefore_;
    bool notBeforeIsSet_;
    std::string publicKey_;
    bool publicKeyIsSet_;
    double serialNumber_;
    bool serialNumberIsSet_;
    std::string serialNumberString_;
    bool serialNumberStringIsSet_;
    std::string signatureAlgorithmName_;
    bool signatureAlgorithmNameIsSet_;
    std::string subjectName_;
    bool subjectNameIsSet_;
    double version_;
    bool versionIsSet_;
    std::string x509CertificateInPem_;
    bool x509CertificateInPemIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IdpCertificate_H_
