
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListPortsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListPortsRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronListPortsRequest
    : public ModelBase
{
public:
    NeutronListPortsRequest();
    virtual ~NeutronListPortsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronListPortsRequest members

    /// <summary>
    /// 每页返回的个数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页查询起始的资源ID，为空时查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 按照端口的ID过滤查询
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 按照端口的名称过滤查询
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 按照端口的管理状态过滤查询，取值范围：true or false
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 按照端口所属的网络ID过滤查询
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// 按照端口的mac地址过滤查询
    /// </summary>

    std::string getMacAddress() const;
    bool macAddressIsSet() const;
    void unsetmacAddress();
    void setMacAddress(const std::string& value);

    /// <summary>
    /// 按照端口的设备ID过滤查询
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 按照端口的设备所属过滤查询
    /// </summary>

    std::string getDeviceOwner() const;
    bool deviceOwnerIsSet() const;
    void unsetdeviceOwner();
    void setDeviceOwner(const std::string& value);

    /// <summary>
    /// 按照端口状态过滤查询，取值范围：ACTIVE、BUILD、DOWN
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 按照安全组ID列表过滤查询
    /// </summary>

    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);

    /// <summary>
    /// 按照端口的IP地址过滤查询，fixed_ips&#x3D;ip_address或者fixed_ips&#x3D;subnet_id过滤查询
    /// </summary>

    std::vector<std::string>& getFixedIps();
    bool fixedIpsIsSet() const;
    void unsetfixedIps();
    void setFixedIps(const std::vector<std::string>& value);

    /// <summary>
    /// 按照端口所属的项目ID过滤查询
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    std::string macAddress_;
    bool macAddressIsSet_;
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::string deviceOwner_;
    bool deviceOwnerIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<std::string> fixedIps_;
    bool fixedIpsIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListPortsRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListPortsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronListPortsRequest_H_
