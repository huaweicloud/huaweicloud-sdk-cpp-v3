
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateServerCertificateResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateServerCertificateResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateServerCertificateResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateServerCertificateResponse();
    virtual ~CreateServerCertificateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateServerCertificateResponse members

    /// <summary>
    /// 唯一标识ID
    /// </summary>

    std::string getServerCertificateId() const;
    bool serverCertificateIdIsSet() const;
    void unsetserverCertificateId();
    void setServerCertificateId(const std::string& value);

    /// <summary>
    /// **参数说明**：证书通用名
    /// </summary>

    std::string getCommonName() const;
    bool commonNameIsSet() const;
    void unsetcommonName();
    void setCommonName(const std::string& value);

    /// <summary>
    /// 证书生效日期。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getEffectiveDate() const;
    bool effectiveDateIsSet() const;
    void unseteffectiveDate();
    void setEffectiveDate(const std::string& value);

    /// <summary>
    /// 证书失效日期。格式：yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;，如20151212T121212Z。
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// 证书所有者。
    /// </summary>

    std::string getCertificateOwner() const;
    bool certificateOwnerIsSet() const;
    void unsetcertificateOwner();
    void setCertificateOwner(const std::string& value);

    /// <summary>
    /// 证书颁发者。
    /// </summary>

    std::string getCertificateIssuer() const;
    bool certificateIssuerIsSet() const;
    void unsetcertificateIssuer();
    void setCertificateIssuer(const std::string& value);


protected:
    std::string serverCertificateId_;
    bool serverCertificateIdIsSet_;
    std::string commonName_;
    bool commonNameIsSet_;
    std::string effectiveDate_;
    bool effectiveDateIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string certificateOwner_;
    bool certificateOwnerIsSet_;
    std::string certificateIssuer_;
    bool certificateIssuerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateServerCertificateResponse_H_
