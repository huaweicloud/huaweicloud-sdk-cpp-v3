
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesRequestBodyContent_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesRequestBodyContent_H_


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
/// **参数解释：** HTTPS证书配置，配置证书后，允许客户端采用HTTPS协议访问CDN节点 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UpdateDomainMultiCertificatesRequestBodyContent
    : public ModelBase
{
public:
    UpdateDomainMultiCertificatesRequestBodyContent();
    virtual ~UpdateDomainMultiCertificatesRequestBodyContent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainMultiCertificatesRequestBodyContent members

    /// <summary>
    /// **参数解释：** 需要配置HTTPS证书的域名 **约束限制：** - 域名间以“,”分隔 - 最多配置50个域名  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书配置开关 **约束限制：** https_switch为1时，证书参数不能为空 **取值范围：** - 0: 关闭 - 1: 开启  **默认取值：** 不涉及
    /// </summary>

    int32_t getHttpsSwitch() const;
    bool httpsSwitchIsSet() const;
    void unsethttpsSwitch();
    void setHttpsSwitch(int32_t value);

    /// <summary>
    /// **参数解释：** 回源协议 **约束限制：** 不涉及 **取值范围：** - 1: 协议跟随 - 2: http协议 - 3: https协议  **默认取值：** 2: http协议
    /// </summary>

    int32_t getAccessOriginWay() const;
    bool accessOriginWayIsSet() const;
    void unsetaccessOriginWay();
    void setAccessOriginWay(int32_t value);

    /// <summary>
    /// **参数解释：** 是否开启HTTPS强制跳转，强制客户端使用HTTPS协议访问CDN节点 &gt; 此参数即将下线，建议使用force_redirect_config修改配置  **约束限制：** 不涉及 **取值范围：** - 0: 关闭 - 1: 开启  **默认取值：** 0: 关闭
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
    /// **参数解释：** HTTP/2开关，支持客户端采用HTTP/2协议访问CDN节点 **约束限制：** 不涉及 **取值范围：** - 0: 关闭 - 1: 开启  **默认取值：** 0: 关闭
    /// </summary>

    int32_t getHttp2() const;
    bool http2IsSet() const;
    void unsethttp2();
    void setHttp2(int32_t value);

    /// <summary>
    /// **参数解释：** 证书名称 **约束限制：** https_switch为1时，该参数必填 **取值范围：** 3-64个字符，由英文字母、数字及“-”、“_”、空格组成 **默认取值：** 不涉及
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// **参数解释：** SSL证书内容 **约束限制：** - 仅支持PEM编码格式 - 不启用证书则无需输入 - 初次配置证书时必传 - 需要传入完整证书链  **取值范围：** 证书链长度不超过20KB **默认取值：** 不涉及
    /// </summary>

    std::string getCertificate() const;
    bool certificateIsSet() const;
    void unsetcertificate();
    void setCertificate(const std::string& value);

    /// <summary>
    /// **参数解释：** SSL证书私钥内容 **约束限制：** - 仅支持PEM编码格式 - 不启用证书则无需输入 - 初次配置证书时必传  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPrivateKey() const;
    bool privateKeyIsSet() const;
    void unsetprivateKey();
    void setPrivateKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 证书类型 **约束限制：** 不涉及 **取值范围：** - 0: 自有证书 - 2: SCM证书  **默认取值：** 0: 自有证书
    /// </summary>

    int32_t getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(int32_t value);

    /// <summary>
    /// **参数解释：** SCM证书ID，可使用云证书与管理服务（CCM）的查询证书列表接口获取 **约束限制：** 配置SCM证书时必传 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getScmCertificateId() const;
    bool scmCertificateIdIsSet() const;
    void unsetscmCertificateId();
    void setScmCertificateId(const std::string& value);

    /// <summary>
    /// **参数解释：** 配置国际证书和国密证书双证书场景下的证书列表 **约束限制：** - 配置双证书时最多传2个证书，只能包含1个国际证书和1个国密证书 - 使用双证书配置时，cert_name/certificate/private_key等单证书参数不可再使用  **取值范围：** 不涉及
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
    std::string privateKey_;
    bool privateKeyIsSet_;
    int32_t certificateType_;
    bool certificateTypeIsSet_;
    std::string scmCertificateId_;
    bool scmCertificateIdIsSet_;
    std::vector<MultiCertificateBatchVo> certificates_;
    bool certificatesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateDomainMultiCertificatesRequestBodyContent_H_
