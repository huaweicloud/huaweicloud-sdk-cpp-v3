
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
    /// **参数解释**： 域名服务器id **取值范围**： 不涉及
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释**： 域名服务器是否应用 **取值范围**： - 0：否 - 1：是
    /// </summary>

    int32_t getIsApplied() const;
    bool isAppliedIsSet() const;
    void unsetisApplied();
    void setIsApplied(int32_t value);

    /// <summary>
    /// **参数解释**： 域名服务器是否是用户自定义的dns服务器 **取值范围**： - 0：否 - 1：是
    /// </summary>

    int32_t getIsCustomized() const;
    bool isCustomizedIsSet() const;
    void unsetisCustomized();
    void setIsCustomized(int32_t value);

    /// <summary>
    /// **参数解释**： DNS服务器IP **取值范围**： 不涉及
    /// </summary>

    std::string getServerIp() const;
    bool serverIpIsSet() const;
    void unsetserverIp();
    void setServerIp(const std::string& value);

    /// <summary>
    /// **参数解释**： dns服务器解析状态 **取值范围**： 0：解析域名的频率正常 1：解析域名的频率缓慢 2：解析域名异常 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释**： 健康检查域名 **取值范围**： 不涉及
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
    int32_t status_;
    bool statusIsSet_;
    std::string healthCheckDomainName_;
    bool healthCheckDomainNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DnsServersResponseDTO_H_
