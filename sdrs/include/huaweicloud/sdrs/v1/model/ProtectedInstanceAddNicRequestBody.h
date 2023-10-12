
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAddNicRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAddNicRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/SecurityGroupsParams.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 保护实例添加网卡请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ProtectedInstanceAddNicRequestBody
    : public ModelBase
{
public:
    ProtectedInstanceAddNicRequestBody();
    virtual ~ProtectedInstanceAddNicRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectedInstanceAddNicRequestBody members

    /// <summary>
    /// 添加网卡的子网ID。该参数是子网的network_id，和neutron_network_id的值保持一致。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 添加网卡的安全组信息。默认为Sys-default安全组。
    /// </summary>

    std::vector<SecurityGroupsParams>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<SecurityGroupsParams>& value);

    /// <summary>
    /// IP地址，若无该参数表示自动分配IP地址。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::vector<SecurityGroupsParams> securityGroups_;
    bool securityGroupsIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAddNicRequestBody_H_
