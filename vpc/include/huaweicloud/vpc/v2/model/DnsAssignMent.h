
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_DnsAssignMent_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_DnsAssignMent_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  DnsAssignMent
    : public ModelBase
{
public:
    DnsAssignMent();
    virtual ~DnsAssignMent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DnsAssignMent members

    /// <summary>
    /// 端口hostname
    /// </summary>

    std::string getHostname() const;
    bool hostnameIsSet() const;
    void unsethostname();
    void setHostname(const std::string& value);

    /// <summary>
    /// 端口IP地址
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 端口内网fqdn
    /// </summary>

    std::string getFqdn() const;
    bool fqdnIsSet() const;
    void unsetfqdn();
    void setFqdn(const std::string& value);


protected:
    std::string hostname_;
    bool hostnameIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string fqdn_;
    bool fqdnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_DnsAssignMent_H_
