
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EipResource_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EipResource_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// EIP资源防护信息
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  EipResource
    : public ModelBase
{
public:
    EipResource();
    virtual ~EipResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EipResource members

    /// <summary>
    /// 弹性公网ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 弹性公网IP
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// EIP防护状态，0表示防护中，1表示未防护
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 弹性公网IP,IPV6类型
    /// </summary>

    std::string getPublicIpv6() const;
    bool publicIpv6IsSet() const;
    void unsetpublicIpv6();
    void setPublicIpv6(const std::string& value);

    /// <summary>
    /// Eip所在账户企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// EIP绑定设备（如ecs，nat）id
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// EIP绑定设备（如ecs，nat）名称
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// EIP绑定设备（如ecs，nat）拥有者
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// **参数解释**： 关联实例类型 **约束限制**： 不涉及 **取值范围**： PORT：IPV4云服务器 NATGW：NAT网关 ELB： 负载均衡器 VPN： 虚拟专用网络 EVPN： 虚拟专用网络 IPV6_PORT：IPV6云服务器 **默认取值**： 不涉及
    /// </summary>

    std::string getAssociateInstanceType() const;
    bool associateInstanceTypeIsSet() const;
    void unsetassociateInstanceType();
    void setAssociateInstanceType(const std::string& value);

    /// <summary>
    /// 防火墙名称
    /// </summary>

    std::string getFwInstanceName() const;
    bool fwInstanceNameIsSet() const;
    void unsetfwInstanceName();
    void setFwInstanceName(const std::string& value);

    /// <summary>
    /// 防火墙实例id，创建云防火墙后用于标志防火墙由系统自动生成的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)。
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// Eip绑定的防火墙企业项目id
    /// </summary>

    std::string getFwEnterpriseProjectId() const;
    bool fwEnterpriseProjectIdIsSet() const;
    void unsetfwEnterpriseProjectId();
    void setFwEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，type为0时，object_id为互联网边界防护对象ID，type为1时，object_id为VPC边界防护对象ID。此处仅取type为0的防护对象id，可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 标签列表
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// EIP所属用户id，可通过[获取账号、IAM用户、项目、用户组、区域、委托的名称和ID](cfw_02_0030.xml)获取。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 防火墙所属用户，可通过[获取账号、IAM用户、项目、用户组、区域、委托的名称和ID](cfw_02_0030.xml)获取。
    /// </summary>

    std::string getFwDomainId() const;
    bool fwDomainIdIsSet() const;
    void unsetfwDomainId();
    void setFwDomainId(const std::string& value);

    /// <summary>
    /// bypass状态，0: 未bypass, 1: 已bypass, 2: 失败
    /// </summary>

    int32_t getBypassStatus() const;
    bool bypassStatusIsSet() const;
    void unsetbypassStatus();
    void setBypassStatus(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string publicIpv6_;
    bool publicIpv6IsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;
    std::string deviceOwner_;
    bool deviceOwnerIsSet_;
    std::string associateInstanceType_;
    bool associateInstanceTypeIsSet_;
    std::string fwInstanceName_;
    bool fwInstanceNameIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string fwEnterpriseProjectId_;
    bool fwEnterpriseProjectIdIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string fwDomainId_;
    bool fwDomainIdIsSet_;
    int32_t bypassStatus_;
    bool bypassStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EipResource_H_
