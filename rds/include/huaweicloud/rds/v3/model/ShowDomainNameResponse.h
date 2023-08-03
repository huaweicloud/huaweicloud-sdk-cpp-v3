
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDomainNameResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDomainNameResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowDomainNameResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainNameResponse();
    virtual ~ShowDomainNameResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainNameResponse members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例域名。
    /// </summary>

    std::string getDnsName() const;
    bool dnsNameIsSet() const;
    void unsetdnsName();
    void setDnsName(const std::string& value);

    /// <summary>
    /// 实例域名类型，当前只支持private。
    /// </summary>

    std::string getDnsType() const;
    bool dnsTypeIsSet() const;
    void unsetdnsType();
    void setDnsType(const std::string& value);

    /// <summary>
    /// 实例内网IPv4地址。
    /// </summary>

    std::string getIpv4Address() const;
    bool ipv4AddressIsSet() const;
    void unsetipv4Address();
    void setIpv4Address(const std::string& value);

    /// <summary>
    /// 域名状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string dnsName_;
    bool dnsNameIsSet_;
    std::string dnsType_;
    bool dnsTypeIsSet_;
    std::string ipv4Address_;
    bool ipv4AddressIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDomainNameResponse_H_
