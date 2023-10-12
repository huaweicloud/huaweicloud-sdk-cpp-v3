
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainIpv6SwitchReq_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainIpv6SwitchReq_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  DomainIpv6SwitchReq
    : public ModelBase
{
public:
    DomainIpv6SwitchReq();
    virtual ~DomainIpv6SwitchReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainIpv6SwitchReq members

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// IPV6开关配置，默认关闭，true为开启，false为关闭
    /// </summary>

    bool isIsIpv6() const;
    bool isIpv6IsSet() const;
    void unsetisIpv6();
    void setIsIpv6(bool value);


protected:
    std::string domain_;
    bool domainIsSet_;
    bool isIpv6_;
    bool isIpv6IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainIpv6SwitchReq_H_
