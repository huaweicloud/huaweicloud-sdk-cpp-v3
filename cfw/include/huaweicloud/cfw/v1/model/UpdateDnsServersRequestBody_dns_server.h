
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDnsServersRequestBody_dns_server_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDnsServersRequestBody_dns_server_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateDnsServersRequestBody_dns_server
    : public ModelBase
{
public:
    UpdateDnsServersRequestBody_dns_server();
    virtual ~UpdateDnsServersRequestBody_dns_server();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateDnsServersRequestBody_dns_server members

    /// <summary>
    /// DNS服务器IP
    /// </summary>

    std::string getServerIp() const;
    bool serverIpIsSet() const;
    void unsetserverIp();
    void setServerIp(const std::string& value);

    /// <summary>
    /// 是否是用户自定义的dns服务器，0否 1是
    /// </summary>

    int32_t getIsCustomized() const;
    bool isCustomizedIsSet() const;
    void unsetisCustomized();
    void setIsCustomized(int32_t value);

    /// <summary>
    /// 是否应用，0否 1是
    /// </summary>

    int32_t getIsApplied() const;
    bool isAppliedIsSet() const;
    void unsetisApplied();
    void setIsApplied(int32_t value);


protected:
    std::string serverIp_;
    bool serverIpIsSet_;
    int32_t isCustomized_;
    bool isCustomizedIsSet_;
    int32_t isApplied_;
    bool isAppliedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateDnsServersRequestBody_dns_server_H_
