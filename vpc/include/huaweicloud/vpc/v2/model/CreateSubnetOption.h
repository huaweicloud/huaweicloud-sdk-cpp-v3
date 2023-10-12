
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetOption_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/ExtraDhcpOption.h>
#include <vector>

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
class HUAWEICLOUD_VPC_V2_EXPORT  CreateSubnetOption
    : public ModelBase
{
public:
    CreateSubnetOption();
    virtual ~CreateSubnetOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubnetOption members

    /// <summary>
    /// 功能说明：子网名称 取值范围：1-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：子网描述 取值范围：0-255个字符，不能包含“&lt;”和“&gt;”。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：子网的网段 取值范围：必须在vpc对应cidr范围内 约束：必须是cidr格式。掩码长度不能大于28
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 子网所在VPC标识
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 功能说明：子网的网关 取值范围：子网网段中的IP地址 约束：必须是ip格式
    /// </summary>

    std::string getGatewayIp() const;
    bool gatewayIpIsSet() const;
    void unsetgatewayIp();
    void setGatewayIp(const std::string& value);

    /// <summary>
    /// 功能说明：是否创建cidr_v6 取值范围：true（开启），false（关闭） 约束：不填时默认为false &gt; 说明 该参数目前仅在“华北-北京四”区域开放，且申请IPv6公测后才可设置。
    /// </summary>

    bool isIpv6Enable() const;
    bool ipv6EnableIsSet() const;
    void unsetipv6Enable();
    void setIpv6Enable(bool value);

    /// <summary>
    /// 功能说明：子网是否开启dhcp功能 取值范围：true（开启），false（关闭） 约束：不填时默认为true。当设置为false时，会导致新创建的ECS无法获取IP地址，cloudinit无法注入账号密码，请谨慎操作。
    /// </summary>

    bool isDhcpEnable() const;
    bool dhcpEnableIsSet() const;
    void unsetdhcpEnable();
    void setDhcpEnable(bool value);

    /// <summary>
    /// 功能说明：子网dns服务器地址1 约束：ip格式，不支持IPv6地址 默认值：不填时为空 [内网DNS地址请参见](https://support.huaweicloud.com/dns_faq/dns_faq_002.html) [通过API获取请参见](https://support.huaweicloud.com/api-dns/dns_api_69001.html)
    /// </summary>

    std::string getPrimaryDns() const;
    bool primaryDnsIsSet() const;
    void unsetprimaryDns();
    void setPrimaryDns(const std::string& value);

    /// <summary>
    /// 功能说明：子网dns服务器地址2 约束：ip格式，不支持IPv6地址 默认值：不填时为空 [内网DNS地址请参见](https://support.huaweicloud.com/dns_faq/dns_faq_002.html) [通过API获取请参见](https://support.huaweicloud.com/api-dns/dns_api_69001.html)
    /// </summary>

    std::string getSecondaryDns() const;
    bool secondaryDnsIsSet() const;
    void unsetsecondaryDns();
    void setSecondaryDns(const std::string& value);

    /// <summary>
    /// 功能说明：子网dns服务器地址的集合；如果想使用两个以上dns服务器，请使用该字段 约束：是子网dns服务器地址1跟子网dns服务器地址2的合集的父集，不支持IPv6地址。 默认值：不填时为空，无法使用云内网DNS功能 [内网DNS地址请参见](https://support.huaweicloud.com/dns_faq/dns_faq_002.html) [通过API获取请参见](https://support.huaweicloud.com/api-dns/dns_api_69001.html)
    /// </summary>

    std::vector<std::string>& getDnsList();
    bool dnsListIsSet() const;
    void unsetdnsList();
    void setDnsList(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：子网所在的可用分区标识 约束：系统存在的可用分区标识
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 子网配置的NTP地址或租约时间
    /// </summary>

    std::vector<ExtraDhcpOption>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOption>& value);

    /// <summary>
    /// 功能说明：子网资源标签。创建子网时，给子网添加资源标签。 取值范围：最大10个标签, key：标签名称; value：标签值。 格式：[key*value]，每一个标签的key和value之间用*连接
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string gatewayIp_;
    bool gatewayIpIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    bool dhcpEnable_;
    bool dhcpEnableIsSet_;
    std::string primaryDns_;
    bool primaryDnsIsSet_;
    std::string secondaryDns_;
    bool secondaryDnsIsSet_;
    std::vector<std::string> dnsList_;
    bool dnsListIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::vector<ExtraDhcpOption> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetOption_H_
