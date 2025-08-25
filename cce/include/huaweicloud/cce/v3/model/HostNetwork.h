
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_HostNetwork_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_HostNetwork_H_


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
/// Node network parameters.
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  HostNetwork
    : public ModelBase
{
public:
    HostNetwork();
    virtual ~HostNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HostNetwork members

    /// <summary>
    /// 用于创建控制节点的VPC的ID。  获取方法如下： - 方法1：登录虚拟私有云服务的控制台界面，在虚拟私有云的详情页面查找VPC ID。 - 方法2：通过虚拟私有云服务的API接口查询。   [链接请参见[查询VPC列表](https://support.huaweicloud.com/api-vpc/vpc_api01_0003.html)](tag:hws)   [链接请参见[查询VPC列表](https://support.huaweicloud.com/intl/zh-cn/api-vpc/vpc_api01_0003.html)](tag:hws_hk) 
    /// </summary>

    std::string getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const std::string& value);

    /// <summary>
    /// 用于创建控制节点的subnet的网络ID。获取方法如下：  - 方法1：登录虚拟私有云服务的控制台界面，单击VPC下的子网，进入子网详情页面，查找网络ID。 - 方法2：通过虚拟私有云服务的查询子网列表接口查询。   [链接请参见[查询子网列表](https://support.huaweicloud.com/api-vpc/vpc_subnet01_0003.html)](tag:hws)   [链接请参见[查询子网列表](https://support.huaweicloud.com/intl/zh-cn/api-vpc/vpc_subnet01_0003.html)](tag:hws_hk)  
    /// </summary>

    std::string getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const std::string& value);

    /// <summary>
    /// 集群默认的Node节点安全组ID，不指定该字段系统将自动为用户创建默认Node节点安全组，指定该字段时集群将绑定指定的安全组。Node节点安全组需要放通部分端口来保证正常通信。[详细设置请参考[集群安全组规则配置](https://support.huaweicloud.com/cce_faq/cce_faq_00265.html)。](tag:hws)[详细设置请参考[集群安全组规则配置](https://support.huaweicloud.com/intl/zh-cn/cce_faq/cce_faq_00265.html)。](tag:hws_hk) 
    /// </summary>

    std::string getSecurityGroup() const;
    bool securityGroupIsSet() const;
    void unsetsecurityGroup();
    void setSecurityGroup(const std::string& value);


protected:
    std::string vpc_;
    bool vpcIsSet_;
    std::string subnet_;
    bool subnetIsSet_;
    std::string securityGroup_;
    bool securityGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_HostNetwork_H_
