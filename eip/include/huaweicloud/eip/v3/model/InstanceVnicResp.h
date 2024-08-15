
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_InstanceVnicResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_InstanceVnicResp_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 实例port的信息
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  InstanceVnicResp
    : public ModelBase
{
public:
    InstanceVnicResp();
    virtual ~InstanceVnicResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceVnicResp members

    /// <summary>
    /// 实例port的ip地址
    /// </summary>

    std::string getPrivateIpAddress() const;
    bool privateIpAddressIsSet() const;
    void unsetprivateIpAddress();
    void setPrivateIpAddress(const std::string& value);

    /// <summary>
    /// port的device_id
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// port的device_owner
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// port的vpc_id
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// port的uuid
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// port的mac地址
    /// </summary>

    std::string getMac() const;
    bool macIsSet() const;
    void unsetmac();
    void setMac(const std::string& value);

    /// <summary>
    /// port的vtep地址
    /// </summary>

    std::string getVtep() const;
    bool vtepIsSet() const;
    void unsetvtep();
    void setVtep(const std::string& value);

    /// <summary>
    /// port的vni
    /// </summary>

    std::string getVni() const;
    bool vniIsSet() const;
    void unsetvni();
    void setVni(const std::string& value);

    /// <summary>
    /// port的实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// port的实例类型
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// port的profile
    /// </summary>

    std::string getPortProfile() const;
    bool portProfileIsSet() const;
    void unsetportProfile();
    void setPortProfile(const std::string& value);


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
    std::string portProfile_;
    bool portProfileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_InstanceVnicResp_H_
