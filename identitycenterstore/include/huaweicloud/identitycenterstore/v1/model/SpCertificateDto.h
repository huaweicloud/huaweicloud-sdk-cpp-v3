
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_SpCertificateDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_SpCertificateDto_H_


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
/// 服务提供商证书详情
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  SpCertificateDto
    : public ModelBase
{
public:
    SpCertificateDto();
    virtual ~SpCertificateDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SpCertificateDto members

    /// <summary>
    /// 证书ID
    /// </summary>

    std::string getCertificateId() const;
    bool certificateIdIsSet() const;
    void unsetcertificateId();
    void setCertificateId(const std::string& value);

    /// <summary>
    /// x509证书
    /// </summary>

    std::string getX509certificate() const;
    bool x509certificateIsSet() const;
    void unsetx509certificate();
    void setX509certificate(const std::string& value);

    /// <summary>
    /// 签名算法
    /// </summary>

    std::string getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const std::string& value);

    /// <summary>
    /// 证书过期时间戳
    /// </summary>

    int64_t getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(int64_t value);

    /// <summary>
    /// 证书激活状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);


protected:
    std::string certificateId_;
    bool certificateIdIsSet_;
    std::string x509certificate_;
    bool x509certificateIsSet_;
    std::string algorithm_;
    bool algorithmIsSet_;
    int64_t expiryDate_;
    bool expiryDateIsSet_;
    std::string state_;
    bool stateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_SpCertificateDto_H_
