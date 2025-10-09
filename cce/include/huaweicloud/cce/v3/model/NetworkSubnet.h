
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NetworkSubnet_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NetworkSubnet_H_


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
/// ENI网络配置，创建集群指定subnets字段使用时必填。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NetworkSubnet
    : public ModelBase
{
public:
    NetworkSubnet();
    virtual ~NetworkSubnet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkSubnet members

    /// <summary>
    /// **参数解释：** 用于创建容器网卡的子网的IPv4子网ID。 **约束限制：** 暂不支持IPv6 **取值范围：** 不涉及 **默认取值：** 不涉及  获取方法如下：  - 方法1：登录虚拟私有云服务的控制台界面，单击VPC下的子网，进入子网详情页面，查找IPv4子网ID。 - 方法2：通过虚拟私有云服务的查询子网列表接口查询。 [链接请参见[查询子网列表](https://support.huaweicloud.com/api-vpc/vpc_subnet01_0003.html)。](tag:hws) [链接请参见[查询子网列表](https://support.huaweicloud.com/intl/zh-cn/api-vpc/vpc_subnet01_0003.html)。](tag:hws_hk)
    /// </summary>

    std::string getSubnetID() const;
    bool subnetIDIsSet() const;
    void unsetsubnetID();
    void setSubnetID(const std::string& value);


protected:
    std::string subnetID_;
    bool subnetIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NetworkSubnet_H_
