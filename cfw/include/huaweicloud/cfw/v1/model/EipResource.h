
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EipResource_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EipResource_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
    /// 弹性公网IP,IPV6
    /// </summary>

    std::string getPublicIpv6() const;
    bool publicIpv6IsSet() const;
    void unsetpublicIpv6();
    void setPublicIpv6(const std::string& value);

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 设备id
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 设备名称
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// 设备拥有者
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// 关联实例类型
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
    /// 防火墙实例id，创建云防火墙后用于标志防火墙由系统自动生成的标志id，可通过调用查询防火墙实例接口获得。具体可参考APIExlorer和帮助中心FAQ。
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EipResource_H_
