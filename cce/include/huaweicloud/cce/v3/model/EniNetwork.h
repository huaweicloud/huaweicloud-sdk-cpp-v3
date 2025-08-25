
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_EniNetwork_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_EniNetwork_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NetworkSubnet.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ENI网络配置，创建集群指定使用云原生网络2.0网络模式时必填subnets和eniSubnetId其中一个字段(eniSubnetCIDR可选，若填写了会校验是否合法)，1.19.10及新版本集群使用subnets字段，1.19.8及老版本若使用subnets字段，则取值subnets数组中的第一个子网ID作为容器地址使用的子网ID。 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  EniNetwork
    : public ModelBase
{
public:
    EniNetwork();
    virtual ~EniNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EniNetwork members

    /// <summary>
    /// ENI所在子网的IPv4子网ID(暂不支持IPv6,废弃中)。获取方法如下：  - 方法1：登录虚拟私有云服务的控制台界面，单击VPC下的子网，进入子网详情页面，查找IPv4子网ID。 - 方法2：通过虚拟私有云服务的查询子网列表接口查询。   [链接请参见[查询子网列表](https://support.huaweicloud.com/api-vpc/vpc_subnet01_0003.html)](tag:hws)   [链接请参见[查询子网列表](https://support.huaweicloud.com/intl/zh-cn/api-vpc/vpc_subnet01_0003.html)](tag:hws_hk)
    /// </summary>

    std::string getEniSubnetId() const;
    bool eniSubnetIdIsSet() const;
    void unseteniSubnetId();
    void setEniSubnetId(const std::string& value);

    /// <summary>
    /// ENI子网CIDR(废弃中)
    /// </summary>

    std::string getEniSubnetCIDR() const;
    bool eniSubnetCIDRIsSet() const;
    void unseteniSubnetCIDR();
    void setEniSubnetCIDR(const std::string& value);

    /// <summary>
    /// IPv4子网ID列表
    /// </summary>

    std::vector<NetworkSubnet>& getSubnets();
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const std::vector<NetworkSubnet>& value);


protected:
    std::string eniSubnetId_;
    bool eniSubnetIdIsSet_;
    std::string eniSubnetCIDR_;
    bool eniSubnetCIDRIsSet_;
    std::vector<NetworkSubnet> subnets_;
    bool subnetsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_EniNetwork_H_
