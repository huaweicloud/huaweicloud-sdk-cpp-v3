
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipInfoResponseBody_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipInfoResponseBody_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// PublicipInfo对象
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  PublicipInfoResponseBody
    : public ModelBase
{
public:
    PublicipInfoResponseBody();
    virtual ~PublicipInfoResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PublicipInfoResponseBody members

    /// <summary>
    /// - 功能说明：弹性公网IPV4或IPv6的公网地址
    /// </summary>

    std::string getPublicipAddress() const;
    bool publicipAddressIsSet() const;
    void unsetpublicipAddress();
    void setPublicipAddress(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽对应的弹性公网IPV4或IPv6的唯一标识
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);

    /// <summary>
    /// - 功能说明：EIP的类型  - [取值范围：5_bgp](tag:hk_g42,g42,hk_sbc,sbc)  - [取值范围：5_chinamobile](tag:cmcc)  - [取值范围：5_bgp（Dynamic BGP）、5_mainbgp（Mail BGP）](tag:dt)  - [取值范围：    - eu-de: 5_bgp（Dynamic BGP）、5_mainbgp（Mail BGP）、5_gray（Dedicated Load Balancer）    - eu-nl: 5_bgp（Dynamic BGP）、5_mainbgp（Mail BGP）](tag:dt_test) - [取值范围：5_bgp（全动态BGP），5_sbgp（静态BGP），5_youxuanbgp（优选BGP）    - 华南-广州：5_bgp、5_sbgp    - 华东-上海一：5_bgp、5_sbgp    - 华东-上海二：5_bgp、5_sbgp    - 华北-北京一：5_bgp、5_sbgp    - 中国-香港：5_bgp、5_youxuanbgp    - 亚太-曼谷：5_bgp    - 亚太-新加坡：5_bgp    - 非洲-约翰内斯堡：5_bgp    - 西南-贵阳一：5_sbgp    - 华北-北京四：5_bgp、5_sbgp    - 拉美-圣地亚哥：5_bgp    - 拉美-圣保罗一：5_bgp    - 拉美-墨西哥城一：5_bgp    - 拉美-布宜诺斯艾利一：5_bgp    - 拉美-利马一：5_bgp    - 拉美-圣地亚哥二： 5_bgp  ](tag:hws,hws_hk)  - 约束：     - 必须是系统具体支持的类型。     - publicip_id为IPv4端口，所以[\&quot;publicip_type\&quot;](tag:cmcc,ctc,dt,dt_test,fcs,fcs_dt,fcs_vm,hws_hk,hws_ocb,ocb,tlf,tm,hk_g42,g42,hk_sbc,sbc)[\&quot;type\&quot;](tag:hws)字段未给定时，默认为[5_bgp](tag:ctc,dt,dt_test,fcs,fcs_dt,fcs_vm,g42,hk_g42,hk_sbc,hws,hws_hk,hws_ocb,mix,ocb,sbc,tlf,tm)[5_chinamobile](tag:cmcc)。
    /// </summary>

    std::string getPublicipType() const;
    bool publicipTypeIsSet() const;
    void unsetpublicipType();
    void setPublicipType(const std::string& value);

    /// <summary>
    /// - 功能说明：IPv4时无此字段，IPv6时为申请到的弹性公网IP地址
    /// </summary>

    std::string getPublicipv6Address() const;
    bool publicipv6AddressIsSet() const;
    void unsetpublicipv6Address();
    void setPublicipv6Address(const std::string& value);

    /// <summary>
    /// - 功能说明：IP版本信息 - 取值范围：  4：IPv4；  6：IPv6
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipInfoResponseBody_H_
