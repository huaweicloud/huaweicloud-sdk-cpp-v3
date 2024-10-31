
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDnsServersRequestBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDnsServersRequestBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/UpdateDnsServersRequestBody_dns_server.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateDnsServersRequestBody
    : public ModelBase
{
public:
    UpdateDnsServersRequestBody();
    virtual ~UpdateDnsServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDnsServersRequestBody members

    /// <summary>
    /// DNS服务器列表
    /// </summary>

    std::vector<UpdateDnsServersRequestBody_dns_server>& getDnsServer();
    bool dnsServerIsSet() const;
    void unsetdnsServer();
    void setDnsServer(const std::vector<UpdateDnsServersRequestBody_dns_server>& value);

    /// <summary>
    /// 健康检查域名，可通过[查询dns服务器列表接口](ListDnsServers.xml)查询获得，通过返回值中的data.health_check_domain_name（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getHealthCheckDomainName() const;
    bool healthCheckDomainNameIsSet() const;
    void unsethealthCheckDomainName();
    void setHealthCheckDomainName(const std::string& value);


protected:
    std::vector<UpdateDnsServersRequestBody_dns_server> dnsServer_;
    bool dnsServerIsSet_;
    std::string healthCheckDomainName_;
    bool healthCheckDomainNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDnsServersRequestBody_H_
