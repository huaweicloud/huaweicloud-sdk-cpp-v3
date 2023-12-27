
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_HostBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_HostBody_H_


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
class HUAWEICLOUD_AAD_V1_EXPORT  HostBody
    : public ModelBase
{
public:
    HostBody();
    virtual ~HostBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HostBody members

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 企业项目id，与接入的高防实例所属企业项目保持一致。可在华为云EPS服务中查看企业项目id，default企业项目id为\&quot;0\&quot;。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 高防实例ip列表。多个高防实例ip必须属于同一企业项目。
    /// </summary>

    std::vector<std::string>& getVips();
    bool vipsIsSet() const;
    void unsetvips();
    void setVips(const std::vector<std::string>& value);

    /// <summary>
    /// 源站类型。 0 - 源站IP， 1 - 源站域名。
    /// </summary>

    int32_t getRealServerType() const;
    bool realServerTypeIsSet() const;
    void unsetrealServerType();
    void setRealServerType(int32_t value);

    /// <summary>
    /// HTTP端口，与port_https不能同时为空。DDoS高防支持的HTTP端口可在控制台查看。
    /// </summary>

    std::vector<int32_t>& getPortHttp();
    bool portHttpIsSet() const;
    void unsetportHttp();
    void setPortHttp(std::vector<int32_t> value);

    /// <summary>
    /// HTTPS端口，与port_http不能同时为空。DDoS高防支持的HTTPS端口可在控制台查看。
    /// </summary>

    std::vector<int32_t>& getPortHttps();
    bool portHttpsIsSet() const;
    void unsetportHttps();
    void setPortHttps(std::vector<int32_t> value);

    /// <summary>
    /// 源站ip/源站域名
    /// </summary>

    std::string getRealServer() const;
    bool realServerIsSet() const;
    void unsetrealServer();
    void setRealServer(const std::string& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<std::string> vips_;
    bool vipsIsSet_;
    int32_t realServerType_;
    bool realServerTypeIsSet_;
    std::vector<int32_t> portHttp_;
    bool portHttpIsSet_;
    std::vector<int32_t> portHttps_;
    bool portHttpsIsSet_;
    std::string realServer_;
    bool realServerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_HostBody_H_
