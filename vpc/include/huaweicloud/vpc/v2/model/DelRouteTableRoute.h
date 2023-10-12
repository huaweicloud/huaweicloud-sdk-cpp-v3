
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_DelRouteTableRoute_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_DelRouteTableRoute_H_


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
/// 删除路由条目的字段
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  DelRouteTableRoute
    : public ModelBase
{
public:
    DelRouteTableRoute();
    virtual ~DelRouteTableRoute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DelRouteTableRoute members

    /// <summary>
    /// 功能说明：路由的类型 取值范围： ecs：弹性云服务器 eni：网卡 vip：虚拟IP nat：NAT网关 peering：对等连接 vpn：虚拟专用网络 dc：云专线 cc：云连接 egw：VPC终端节点
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 功能说明：路由目的网段 约束：合法的CIDR格式
    /// </summary>

    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);

    /// <summary>
    /// 功能说明：路由下一跳对象的ID 取值范围： 当type为ecs时，传入ecs实例ID 当type为eni时，取值为从网卡ID 当type为vip时，取值为vip对应的IP地址 当type为nat时，取值为nat实例对应的ID 当type为peering时，取值为peering对应实例ID 当type为vpn时，取值为vpn实例ID 当type为dc时，取值为dc实例ID 当type为cc时，取值为cc的实例ID
    /// </summary>

    std::string getNexthop() const;
    bool nexthopIsSet() const;
    void unsetnexthop();
    void setNexthop(const std::string& value);

    /// <summary>
    /// 功能说明：路由的描述信息 取值范围：0-255个字符，不能包含“&lt;”和“&gt;”
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string destination_;
    bool destinationIsSet_;
    std::string nexthop_;
    bool nexthopIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_DelRouteTableRoute_H_
