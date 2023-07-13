
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_VnicInfo_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_VnicInfo_H_

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
/// 公网IP中的vnic对象，存储绑定PORT的相关信息
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  VnicInfo
    : public ModelBase
{
public:
    VnicInfo();
    virtual ~VnicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VnicInfo members

    /// <summary>
    /// 功能说明：私网IP地址
    /// </summary>

    std::string getPrivateIpAddress() const;
    bool privateIpAddressIsSet() const;
    void unsetprivateIpAddress();
    void setPrivateIpAddress(const std::string& value);

    /// <summary>
    /// 功能说明：端口所属设备ID 约束：不支持设置和更新,由系统自动维护
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 功能说明：设备所属 取值范围：合法设备所属,如network:dhcp、network:VIP_PORT、network:router_interface_distributed、network:router_centralized_snat 约束：不支持设置和更新,由系统自动维护
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// 功能说明：虚拟私有云ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 功能说明：端口ID
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 功能说明：端口profile信息
    /// </summary>

    std::string getPortProfile() const;
    bool portProfileIsSet() const;
    void unsetportProfile();
    void setPortProfile(const std::string& value);

    /// <summary>
    /// 功能说明：端口MAC地址 约束：由系统分配,不支持指定
    /// </summary>

    std::string getMac() const;
    bool macIsSet() const;
    void unsetmac();
    void setMac(const std::string& value);

    /// <summary>
    /// 功能说明：VTEP IP
    /// </summary>

    std::string getVtep() const;
    bool vtepIsSet() const;
    void unsetvtep();
    void setVtep(const std::string& value);

    /// <summary>
    /// 功能说明：VXLAN ID
    /// </summary>

    std::string getVni() const;
    bool vniIsSet() const;
    void unsetvni();
    void setVni(const std::string& value);

    /// <summary>
    /// 功能说明：端口所属实例ID,例如RDS实例ID 约束：不支持设置和更新,由系统自动维护
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 功能说明：端口所属实例类型,例如“RDS” 约束：不支持设置和更新,由系统自动维护
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);


protected:
    std::string privateIpAddress_;
    bool privateIpAddressIsSet_;
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string deviceOwner_;
    bool deviceOwnerIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string portProfile_;
    bool portProfileIsSet_;
    std::string mac_;
    bool macIsSet_;
    std::string vtep_;
    bool vtepIsSet_;
    std::string vni_;
    bool vniIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_VnicInfo_H_
