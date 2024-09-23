
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CertificatesGetBody_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CertificatesGetBody_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 双证书配置查询响应体。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CertificatesGetBody
    : public ModelBase
{
public:
    CertificatesGetBody();
    virtual ~CertificatesGetBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertificatesGetBody members

    /// <summary>
    /// 证书来源,0：自有证书。2：SCM证书。
    /// </summary>

    int32_t getCertificateSource() const;
    bool certificateSourceIsSet() const;
    void unsetcertificateSource();
    void setCertificateSource(int32_t value);

    /// <summary>
    /// SCM证书id
    /// </summary>

    std::string getScmCertificateId() const;
    bool scmCertificateIdIsSet() const;
    void unsetscmCertificateId();
    void setScmCertificateId(const std::string& value);

    /// <summary>
    /// 证书类型，server：国际证书；server_sm：国密证书。
    /// </summary>

    std::string getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(const std::string& value);

    /// <summary>
    /// 证书名字。
    /// </summary>

    std::string getCertificateName() const;
    bool certificateNameIsSet() const;
    void unsetcertificateName();
    void setCertificateName(const std::string& value);

    /// <summary>
    /// HTTPS协议使用的证书内容，PEM编码格式。
    /// </summary>

    std::string getCertificateValue() const;
    bool certificateValueIsSet() const;
    void unsetcertificateValue();
    void setCertificateValue(const std::string& value);

    /// <summary>
    /// 国密证书加密证书内容，PEM编码格式。
    /// </summary>

    std::string getEncCertificateValue() const;
    bool encCertificateValueIsSet() const;
    void unsetencCertificateValue();
    void setEncCertificateValue(const std::string& value);

    /// <summary>
    /// 证书过期时间。  &gt; UTC时间。
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);


protected:
    int32_t certificateSource_;
    bool certificateSourceIsSet_;
    std::string scmCertificateId_;
    bool scmCertificateIdIsSet_;
    std::string certificateType_;
    bool certificateTypeIsSet_;
    std::string certificateName_;
    bool certificateNameIsSet_;
    std::string certificateValue_;
    bool certificateValueIsSet_;
    std::string encCertificateValue_;
    bool encCertificateValueIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CertificatesGetBody_H_
