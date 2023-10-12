
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipResp_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/BandwidthResp.h>
#include <huaweicloud/eip/v3/model/VnicResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 弹性公网IP对象返回模板
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  PublicipResp
    : public ModelBase
{
public:
    PublicipResp();
    virtual ~PublicipResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicipResp members

    /// <summary>
    /// - 功能说明：弹性公网IP的唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// - 功能说明：项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// - 功能说明: 弹性公网IP版本号 - 取值范围: 4、6   - 4表示公网IP地址为public_ip_address地址   - 6表示公网IP地址为public_ipv6_address地址
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// - 功能说明: 弹性公网IPv4地址
    /// </summary>

    std::string getPublicIpAddress() const;
    bool publicIpAddressIsSet() const;
    void unsetpublicIpAddress();
    void setPublicIpAddress(const std::string& value);

    /// <summary>
    /// - 功能说明: 弹性公网IPv6地址
    /// </summary>

    std::string getPublicIpv6Address() const;
    bool publicIpv6AddressIsSet() const;
    void unsetpublicIpv6Address();
    void setPublicIpv6Address(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP的状态 - 取值范围：FREEZED，DOWN，ACTIVE，ERROR。   - FREEZED表示弹性公网IP处于冻结状态   - DOWN表示弹性公网IP未绑定实例   - ACTIVE表示弹性公网IP绑定实例，正在使用中   - ERROR表示弹性公网IP状态异常
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP的描述信息 - 约束：用户以自定义方式标识资源，系统不感知
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP的创建时间 - 约束：UTC时间格式（2018-12-25T10:07:24Z）
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP最近的更新时间 - 约束：UTC时间格式（2018-12-25T10:09:20Z）
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP的类型 - 取值范围：EIP，DUALSTACK
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VnicResp getVnic() const;
    bool vnicIsSet() const;
    void unsetvnic();
    void setVnic(const VnicResp& value);

    /// <summary>
    /// 
    /// </summary>

    BandwidthResp getBandwidth() const;
    bool bandwidthIsSet() const;
    void unsetbandwidth();
    void setBandwidth(const BandwidthResp& value);

    /// <summary>
    /// - 功能说明：弹性公网IP的企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP的订单信息 - 约束：包周期才会有订单信息，按需资源此字段为空
    /// </summary>

    std::string getBillingInfo() const;
    bool billingInfoIsSet() const;
    void unsetbillingInfo();
    void setBillingInfo(const std::string& value);

    /// <summary>
    /// - 功能说明：记录弹性公网IP当前的冻结状态 - 约束：metadata类型，标识欠费冻结、公安冻结
    /// </summary>

    std::string getLockStatus() const;
    bool lockStatusIsSet() const;
    void unsetlockStatus();
    void setLockStatus(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP绑定的实例类型 - 取值范围：PORT、NATGW、ELB、ELBV1、VPN 
    /// </summary>

    std::string getAssociateInstanceType() const;
    bool associateInstanceTypeIsSet() const;
    void unsetassociateInstanceType();
    void setAssociateInstanceType(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP绑定的实例ID
    /// </summary>

    std::string getAssociateInstanceId() const;
    bool associateInstanceIdIsSet() const;
    void unsetassociateInstanceId();
    void setAssociateInstanceId(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP所属网络的ID。publicip_pool_name对应的网络ID
    /// </summary>

    std::string getPublicipPoolId() const;
    bool publicipPoolIdIsSet() const;
    void unsetpublicipPoolId();
    void setPublicipPoolId(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP的网络类型， 包括公共池类型，如5_bgp/5_sbgp...，和用户购买的专属池。专属池见publcip_pool相关接口
    /// </summary>

    std::string getPublicipPoolName() const;
    bool publicipPoolNameIsSet() const;
    void unsetpublicipPoolName();
    void setPublicipPoolName(const std::string& value);

    /// <summary>
    /// - 功能说明：弹性公网IP别名
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// - 功能说明：中心还是边缘。中心CENTER，边缘为各边缘az名称
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string publicIpAddress_;
    bool publicIpAddressIsSet_;
    std::string publicIpv6Address_;
    bool publicIpv6AddressIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string type_;
    bool typeIsSet_;
    VnicResp vnic_;
    bool vnicIsSet_;
    BandwidthResp bandwidth_;
    bool bandwidthIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string billingInfo_;
    bool billingInfoIsSet_;
    std::string lockStatus_;
    bool lockStatusIsSet_;
    std::string associateInstanceType_;
    bool associateInstanceTypeIsSet_;
    std::string associateInstanceId_;
    bool associateInstanceIdIsSet_;
    std::string publicipPoolId_;
    bool publicipPoolIdIsSet_;
    std::string publicipPoolName_;
    bool publicipPoolNameIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_PublicipResp_H_
