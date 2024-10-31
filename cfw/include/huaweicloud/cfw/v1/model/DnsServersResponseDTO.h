
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DnsServersResponseDTO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DnsServersResponseDTO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  DnsServersResponseDTO
    : public ModelBase
{
public:
    DnsServersResponseDTO();
    virtual ~DnsServersResponseDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DnsServersResponseDTO members

    /// <summary>
    /// 域名服务器id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 域名服务器是否应用，0否 1是
    /// </summary>

    int32_t getIsApplied() const;
    bool isAppliedIsSet() const;
    void unsetisApplied();
    void setIsApplied(int32_t value);

    /// <summary>
    /// 域名服务器是否是用户自定义的dns服务器，0否 1是
    /// </summary>

    int32_t getIsCustomized() const;
    bool isCustomizedIsSet() const;
    void unsetisCustomized();
    void setIsCustomized(int32_t value);

    /// <summary>
    /// DNS服务器IP
    /// </summary>

    std::string getServerIp() const;
    bool serverIpIsSet() const;
    void unsetserverIp();
    void setServerIp(const std::string& value);

    /// <summary>
    /// 健康检查域名
    /// </summary>

    std::string getHealthCheckDomainName() const;
    bool healthCheckDomainNameIsSet() const;
    void unsethealthCheckDomainName();
    void setHealthCheckDomainName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t isApplied_;
    bool isAppliedIsSet_;
    int32_t isCustomized_;
    bool isCustomizedIsSet_;
    std::string serverIp_;
    bool serverIpIsSet_;
    std::string healthCheckDomainName_;
    bool healthCheckDomainNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DnsServersResponseDTO_H_
