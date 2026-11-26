
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesResponseBodyContent_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesResponseBodyContent_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/MultiCertificateBatchVo.h>
#include <string>
#include <huaweicloud/cdn/v2/model/ForceRedirect.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// https配置。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UpdateDomainMultiCertificatesResponseBodyContent
    : public ModelBase
{
public:
    UpdateDomainMultiCertificatesResponseBodyContent();
    virtual ~UpdateDomainMultiCertificatesResponseBodyContent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainMultiCertificatesResponseBodyContent members

    /// <summary>
    /// **参数解释：** 域名列表 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// https开关(0：\&quot;关闭\&quot;；1：\&quot;设置证书\&quot;)。
    /// </summary>

    int32_t getHttpsSwitch() const;
    bool httpsSwitchIsSet() const;
    void unsethttpsSwitch();
    void setHttpsSwitch(int32_t value);

    /// <summary>
    /// 回源方式:1：\&quot;回源跟随\&quot;；2：\&quot;HTTP\&quot;(默认)，3：https（自建）。
    /// </summary>

    int32_t getAccessOriginWay() const;
    bool accessOriginWayIsSet() const;
    void unsetaccessOriginWay();
    void setAccessOriginWay(int32_t value);

    /// <summary>
    /// 强制跳转HTTPS（0：不强制；1：强制） 。
    /// </summary>

    int32_t getForceRedirectHttps() const;
    bool forceRedirectHttpsIsSet() const;
    void unsetforceRedirectHttps();
    void setForceRedirectHttps(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ForceRedirect getForceRedirectConfig() const;
    bool forceRedirectConfigIsSet() const;
    void unsetforceRedirectConfig();
    void setForceRedirectConfig(const ForceRedirect& value);

    /// <summary>
    /// http2.0（0：关闭；1：开启）
    /// </summary>

    int32_t getHttp2() const;
    bool http2IsSet() const;
    void unsethttp2();
    void setHttp2(int32_t value);

    /// <summary>
    /// **参数解释：** 证书名称 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书内容 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    std::string getCertificate() const;
    bool certificateIsSet() const;
    void unsetcertificate();
    void setCertificate(const std::string& value);

    /// <summary>
    /// 证书类型。取值意义： - 0：自有证书 - 2：SCM证书
    /// </summary>

    int32_t getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(int32_t value);

    /// <summary>
    /// **参数解释：** 证书最近过期时间，Unix时间戳格式，单位为毫秒 **约束限制：** 不涉及 **取值范围：** 不涉及
    /// </summary>

    int64_t getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(int64_t value);

    /// <summary>
    /// **参数解释：** 证书类型 **约束限制：** 不涉及 **取值范围：** - 0: 国际证书 - 1: 国密证书  **默认取值：** 不涉及
    /// </summary>

    int32_t getCertificateCategory() const;
    bool certificateCategoryIsSet() const;
    void unsetcertificateCategory();
    void setCertificateCategory(int32_t value);

    /// <summary>
    /// **参数解释：** 双证书场景下的证书列表 **约束限制：** 不涉及
    /// </summary>

    std::vector<MultiCertificateBatchVo>& getCertificates();
    bool certificatesIsSet() const;
    void unsetcertificates();
    void setCertificates(const std::vector<MultiCertificateBatchVo>& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    int32_t httpsSwitch_;
    bool httpsSwitchIsSet_;
    int32_t accessOriginWay_;
    bool accessOriginWayIsSet_;
    int32_t forceRedirectHttps_;
    bool forceRedirectHttpsIsSet_;
    ForceRedirect forceRedirectConfig_;
    bool forceRedirectConfigIsSet_;
    int32_t http2_;
    bool http2IsSet_;
    std::string certName_;
    bool certNameIsSet_;
    std::string certificate_;
    bool certificateIsSet_;
    int32_t certificateType_;
    bool certificateTypeIsSet_;
    int64_t expirationTime_;
    bool expirationTimeIsSet_;
    int32_t certificateCategory_;
    bool certificateCategoryIsSet_;
    std::vector<MultiCertificateBatchVo> certificates_;
    bool certificatesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesResponseBodyContent_H_
