
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_VpcIgwsTenantResp_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_VpcIgwsTenantResp_H_


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
/// 虚拟IGW对象
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  VpcIgwsTenantResp
    : public ModelBase
{
public:
    VpcIgwsTenantResp();
    virtual ~VpcIgwsTenantResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VpcIgwsTenantResp members

    /// <summary>
    /// 虚拟IGW的uuid
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 虚拟IGW的租户id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 虚拟IGW的vpcid
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 虚拟IGW的名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 创建IGW使用的VPC具体子网
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// 是否使能IPV6
    /// </summary>

    bool isEnableIpv6() const;
    bool enableIpv6IsSet() const;
    void unsetenableIpv6();
    void setEnableIpv6(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    bool enableIpv6_;
    bool enableIpv6IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_VpcIgwsTenantResp_H_
