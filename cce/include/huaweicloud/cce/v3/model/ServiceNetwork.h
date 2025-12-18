
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ServiceNetwork_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ServiceNetwork_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ServiceNetwork
    : public ModelBase
{
public:
    ServiceNetwork();
    virtual ~ServiceNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceNetwork members

    /// <summary>
    /// **参数解释：** kubernetes clusterIP IPv4 CIDR取值范围。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 默认为\&quot;10.247.0.0/16\&quot;。 
    /// </summary>

    std::string getIPv4CIDR() const;
    bool iPv4CIDRIsSet() const;
    void unsetiPv4CIDR();
    void setIPv4CIDR(const std::string& value);

    /// <summary>
    /// **参数解释：** kubernetes clusterIP IPv6 CIDR取值范围。 **约束限制：** 仅开启IPV6双栈的Turbo集群支持配置IPv6服务网段。 **取值范围：** 不涉及 **默认取值：** Turbo集群默认为\&quot;fc00::/112\&quot; CCE集群默认为\&quot;fd00:1234::/120\&quot; 
    /// </summary>

    std::string getIPv6CIDR() const;
    bool iPv6CIDRIsSet() const;
    void unsetiPv6CIDR();
    void setIPv6CIDR(const std::string& value);


protected:
    std::string iPv4CIDR_;
    bool iPv4CIDRIsSet_;
    std::string iPv6CIDR_;
    bool iPv6CIDRIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ServiceNetwork_H_
