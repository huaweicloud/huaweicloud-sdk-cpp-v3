
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_VnicResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_VnicResp_H_

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
/// 弹性公网IP中的vnic对象，存储绑定PORT的相关信息
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  VnicResp
    : public ModelBase
{
public:
    VnicResp();
    virtual ~VnicResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VnicResp members

    /// <summary>
    /// - 功能说明：PORT的内网地址
    /// </summary>

    std::string getPrivateIpAddress() const;
    bool privateIpAddressIsSet() const;
    void unsetprivateIpAddress();
    void setPrivateIpAddress(const std::string& value);

    /// <summary>
    /// - 功能说明：PORT的device_id - 约束：存在PORT时，此字段associate_instance_id相同，都为实例ID
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// - 功能说明：PORT的device_owner - 约束：存在PORT时，此字段和associate_instance_type都可区分实例类型
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// - 功能说明：VTEP IP
    /// </summary>

    std::string getVtep() const;
    bool vtepIsSet() const;
    void unsetvtep();
    void setVtep(const std::string& value);

    /// <summary>
    /// - 功能说明：VXLAN ID
    /// </summary>

    std::string getVni() const;
    bool vniIsSet() const;
    void unsetvni();
    void setVni(const std::string& value);

    /// <summary>
    /// - 功能说明：PORT所在VPC的ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// - 功能说明：PORT的唯一标识
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// - 功能说明：端口profile信息
    /// </summary>

    std::string getPortProfile() const;
    bool portProfileIsSet() const;
    void unsetportProfile();
    void setPortProfile(const std::string& value);

    /// <summary>
    /// - 功能说明：PORT的MAC信息
    /// </summary>

    std::string getMac() const;
    bool macIsSet() const;
    void unsetmac();
    void setMac(const std::string& value);

    /// <summary>
    /// - 功能说明：PORT的使用者，不同于device_id的归属者。举例：vip port的device_owner为vip，但是这个port实际使用者可能是虚机或其他
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// - 功能说明：标记PORT使用者，与instance_id组合使用
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
    std::string vtep_;
    bool vtepIsSet_;
    std::string vni_;
    bool vniIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string portProfile_;
    bool portProfileIsSet_;
    std::string mac_;
    bool macIsSet_;
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_VnicResp_H_
