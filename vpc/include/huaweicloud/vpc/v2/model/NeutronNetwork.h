
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronNetwork_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronNetwork_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// network对象列表
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronNetwork
    : public ModelBase
{
public:
    NeutronNetwork();
    virtual ~NeutronNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronNetwork members

    /// <summary>
    /// 网络ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：网络状态 取值范围：ACTIVE，DOWN，BUILD或ERROR
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 功能说明：网络名称 取值范围：0-255个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：网络关联的子网ID列表 约束：一个network仅支持关联一个 subnet。
    /// </summary>

    std::vector<std::string>& getSubnets();
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：扩展属性，是否外部网络 取值范围：true、false 约束：不支持设置和更新
    /// </summary>

    bool isRouterExternal() const;
    bool routerExternalIsSet() const;
    void unsetrouterExternal();
    void setRouterExternal(bool value);

    /// <summary>
    /// 功能说明：资源的管理状态 取值范围：true、false 约束：只支持true
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 功能说明：是否支持跨租户共享此资源 取值范围：true(共享)、false(非共享) 约束：不支持设置和更新
    /// </summary>

    bool isShared() const;
    bool sharedIsSet() const;
    void unsetshared();
    void setShared(bool value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 功能说明：扩展属性，网络类型（支持vxlan, geneve） 取值范围：vxlan，geneve
    /// </summary>

    std::string getProviderNetworkType() const;
    bool providerNetworkTypeIsSet() const;
    void unsetproviderNetworkType();
    void setProviderNetworkType(const std::string& value);

    /// <summary>
    /// 功能说明：本网络的候选可用域
    /// </summary>

    std::vector<std::string>& getAvailabilityZoneHints();
    bool availabilityZoneHintsIsSet() const;
    void unsetavailabilityZoneHints();
    void setAvailabilityZoneHints(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：本网络的可用域。 取值范围：当前region下的可用域
    /// </summary>

    std::vector<std::string>& getAvailabilityZones();
    bool availabilityZonesIsSet() const;
    void unsetavailabilityZones();
    void setAvailabilityZones(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：端口安全使能标记 取值范围：true（启用）、false（禁用） 约束：如果不使能，则network下所有虚机的安全组和dhcp防欺骗不生效
    /// </summary>

    bool isPortSecurityEnabled() const;
    bool portSecurityEnabledIsSet() const;
    void unsetportSecurityEnabled();
    void setPortSecurityEnabled(bool value);

    /// <summary>
    /// 功能说明：默认内网DNS域地址 约束：系统自动生成维护，不支持设置和更新
    /// </summary>

    std::string getDnsDomain() const;
    bool dnsDomainIsSet() const;
    void unsetdnsDomain();
    void setDnsDomain(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 功能说明：资源创建UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 功能说明：资源更新UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> subnets_;
    bool subnetsIsSet_;
    bool routerExternal_;
    bool routerExternalIsSet_;
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    bool shared_;
    bool sharedIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string providerNetworkType_;
    bool providerNetworkTypeIsSet_;
    std::vector<std::string> availabilityZoneHints_;
    bool availabilityZoneHintsIsSet_;
    std::vector<std::string> availabilityZones_;
    bool availabilityZonesIsSet_;
    bool portSecurityEnabled_;
    bool portSecurityEnabledIsSet_;
    std::string dnsDomain_;
    bool dnsDomainIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronNetwork_H_
