
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_PublicipInfoResp_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_PublicipInfoResp_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// PublicipInfo对象
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  PublicipInfoResp
    : public ModelBase
{
public:
    PublicipInfoResp();
    virtual ~PublicipInfoResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PublicipInfoResp members

    /// <summary>
    /// 功能说明：弹性公网IP或者IPv6端口的地址
    /// </summary>

    std::string getPublicipAddress() const;
    bool publicipAddressIsSet() const;
    void unsetpublicipAddress();
    void setPublicipAddress(const std::string& value);

    /// <summary>
    /// 功能说明：带宽对应的弹性公网IP或者IPv6端口的唯一标识
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);

    /// <summary>
    /// 功能说明：弹性公网IP或者IPv6端口的类型  取值范围：5_telcom（电信），5_union（联通），5_bgp（全动态BGP），5_sbgp（静态BGP），5_ipv6  东北-大连：5_telcom、5_union  华南-广州：5_bgp、5_sbgp  华东-上海二：5_bgp、5_sbgp  华北-北京一：5_bgp、5_sbgp、5_ipv6  亚太-香港：5_bgp  亚太-曼谷：5_bgp  亚太-新加坡：5_bgp  非洲-约翰内斯堡：5_bgp  西南-贵阳一：5_bgp、5_sbgp  华北-北京四：5_bgp、5_sbgp  约束：必须是系统具体支持的类型
    /// </summary>

    std::string getPublicipType() const;
    bool publicipTypeIsSet() const;
    void unsetpublicipType();
    void setPublicipType(const std::string& value);

    /// <summary>
    /// 功能说明：IPv4时无此字段，IPv6时为申请到的弹性公网IP地址
    /// </summary>

    std::string getPublicipv6Address() const;
    bool publicipv6AddressIsSet() const;
    void unsetpublicipv6Address();
    void setPublicipv6Address(const std::string& value);

    /// <summary>
    /// IP版本信息  取值范围：  4：IPv4  6：IPv6
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);


protected:
    std::string publicipAddress_;
    bool publicipAddressIsSet_;
    std::string publicipId_;
    bool publicipIdIsSet_;
    std::string publicipType_;
    bool publicipTypeIsSet_;
    std::string publicipv6Address_;
    bool publicipv6AddressIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_PublicipInfoResp_H_
