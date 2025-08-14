
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CertificateDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CertificateDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用程序证书
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  CertificateDto
    : public ModelBase
{
public:
    CertificateDto();
    virtual ~CertificateDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertificateDto members

    /// <summary>
    /// 证书生成算法
    /// </summary>

    std::string getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const std::string& value);

    /// <summary>
    /// 应用程序证书
    /// </summary>

    std::string getCertificate() const;
    bool certificateIsSet() const;
    void unsetcertificate();
    void setCertificate(const std::string& value);

    /// <summary>
    /// 应用程序证书Id
    /// </summary>

    std::string getCertificateId() const;
    bool certificateIdIsSet() const;
    void unsetcertificateId();
    void setCertificateId(const std::string& value);

    /// <summary>
    /// 证书过期时间
    /// </summary>

    int64_t getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(int64_t value);

    /// <summary>
    /// 证书状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 密钥大小
    /// </summary>

    std::string getKeySize() const;
    bool keySizeIsSet() const;
    void unsetkeySize();
    void setKeySize(const std::string& value);

    /// <summary>
    /// 证书生成时间
    /// </summary>

    int64_t getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(int64_t value);


protected:
    std::string algorithm_;
    bool algorithmIsSet_;
    std::string certificate_;
    bool certificateIsSet_;
    std::string certificateId_;
    bool certificateIdIsSet_;
    int64_t expiryDate_;
    bool expiryDateIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string keySize_;
    bool keySizeIsSet_;
    int64_t issueDate_;
    bool issueDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CertificateDto_H_
