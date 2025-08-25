
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotEniNetwork_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotEniNetwork_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AutopilotNetworkSubnet.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ENI网络配置。 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotEniNetwork
    : public ModelBase
{
public:
    AutopilotEniNetwork();
    virtual ~AutopilotEniNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotEniNetwork members

    /// <summary>
    /// ENI所在子网的IPv4子网ID列表。获取方法如下：  - 方法1：登录虚拟私有云服务的控制台界面，单击VPC下的子网，进入子网详情页面，查找IPv4子网ID。 - 方法2：通过虚拟私有云服务的查询子网列表接口查询。   [链接请参见[查询子网列表](https://support.huaweicloud.com/api-vpc/vpc_subnet01_0003.html)](tag:hws)   [链接请参见[查询子网列表](https://support.huaweicloud.com/intl/zh-cn/api-vpc/vpc_subnet01_0003.html)](tag:hws_hk)
    /// </summary>

    std::vector<AutopilotNetworkSubnet>& getSubnets();
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const std::vector<AutopilotNetworkSubnet>& value);


protected:
    std::vector<AutopilotNetworkSubnet> subnets_;
    bool subnetsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotEniNetwork_H_
