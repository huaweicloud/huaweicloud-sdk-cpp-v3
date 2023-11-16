
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_DomainInfo_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_DomainInfo_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  DomainInfo
    : public ModelBase
{
public:
    DomainInfo();
    virtual ~DomainInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainInfo members

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
    /// 域名协议
    /// </summary>

    std::vector<std::string>& getProtocol();
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::vector<std::string>& value);

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

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string cname_;
    bool cnameIsSet_;
    std::vector<std::string> protocol_;
    bool protocolIsSet_;
    int32_t realServerType_;
    bool realServerTypeIsSet_;
    std::string realServers_;
    bool realServersIsSet_;
    int32_t wafStatus_;
    bool wafStatusIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_DomainInfo_H_
