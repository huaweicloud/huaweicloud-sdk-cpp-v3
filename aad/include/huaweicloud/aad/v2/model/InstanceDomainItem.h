
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_InstanceDomainItem_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_InstanceDomainItem_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  InstanceDomainItem
    : public ModelBase
{
public:
    InstanceDomainItem();
    virtual ~InstanceDomainItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceDomainItem members

    /// <summary>
    /// 域名ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 域名cname
    /// </summary>

    std::string getCname() const;
    bool cnameIsSet() const;
    void unsetcname();
    void setCname(const std::string& value);

    /// <summary>
    /// 域名状态 NORMAL &#x3D; &#39;0&#39;, FREEZE &#x3D; &#39;1&#39;
    /// </summary>

    std::string getDomainStatus() const;
    bool domainStatusIsSet() const;
    void unsetdomainStatus();
    void setDomainStatus(const std::string& value);

    /// <summary>
    /// cc防护状态
    /// </summary>

    int32_t getCcStatus() const;
    bool ccStatusIsSet() const;
    void unsetccStatus();
    void setCcStatus(int32_t value);

    /// <summary>
    /// 证书状态：1---已上传  2---未上传
    /// </summary>

    int32_t getHttpsCertStatus() const;
    bool httpsCertStatusIsSet() const;
    void unsethttpsCertStatus();
    void setHttpsCertStatus(int32_t value);

    /// <summary>
    /// 证书名称
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// 域名协议
    /// </summary>

    std::vector<std::string>& getProtocolType();
    bool protocolTypeIsSet() const;
    void unsetprotocolType();
    void setProtocolType(const std::vector<std::string>& value);

    /// <summary>
    /// 源站类型
    /// </summary>

    int32_t getRealServerType() const;
    bool realServerTypeIsSet() const;
    void unsetrealServerType();
    void setRealServerType(int32_t value);

    /// <summary>
    /// 源站
    /// </summary>

    std::string getRealServers() const;
    bool realServersIsSet() const;
    void unsetrealServers();
    void setRealServers(const std::string& value);

    /// <summary>
    /// waf防护状态
    /// </summary>

    int32_t getWafStatus() const;
    bool wafStatusIsSet() const;
    void unsetwafStatus();
    void setWafStatus(int32_t value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string cname_;
    bool cnameIsSet_;
    std::string domainStatus_;
    bool domainStatusIsSet_;
    int32_t ccStatus_;
    bool ccStatusIsSet_;
    int32_t httpsCertStatus_;
    bool httpsCertStatusIsSet_;
    std::string certName_;
    bool certNameIsSet_;
    std::vector<std::string> protocolType_;
    bool protocolTypeIsSet_;
    int32_t realServerType_;
    bool realServerTypeIsSet_;
    std::string realServers_;
    bool realServersIsSet_;
    int32_t wafStatus_;
    bool wafStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_InstanceDomainItem_H_
