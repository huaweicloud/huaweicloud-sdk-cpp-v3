
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_Privateip_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_Privateip_H_


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
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  Privateip
    : public ModelBase
{
public:
    Privateip();
    virtual ~Privateip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Privateip members

    /// <summary>
    /// 私有IP的状态  - ACTIVE：活动的  - DOWN：不可用
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 私有IP ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 分配IP的子网标识
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 私有IP的使用者，空表示未使用 取值范围：network:dhcp，network:router_interface_distributed，compute:xxx(xxx对应具体的az名称，例如compute:aa-bb-cc表示是被aa-bb-cc上的虚拟机使用) 约束：此处的取值范围只是本服务支持的类型，其他类型未做标注
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// 申请到的私有IP
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string deviceOwner_;
    bool deviceOwnerIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_Privateip_H_
