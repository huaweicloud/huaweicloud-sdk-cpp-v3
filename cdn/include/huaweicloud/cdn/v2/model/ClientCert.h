
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ClientCert_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ClientCert_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cdn/v2/model/ClientCert_trusted_certs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 客户端证书配置，实现客户端与CDN节点的双向证书认证，提高网站通信安全性 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ClientCert
    : public ModelBase
{
public:
    ClientCert();
    virtual ~ClientCert();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClientCert members

    /// <summary>
    /// **参数解释：** 客户端证书配置开关 **约束限制：** 不涉及 **取值范围：** - on: 开启 - off: 关闭  **默认取值：** 不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 客户端CA证书的内容 **约束限制：** 仅支持PEM格式 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getTrustedCert() const;
    bool trustedCertIsSet() const;
    void unsettrustedCert();
    void setTrustedCert(const std::string& value);

    /// <summary>
    /// **参数解释：** 客户端CA证书指定的域名 **约束限制：** - 如果不配置域名，则CDN会放行所有持有该CA证书的客户端请求 - 最多可配置100个域名 - 多个域名用“,”或“|”分隔  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getHosts() const;
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::string& value);

    /// <summary>
    /// **参数解释：** 多证书场景下客户端CA证书列表 **约束限制：** 不涉及
    /// </summary>

    std::vector<ClientCert_trusted_certs>& getTrustedCerts();
    bool trustedCertsIsSet() const;
    void unsettrustedCerts();
    void setTrustedCerts(const std::vector<ClientCert_trusted_certs>& value);

    /// <summary>
    /// **参数解释：** 国密证书场景下客户端CA证书列表 **约束限制：** - 开启国密证书后配置 - 仅支持PEM格式
    /// </summary>

    std::vector<ClientCert_trusted_certs>& getSmTrustedCerts();
    bool smTrustedCertsIsSet() const;
    void unsetsmTrustedCerts();
    void setSmTrustedCerts(const std::vector<ClientCert_trusted_certs>& value);

    /// <summary>
    /// **参数解释：** 国密证书指定访问的客户端域名 **约束限制：** - 开启国密证书后配置 - 最多可配置100个域名 - 多个域名用“|”分隔  **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getSmCertHosts() const;
    bool smCertHostsIsSet() const;
    void unsetsmCertHosts();
    void setSmCertHosts(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string trustedCert_;
    bool trustedCertIsSet_;
    std::string hosts_;
    bool hostsIsSet_;
    std::vector<ClientCert_trusted_certs> trustedCerts_;
    bool trustedCertsIsSet_;
    std::vector<ClientCert_trusted_certs> smTrustedCerts_;
    bool smTrustedCertsIsSet_;
    std::string smCertHosts_;
    bool smCertHostsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ClientCert_H_
