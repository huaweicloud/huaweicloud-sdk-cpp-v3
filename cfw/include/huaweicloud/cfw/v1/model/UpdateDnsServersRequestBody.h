
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDnsServersRequestBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDnsServersRequestBody_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
    /// DNS服务器
    /// </summary>

    std::vector<UpdateDnsServersRequestBody_dns_server>& getDnsServer();
    bool dnsServerIsSet() const;
    void unsetdnsServer();
    void setDnsServer(const std::vector<UpdateDnsServersRequestBody_dns_server>& value);


protected:
    std::vector<UpdateDnsServersRequestBody_dns_server> dnsServer_;
    bool dnsServerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDnsServersRequestBody_H_
